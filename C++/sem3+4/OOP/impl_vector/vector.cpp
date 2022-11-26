#include "vector.hpp"
#include <algorithm>
#include <iostream>

namespace ds {

void IntVector::resize(std::size_t new_space) {
  if (new_space <= space_) return;  // never shrink
  int* new_elements = new int[new_space];
  std::copy(elements_, elements_ + size_, new_elements);
  delete[] elements_;
  elements_ = new_elements;
  space_ = new_space;
}

void IntVector::push_back(int value) {
  if (space_ == 0) {
    resize(8);  // default size is 8
  } else if (space_ == size_) {
    resize(space_ * 2);
  }
  elements_[size_] = value;
  ++size_;
}

int IntVector::pop_back() {
  if (!size_) {
    std::cerr << "ERROR: cannot pop element of empty Vector" << std::endl;
    return 0;
  }
  --size_;
  return elements_[size_];
}

}