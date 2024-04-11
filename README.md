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

Sort an array of any type in ascending order
```c
#include <stdlib.h>
#include <string.h>

//
// lhs: pointer to the left element
// rhs: pointer to the right element
//
// returns: 
// 	-1 if lhs is smaller than rhs
// 	 1 if lhs is greater than rhs
// 	 0 if they are equivalent
//
// notes:
// 	By swapping the -1 and 1 you could sort in descending order
// 	This example shows how to sort an array of strings, however 
// 	this could be applied to any type at all
//
int compare_cb(const void *lhs, const void *rhs) {
	const char *left_str = *(const char **)lhs;
	const char *right_str = *(const char **)rhs;
	
	size_t left_str_len = strlen(left_str);
	size_t right_str_len = strlen(right_str);
	
	if (left_str_len < right_str_len) {
		return -1;
	} else if (left_str_len > right_str_len) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	const char *strs[] = { 
		"teste",
		"abc",
		"12345678",
		"oi"
	};
	
	size_t n_strs = sizeof(strs) / sizeof(strs[0]); 

	// Sort the array using the compare_cb callback
	qsort(strs, n_strs, sizeof(strs[0]), compare_cb);
	
	// Expected result after sorting
	// strs = { 
	// 	"oi",
	//	"abc",
	//	"teste",
	//	"12345678"
	// };

	return 0;
}
```