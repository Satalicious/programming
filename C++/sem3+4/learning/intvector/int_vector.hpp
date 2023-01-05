#ifndef INT_VECTOR_HPP
#define INT_VECTOR_HPP
#include <iostream>

namespace ds {  // namespace for our own data structures (ds)
class IntVector {  // very simplified int vector class
public:
  IntVector() = default;  // compiler generated default constructor
  ~IntVector() { delete[] elements_; }  // destructor
  IntVector(const IntVector&) = delete;  // no copy constructor
  IntVector& operator=(const IntVector& other) = delete;  // no copy assignment
  void push_back(int elem);
  int pop_back();
  std::size_t size() { return size_; }  // optimized by compiler if in header
private:
  std::size_t size_ = 0;
  std::size_t space_ = 0;
  int* elements_ = nullptr;
  void resize(std::size_t size);
};
}
#endif  // INT_VECTOR_HPP