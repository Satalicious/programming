
#ifndef TEST_HPP
#define TEST_HPP
#include <iostream>

namespace geo {
	class Circle{
		public:
			int radius();
			int getX();
			int getY();
			void move(int x, int y);
			void radius(int radius);
			void print();
			Circle(int x, int y, int radius);
			Circle();
			~Circle();
		private:
			int x_;
			int y_;
			int radius_;
	};

}
#endif
