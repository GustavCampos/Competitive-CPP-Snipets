#include <iostream>

using namespace std;

int main() {
	int input;
	
	cin >> input;
	
	for (int i = 2; i <= input; i += 2) {
		cout << i << "^2 = " << (i * i) << endl;
	}
	
	return 0;
}