#include <iostream>

using namespace std;

int main() {
	int max, input, position;
	max = 0;
	
	for (int i = 1; i <= 100; i++) {
		cin >> input;
		
		if (input > max) {
			max = input;
			position = i;
		}
	}
	
	cout << max << endl << position << endl;
	
	return 0;
}