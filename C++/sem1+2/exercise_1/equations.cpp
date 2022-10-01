/*Equation solver
Write a function quadratic(a, b, c) that solves quadratic equations. The function does not have to be able to deal with input leading to complex numbers as results. */

#include <cmath>
#include <iostream>
#include <iomanip>
#include <utility>

std::pair<double, double> quadratic(double a, double b, double c) {
  double result1 = 0.0, result2 = 0.0;
  double discriminant = pow(b,2) - 4 * a * c;
  result1 = (-b + sqrt(discriminant)) / (2 * a);
  result2 = (-b - sqrt(discriminant)) / (2 * a);
  return std::pair<double, double>(result1, result2);
}


int main(int argc, char** argv) {
  if (argc != 4) {
    std::cout << "Usage: " << argv[0] << " a b c\n";
    return 1;
  }
  double a(std::atof(argv[1]));
  double b(std::atof(argv[2]));
  double c(std::atof(argv[3]));

  std::pair<double, double> result(quadratic(a, b, c));
  std::cout << "x1: " << std::setprecision(1) << std::fixed << result.first << "; x2: " << std::setprecision(1) << std::fixed << result.second << "\n";
  return 0;
}
