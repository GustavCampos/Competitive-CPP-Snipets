/*
beecrowd | 2238
Dividers

By Maratona de Programação da SBC – 2016 BR Brazil
Timelimit: 1 

Think a positive number n. Now tell me an A divisor of n. Now give me another B
number than n divider. Now a multiple C. and a non multiple D. The number you
thought is ...

It looks like a magic trick, but math! Does knowing the numbers A, B, C and D,
you can discover what the original number n? Note that there may be more than
one solution!

This problem, given the values of A, B, C and D, you should write a program
that determines which the smallest number n that may have been thought or
conclude that there is no possible value.

Input
The input consists of a single row containing four integers A, B, C, and D,
as described above (1 ≤ A, B, C, D ≤ 109).

Output
Your program should produce a single line. If there is at least a number n
for which A, B, C and D make sense, the line must contain the lowest possible
n. Otherwise, the line must contain -1.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    /**
     * A: Divisor
     * B: Nao divisor
     * C: Multiplo
     * D: Nao Multiplo
     */
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    for (int i = 0, n = A; i <= ceil(sqrt(C)); i++, n += A) {
        if (C % n != 0) continue;
        if (n % B == 0) continue;
        if (D % n == 0) continue;

        cout << n << endl;
        goto end;
    }

    if ((C % A == 0) && (C % B != 0) && (D % C != 0)) {
        cout << C << endl;
        goto end;
    } 

    cout << -1 << endl;
    end:
	return 0;
}