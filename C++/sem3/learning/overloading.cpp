
#include <iostream>
#include <vector>
#include <string>

template <class Type>
std::ostream& operator<<(std::ostream &out, const std::vector<Type> &v) {
	for(auto&e : v) {
		out << e << ", ";
	}
	out << "\b\b ";
	out << std::endl;
	return out;
}

int main() {
	std::vector<int> v {1,2,3,4,5};
	std::cout << v;
	std::vector<double> v2 {1.1, 2.1, 3.1, 4.5};
	std::cout << v2;
	std::vector<std::string> v3 {"timy du geile sau", "i weis e"};
	std::cout << v3;
	std::cout << "reverse: " << std::endl;
	for(auto it = v3.rbegin(); it != v3.rend(); it++) {
		std::cout << *it;
	}
	std::cout << std::endl;
	return 0;
}
