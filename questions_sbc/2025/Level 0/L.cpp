#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    double m;

    cin >> m;

    double result = log2((double) m * pow(10, 6) * 8);

    cout << ceil(result) << endl;
}