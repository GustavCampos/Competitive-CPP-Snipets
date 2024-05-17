#include <iostream>

using namespace std;

int fib(int i, int& counter) {
	counter += 1;
	
	if (i == 0) return 0;
	if (i == 1) return 1;
	
	return fib(i - 1, counter) + fib(i - 2, counter);
}

int main() {
	int numberOfCases, n, contador;
	
	cin >> numberOfCases;
	
	for (int i = 0; i < numberOfCases; i++) {
		contador = -1; //primeira execucao da funcao nao conta
	
		cin >> n;
		
		int result = fib(n, contador); 
		
		cout << "fib(" << n << ") = " << contador << " calls = " << result << endl;	
	}	
	
	return 0;
}