/*
beecrowd | 2222
Playing with Sets

By Gabriel Duarte, UNIFESO BR Brazil
Timelimit: 1

Dabriel is a fissured boy for mathematics, today he learned at his school some
set operations. After spending the afternoon playing with some sets that he has,
it's time to solve the homework, but he is already very tired and afraid to make
some mistakes, asked for your help.

Dabriel wants a computer program that given N sets and the elements of each set,
it can perform some operations, they are:

1 X Y: Returns the number of distinct elements in the intersection of the set X and Y.
2 X Y: RReturns the number of distinct elements in the union of the set X and Y.

Input
The input consists of several test cases. Each test case starts with an integer T,
indicating the number of instances. Each instance starts with an integer N
(1 ≤ N ≤ 10⁴), representing the number of sets that Dabriel has. The next N lines
begin with a integer Mi (1 ≤ Mi ≤ 60), indicating the total number of elements
that set i have, then follows Mi integers Xij (1 ≤ Xij ≤ 60), representing the
value of each element. The next line has a integer Q (1 ≤ Q ≤ 10⁶), representing
how many operations Dabriel want to perform. In the next Q lines have the description
of an operation. The input ends with N = 0 and should not be processed.

Output
For each operation, your program should print the number of elements, as explained
in the description.
*/
#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int testCases, a, b;
    int setQtt;
    int setSize;
    int setIndex;
    long operationQtt;
    int operationType;
    vector<bitset<60>> setArr;
    bitset<60> opResult;

    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        setArr.clear();

        cin >> setQtt;
        for (int ii = 0; ii < setQtt; ii++) {
            cin >> setSize;
            bitset<60> currentSet;
            for (int iii = 0; iii < setSize; iii++) {
                cin >> setIndex;
                currentSet.set(setIndex - 1);
            }

            setArr.push_back(currentSet);
        }

        cin >> operationQtt;
        for (int i = 0; i < operationQtt; i++) {
            cin >> operationType >> a >> b;
            a--; b--;
    
            opResult = operationType < 2 
                ? setArr[a] & setArr[b] 
                : setArr[a] | setArr[b];
    
            cout << opResult.count() << endl;
        }
    }
	return 0;
}
