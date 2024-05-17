#include <iostream>
#include <regex>

using namespace std;

int main() {
	string str;
	int counter;
	
	while (getline(cin, str)) {
		if (str == "") break;
		
		counter = 0;
		
		for (char c : str) {
			if (counter < 0) break;
			
			if (c == '(') counter++;
			if (c == ')') counter--;
		}
		
		if (counter == 0) cout << "correct" << endl;
		else cout << "incorrect" << endl;
	}
	
	return 0;
}
	
///[(|)]*/gm