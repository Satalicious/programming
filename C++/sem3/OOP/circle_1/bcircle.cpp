#include <iostream>
#include <vector>
class Circle {
public:
  Circle() = default;  // use the compiler-generated default constructor
  Circle(double x, double y, double radius) : x{x}, y{y} {
    this->radius(radius);  // `this` allows to reuse `radius` as parameter
  }
  double x {0.0};  // use public member instead of trivial getters / setters
  double y {0.0};
  double radius() const { return radius_; }  // getter;
  void radius(double radius) {  // setter ensures a valid circle
    if (radius >= 0) { radius_ = radius; return; }
    std::cerr << "not allowed to set negative radius" << std::endl;
  }
  double area() const;
  double circumference() const;
private:
  double radius_ {1.0};  // default value is better than ctor default argument
};  // end class definition with a semicolon

int main() {
  Circle c;
  std::cout << "radius: " << c.radius() << std::endl;
  c.radius(1.5);
  std::cout << "radius: " << c.radius() << std::endl;
  c.radius(-1);
  std::cout << "radius: " << c.radius() << std::endl;
  Circle c2 {0, 0, -1};
  std::cout << "c2.radius: " << c2.radius() << std::endl;
  bool b1 = true;
  auto b2 = not b1;
  std::cout << "b2: " << b2 << "b1: " << b1 << std::endl;
  std::vector<double> numbers = {0, 1, 2, 3, 4, 5};
  for (auto&i : numbers) {
    std::cout << i << std::endl;
  }
}