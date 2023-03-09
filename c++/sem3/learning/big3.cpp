
#include <iostream>
#include <string>

class Streng {
	public:
		~Streng() { delete str; }

		Streng& operator=(Streng& other) {
			if(this != &other) {	
				len = other.len;
				str = new std::string[len];
				for(auto i = 0; i < len; i++) {
					str[i] = other.str[i];
				}
			}
		}
		Streng(const Streng& other) {
			len = other.len;
			str = new std::string[len];
			for(auto i = 0; i < len; i++) {
				str[i] = other.str[i];
			}
		}

		Streng() : len{10} {
			str = new std::string[10];
			for(int i = 0; i < 5; i++) {
				str[i] = "this hurts";
			}
		}	
		
		int length() { return len; }
		void print() {
			for(int i = 0; i < len; i++) {
				std::cout << str[0] << " ";
			}
			std::cout << std::endl;
		}
	private:
		std::string* str;
		int len;
};

int main() {
	Streng* st = new Streng();

	Streng* st2 = new Streng(*st);
	std::cout << st2->length();
	st2->print();
	return 0;
}
