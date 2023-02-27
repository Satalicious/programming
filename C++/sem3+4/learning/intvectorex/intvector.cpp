#include "header.hpp"
#include <iostream>

ds::IntVector::IntVector(int size) : size_{size} {} 
ds::IntVector::IntVector() : IntVector(0) {}
ds::IntVector::~IntVector() = default;

void ds::IntVector::resize(int s) {
	int* newar;
	if (size_ == 0) {
		newar = new int[8];
		size_ = 8;
	} else {
		newar = new int[s];
		size_ = s;
	}

	for (int i=0; i < count_; i++) {
		newar[i] = elements_[i];
	}
	elements_ = newar;
	delete newar;
}

int ds::IntVector::popback(){
	count_ --;
	return elements_[count_];
}

void ds::IntVector::pushback(int ele) {
	if (size_ == count_) {resize(size_ * 2);}
	elements_[count_] = ele;
	count_ ++;
}

void ds::IntVector::print() {
	for(int i = 0; i < count_; i++) {
		std::cout << elements_[i] << ", ";
	}
	std::cout << " \b\b" << std::endl;
}

