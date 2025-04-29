/*
 beecrowd | 1220
The Trip

By Gordon Cormack, Graeme Kemkes & Ian Munro Canada
Timelimit: 1 

Some students are members of a club that travels annually to exotic locations.
Their destinations in the past have included Indianapolis, Phoenix, Nashville,
Philadelphia, San Jose, and Atlanta. This spring they are planning a trip to 
Eindhoven. The group agrees in advance to share expenses equally, but it is not
practical to have them share every expense as it occurs. So individuals in the 
group pay for particular things, like meals, hotels, taxi rides, plane tickets,
etc. After the trip, each student's expenses are tallied and money is exchanged
so that the net cost to each is the same, to within one cent. In the past, this
money exchange has been tedious and time consuming. Your job is to compute, 
from a list of expenses, the minimum amount of money that must change hands in
order to equalize (within a cent) all the students' costs.

Input
The input will contain the information for several trips. The information for each
trip consists of a line containing a positive integer n (1 ≤ n ≤ 1000) indicating
the number of students on the trip, followed by n lines of input, each containing
the amount, in dollars and cents spent by a student. No student spent more than $10,000.00.

A single line containing 0 follows the information for the last trip.

Output
For each trip, output a line stating the total amount of money, in dollars and
cents, that must be exchanged to equalize the students' costs.
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n, sum, sumUpper;
    char dot;
    double conBase = 100;
    double v, normValue, avg;
    vector<int> payments;

    while (cin >> n && n != 0) {
        sum = 0;
        payments.clear();
        for (int i = 0; i < n; i++) {
            cin >> v;

            normValue = round(v * 100);

            payments.push_back(normValue);
            sum += normValue;
        }

        avg = sum / (double) n;
        
        sum = 0;
        sumUpper = 0;
        for (auto payment : payments) {
            if (payment < avg) {
                sum += (avg - payment);
            } else {
                sumUpper += (payment - avg);
            }  
        }

        cout << "$";
        cout << fixed << setprecision(2);
        cout << (max(sum, sumUpper) / conBase);
        cout << endl;
    }
    
	return 0;
}
