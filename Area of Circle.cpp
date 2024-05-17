#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double R, A;
    double pi = 3.14159;

    cin >> R;

    A = pi * R * R;

    cout << "A=" << fixed << setprecision(4) << A << endl;

    return 0;
}