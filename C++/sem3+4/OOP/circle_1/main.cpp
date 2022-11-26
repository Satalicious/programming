#include "circle.cpp"

int main() {
  Circle c;
  std::cout << "radius: " << c.radius() << std::endl;
  c.radius(1.5);
  std::cout << "radius: " << c.radius() << std::endl;
  c.radius(-1);
  std::cout << "radius: " << c.radius() << std::endl;
  Circle c2 {0, 0, -1};
  std::cout << "c2.radius: " << c2.radius() << std::endl;
  std::cout << "=======================" << std::endl;

  Circle c3 {3, 3, 3};
  
  //c3.radius(3);
  std::cout << "circum " << c3.circumference() << std::endl;
  std::cout << "area " << c3.area() << std::endl;
}