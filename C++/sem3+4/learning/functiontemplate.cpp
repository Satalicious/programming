#include <iostream>

template <class Type>  // compiler will generate a function for required types
void print_array(Type* array, size_t count);
int main(void) {
  int a1[] {1, 2, 3, 4};
  double a2[] {3.7, 9.4, 1.1, 12.9, -0.3};
  print_array(a1, 4);
  print_array(a2, 5);
  return 0;
}
template <class Type>
void print_array(Type* array, size_t count) {
  while (count) {
    std::cout << *array << std::endl;
    ++array;
    --count;
  }
}