# Competitive-CPP-Snipets
A markdown with usefull snipets for competitive programming in c++.
---

Checks if a big number is divisible by some number
```c++
//bignum: string that represents a big number
//divisor: value you want to check divisibility
bool checkBignumDivisible(std::string bignum, int divisor) {
	int mod = 0;	
	
	for (char c : bignum) {
		mod = ((mod * 10) + (c - '0')) % divisor;
	
	}
	return (mod == 0);
}
```

Distance beetween 2 points squared (less expensive)
```c++
#include <cmath>

struct Point {
	int X, Y Z;
	
	Point(int x=0, int y=0, int z=0) : X(x), Y(y), Z(z) {};
}

double distanceBeetwen2PointsSquared(Point* p1, Point* p2) {
	return pow((p2->X - p1->X), 2) + pow((p2->Y - p1->Y), 2) + pow((p2->Z - p1->Z), 2)
}
```
