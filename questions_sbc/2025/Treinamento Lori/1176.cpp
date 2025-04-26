/*
beecrowd | 1176
Fibonacci Array

Adapted by Neilor Tonin, URI Brazil
Timelimit: 1 

Write a program that reads a number and print the Fibonacci number corresponding
to this read number. Remember that the first elements of the Fibonacci series
are 0 and 1 and each next term is the sum of the two preceding it. All the 
Fibonacci numbers calculated in this program must fit in a unsigned 64 bits number.

Input
The first line of the input contains a single integer T, indicating the number of
test cases. Each test case contains a single integer N (0 ≤ N ≤ 60), corresponding
to the N-th term of the Fibonacci series.

Output
For each test case in the input, print the message "Fib(N) = X", where X is the
N-th term of the Fibonacci series.
*/

#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

ll fibonacci(ll n, vector<ll>& cache) {
    if (n < cache.size()) return cache[n];

    ll value = fibonacci(n-1, cache) + fibonacci(n-2, cache);
    
    cache.push_back(value);

    return value;
}

int main() {
    ios_base::sync_with_stdio(false);

    vector<ll> cache = {0, 1};
    int t; 
    ll n;

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << "Fib(" << n << ") = " << fibonacci(n, cache) << endl;
    }

	return 0;
}