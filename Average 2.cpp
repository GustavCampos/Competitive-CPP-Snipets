#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double A, B, C, aWeight, bWeight, cWeight;
	
	aWeight = 2;
	bWeight = 3;
	cWeight = 5;
	
	cin >> A;
	cin >> B;
	cin >> C;
	
	double media = ((A * aWeight) + (B*bWeight) + (C*cWeight)) / (aWeight + bWeight + cWeight);
	
	cout << "MEDIA = " << fixed << setprecision(1) << media << endl;
	
	return 0;
}