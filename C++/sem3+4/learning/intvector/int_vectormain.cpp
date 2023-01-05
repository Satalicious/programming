#include "int_vector.hpp"
#include <iostream>

int main() {
  ds::IntVector v;
  v.push_back(5);
  v.push_back(1);
  v.push_back(10);
  std::cout << "last element: " << v.pop_back() << std::endl;
  std::cout << "last element: " << v.pop_back() << std::endl;
  std::cout << "last element: " << v.pop_back() << std::endl;
  std::cout << "last element: " << v.pop_back() << std::endl;
  return 0;
}