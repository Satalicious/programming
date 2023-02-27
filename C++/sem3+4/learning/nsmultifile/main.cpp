#include "test.hpp"

int main() {
        geo::Circle c;
        geo::Circle c2{5,5,5};
        geo::Circle fail{0,0,0};
        c.print();
        c.move(3,3);
        std::cout << "X: "<< c.getX() << " Y: " << c.getY() << " Radius: " << c.radius() << std::endl;
	c.radius(10);
	std::cout << "Radius: " << c.radius() << std::endl;
        c.radius(-5);
        std::cout << "X: "<< c2.getX() << " Y: " << c2.getY() << " Radius: " << c2.radius() << std::endl;
        return 0;

}
