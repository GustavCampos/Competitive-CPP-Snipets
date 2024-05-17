#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Point {
	int X, Y, Z;
	
	Point(int x=0, int y=0, int z=0) : X(x), Y(y), Z(z) {};
};

double distanceBeetwen2PointsSquared(Point* p1, Point* p2) {
	return pow((p2->X - p1->X), 2) + pow((p2->Y - p1->Y), 2) + pow((p2->Z - p1->Z), 2);
}

int main() {
	ios_base::sync_with_stdio(false);
	
	int testCases, ip1, ip2, ip3;
	double minDistance, placeholder;
	
	cin >> testCases;
	
	Point rebelSpacecraft[4];
	Point empireSpacecraft[4];
	
	for (int i = 0; i < testCases; i++) {
		minDistance = 1e9;
		
		for (int j = 0; j < 4; j++) {
			cin >> ip1;
			cin >> ip2;
			cin >> ip3;
			
			rebelSpacecraft[j] = Point(ip1, ip2, ip3);
		}
		
		for (int j = 0; j < 4; j++) {
			cin >> ip1;
			cin >> ip2;
			cin >> ip3;
			
			empireSpacecraft[j] = Point(ip1, ip2, ip3);
		}
		
		for (Point rp : rebelSpacecraft) {
			for (Point ep : empireSpacecraft) {
				placeholder = distanceBeetwen2PointsSquared(&rp, &ep);
				
				if (placeholder < minDistance) {
					minDistance = placeholder;
				}
			}
		}
		
		cout << fixed << setprecision(2) << sqrt(minDistance) << endl;
	}
	
	return 0;
}