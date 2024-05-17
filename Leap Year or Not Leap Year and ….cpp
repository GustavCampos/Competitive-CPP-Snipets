#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	
	int mod4, mod100, mod400, mod15, mod55;
	
	bool isLeap, isHuluculu, isBulukulu;
	
	bool firstIteration = true;
	
	string year;
	
	while (getline(cin, year)) {		
		if (year.empty()) break;
	
		mod4 = mod100 = mod400 = mod15 = mod55 = 0;
		
		if (!firstIteration) cout << endl;
		else firstIteration = false;
		
		for  (char c : year) {			
			mod4   = ((mod4 * 10)   + (c - '0')) % 4;
			mod100 = ((mod100 * 10) + (c - '0')) % 100;
			mod400 = ((mod400 * 10) + (c - '0')) % 400;
			mod15  = ((mod15 * 10)  + (c - '0')) % 15;
			mod55  = ((mod55 * 10)  + (c - '0')) % 55;
		}
		
		isLeap = (mod400 == 0 || (mod4 == 0 && mod100 != 0));
		isHuluculu = (mod15 == 0);
		isBulukulu = (isLeap && mod55 == 0);
	
		if  (!isLeap && !isHuluculu && !isBulukulu) {
			cout << "This is an ordinary year." << endl;
		} else {
			if (isLeap) {
				cout << "This is leap year." << endl;
			}
			
			if (isHuluculu) {
				cout << "This is huluculu festival year." << endl;
			}
			
			if (isBulukulu) {
				cout << "This is bulukulu festival year." << endl;
			}
		}
	}
	
	return 0;
}