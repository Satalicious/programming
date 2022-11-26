#ifndef INT_VECTOR_HPP
#define INT_VECTOR_HPP
#include <iostream>

namespace ds {  // namespace for our own data structures (ds)
class IntVector {  // very simplified int vector class
public:
  IntVector() : size_{0}, space_{0}, elements_(nullptr) {};  // constructor
  ~IntVector() { delete[] elements_; }  // destructor
  IntVector(const IntVector&) = delete;  // no copy constructor
  IntVector& operator=(const IntVector& other) = delete;  // no copy assignment
  void push_back(int elem);
  int pop_back();
  std::size_t size() { return size_; }  // optimized by compiler if in header
private:
  std::size_t size_;
  std::size_t space_;
  int* elements_;
  void resize(std::size_t size);
};
}
#endif