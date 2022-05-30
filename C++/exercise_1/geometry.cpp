/*Geometry functions
Implement the following functions calculating the perimeters, areas, surfaces or volumes of common geometric shapes:
surface_cylinder(r, h)
volume_cylinder(r, h)
surface_cone(r, h)
volume_cone(r, h) */
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
#include <iostream>

// TODO: implement the missing functions
double surface_cylinder(double r, double h) {
  return 2 * M_PI * r * r + 2 * M_PI * r * h;
}

double volume_cylinder(double r,double h) {
  return h * M_PI * r * r;
}

double surface_cone(double r, double h) {
  return M_PI * r * (r + sqrt(h*h + r*r));
}

double volume_cone(double r, double h) {
  return M_PI * r * r * h / 3;
}

int main(int argc, char** argv) {
  if (argc != 3) {
    std::cout << "Usage: " << argv[0] << " radius height\n";
    return 1;
  }
  double radius(std::atof(argv[1]));
  double height(std::atof(argv[2]));
  std::cout << std::fixed << std::setprecision(2);
  std::cout << "surface_cylinder(" << radius << ", " << height << "): ";
  std::cout << surface_cylinder(radius, height) << "\n";
  std::cout << "volume_cylinder(" << radius << ", " << height << "): ";
  std::cout << volume_cylinder(radius, height) << "\n";
  std::cout << "surface_cone(" << radius << ", " << height << "): ";
  std::cout << surface_cone(radius, height) << "\n";
  std::cout << "volume_cone(" << radius << ", " << height << "): ";
  std::cout << volume_cone(radius, height) << "\n";
  return 0;
}
