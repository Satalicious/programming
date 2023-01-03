
#include <math.h>
#include <iostream>

class Circle {
public:
  Circle() = default;  // use the compiler-generated default constructor
  Circle(double x, double y, double radius) : x{x}, y{y} {
    this->radius(radius);
  }
  double x {0.0};  // use public member instead of trivial getters / setters
  double y {0.0};

  double radius();
  void radius(double radius);
  
  double area();
  void area(double area);
  
  double circumference();
  void circumference(double circumference);

private:
  double radius_ {1.0};  // default value is better than ctor default argument 
};  // end class definition with a semicolon