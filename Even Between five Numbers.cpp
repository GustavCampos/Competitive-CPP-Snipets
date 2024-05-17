#include <iostream>

int main() {
	int value, counter;
	
	counter = 0;
	
	for (int i = 0; i < 5; i++) {
		std::cin >> value;
		
		if (value % 2 == 0) counter++;
	}
	
	std::cout << counter << " valores pares" << std::endl;
	
	return 0;
}