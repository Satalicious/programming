#include <iostream>
#include <cstdint>

uint64_t factorial(uint32_t n) {
	if(n <= 1) { return 1; }
	return n * factorial(n - 1);
}

int main() {
	for(int i = 0; i < 20; ++i) {
	std::cout << "factorial(" << i << ") :" << factorial(i) << std::endl;
	}
	// Seg fault
	//std::cout << "factorial(1000000) : " << factorial(1000000) << std::endl; 
	return 0;
}