#include "test.hpp"
#include <iostream>

geo::Circle::Circle(int x, int y, int r) : x_{x}, y_{y} { radius(r); }
geo::Circle::Circle() : Circle(1,1,1) {}
geo::Circle::~Circle() = default;
void geo::Circle::move(int x, int y) { x_ = x; y_ = y; }
void geo::Circle::radius(int radius) { 
	if (radius < 1) {
		std::cerr << "Circle cant be negative" << std::endl; return;
	}
	radius_ = radius; 
}
void geo::Circle::print() {
	std::cout << "y: " << getY() << "x: " << getX() << "r: " << radius() << std::endl;
}
int geo::Circle::radius() { return radius_; }
int geo::Circle::getX() { return x_;}
int geo::Circle::getY() { return y_;}



