  
  #include "circle.hpp"

  #include <math.h>
  #include <iostream>

  
  double radius() { return radius_; }  // getter;
  void radius(double radius) {  // setter ensures a valid circle
    if (radius >= 0) { radius_ = radius; return; }
    std::cerr << "not allowed to set negative radius" << std::endl;
  }
  
  double area() { return area_; }  // getter;
  void area(double area) {  // setter ensures a valid circle
    if (area >= 0) { area_ = M_PI * (radius() * radius()); return; }
    std::cerr << "not allowed to set negative area" << std::endl;
  }
  
  double circumference() { return circumference_; }  // getter;
  void circumference(double circumference) {  // setter ensures a valid circle
    if (circumference >= 0) { circumference_ = 2 * M_PI * radius(); return; }
    std::cerr << "not allowed to set negative circumference" << std::endl;
  }