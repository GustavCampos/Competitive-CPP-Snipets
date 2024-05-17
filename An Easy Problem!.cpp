#include <iostream>
#include <cstring>

using namespace std;

int getNumericValue(char c) {
	string baseRef = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	return (baseRef.find(c));
}

int getMinBase(string str) {
	int curBase, minBase = 0;
	
	for (char c : str) {
		curBase = getNumericValue(c);		
		if (curBase > minBase) minBase = curBase;
	}
	
	return minBase;
}

bool checkBignumDivisible(string bignum, int divisor) {
	int convertedValue, mod = 0;	
	
	for (char c : bignum) {
		convertedValue = getNumericValue(c);
		if (convertedValue < 0) convertedValue = 0;
		
		mod = ((mod * 10) + convertedValue) % divisor;
	
	}
	return (mod == 0);
}

int main() {
	ios_base::sync_with_stdio(false);
	
	int minBase;
	bool divisible;
	string str;
	
	while (true) {
		getline(cin, str);
		if (str.empty()) break;
	
		minBase = getMinBase(str);
		divisible = checkBignumDivisible(str, minBase);
		
		/*while (minBase <= 62 && !divisible) {
			//cout << minBase << " : " << divisible << endl;
			
			minBase++;
			divisible = checkBignumDivisible(str, minBase);
		}*/
		
		if (minBase > 62) {
			cout << "such number is impossible!" << endl;
		} else {
			cout << (minBase + 1) << endl;
			//cout << str << " is divisible? " << divisible << endl;
		}
	}
	
	return 0;
}