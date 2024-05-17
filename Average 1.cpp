#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double A, B, aWeight, bWeight;
	
	aWeight = 3.5;
	bWeight = 7.5;
	
	cin >> A;
	cin >> B;
	
	double media = ((A * aWeight) + (B*bWeight)) / (aWeight + bWeight);
	
	cout << "MEDIA = " << fixed << setprecision(5) << media << endl;
	
	return 0;
}