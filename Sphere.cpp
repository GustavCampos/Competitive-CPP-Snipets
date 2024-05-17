#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double R;
	double pi = 3.14159;
	
	cin >> R;
	
	double volume = (4.0/3.0) * pi * pow(R, 3);
	
	cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
	
	return 0;
}