#ifndef HEADER_HPP
#define HEADER_HPP

namespace ds {
class IntVector {
	public:
		IntVector();
		IntVector(int s);
		~IntVector();
		void resize(int s);
		int popback();
		void pushback(int e);
		void print();
	private:
		int size_;
		int count_ = 0;
		int* elements_;
};
}


#endif
