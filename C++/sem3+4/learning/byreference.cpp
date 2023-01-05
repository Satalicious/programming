#include <iostream>

void pass_by_reference(int& i) {
  i = 5;
  std::cout << "i: " << i << " (at the end of the called function)" << std::endl;
}

int main() {
  int i = 3;
  std::cout << "i: " << i << std::endl;
  pass_by_reference(i);
  std::cout << "i: " << i << " (after returning from function)" << std::endl;
  return 0;
}