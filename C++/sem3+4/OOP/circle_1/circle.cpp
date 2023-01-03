  
  #include "circle.hpp"

  #include <math.h>
  #include <iostream>

  double Circle::radius() { return radius_; }  // getter;
  void Circle::radius(double radius) {  // setter ensures a valid circle
    if (radius >= 0) { radius_ = radius; return; }
    std::cerr << "not allowed to set negative radius" << std::endl;
  }
  
  double Circle::area() { return M_PI * (radius() * radius()); }  // getter;

  
  double Circle::circumference() { return 2 * M_PI * radius(); }  // getter;

