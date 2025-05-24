#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    } else if (num == 2) {
        return true;
    }

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(false);

    long long x = 1;
    long long y, k;

    cin >> y >> k;

    if (isPrime(y)) {
        x += min((y - 1), k);

    }

    for (int i = 0; i <= k)

    x = x + (y * (k - steps));
    
    cout << x << endl;
}