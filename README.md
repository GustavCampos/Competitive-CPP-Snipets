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
