/*Write a function sum_to(num) that takes an integer num >= 0 as sole argument. The function should return the sum of all positive integers <= num. In the function, assert that the input is ≥ 0 by using assert. Hint: if you have trouble with warnings about types, have a look at Regular cast vs. static_cast vs. dynamic_cast. */
#include <assert.h>
#include <iostream>

/**
 * Sum all numbers from 0 up to a given integer.
 */
unsigned int sum_to(int num) {
  // TODO: implement this function
  unsigned int result = 0.0;
  for (int i = 0; i < num; i++) {
    result+=i;
  }
  return result+num;
}

int main(int argc, char** argv) {
  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " num\n";
    return 1;
  }
  int num(std::atoi(argv[1]));
  std::cout << "sum: " << sum_to(num) << "\n";
  return 0;
}
