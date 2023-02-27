#include "header.hpp"


int main() {
	ds::IntVector v;
	v.pushback(1);
	v.pushback(2);
	v.pushback(3);
	v.pushback(4);
	v.popback();
	v.print();
	return 0;
}
