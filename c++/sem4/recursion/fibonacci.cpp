#include <iostream>
#include <cstdint>
#include <map>

uint64_t fibonacci(uint32_t n) {
	static std::map<uint64_t,uint64_t> memo;
    if(n <= 1) { return 1; }
	auto it = memo.find(n);
	if (it == memo.end()) {
    	memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
		return memo[n];
	} else {
		return it->second;
	}
}

int main() {
	for(int i = 0; i < 100; ++i) {
	std::cout << "fibonacci(" << i << ") :" << fibonacci(i) << std::endl;
	}
	return 0;
}