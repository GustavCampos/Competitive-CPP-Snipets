#include <iostream>

using namespace std;

int main() {
	int testCases, initialChar;
	string A, B;
	
	cin >> testCases;
	
	for (int i = 0; i < testCases; i++) {
		
		cin >> A;
		cin >> B;
		
		initialChar = (A.length() - B.length());
		
		if (initialChar >= 0 && B == A.substr(initialChar)) cout << "encaixa";
		else cout << "nao encaixa";
		
		cout << endl;
	}
	
	return 0;
}