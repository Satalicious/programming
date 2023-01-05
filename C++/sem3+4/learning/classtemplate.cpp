#include <iostream>

template <typename T>
class Point
{
private:
    T x, y;

public:
    Point(T xVal, T yVal) {
        x = xVal;
        y = yVal;
    }

    T getX() { return x; }
    T getY() { return y; }

    void move(T newX, T newY) {
        x = newX;
        y = newY;
    }
};

int main()
{
    // Create a Point object with int coordinates
    Point<int> p1(1, 2);
    std::cout << "p1: " << p1.getX() << ", " << p1.getY() << std::endl;
    p1.move(3,4);
    std::cout << "p1: " << p1.getX() << ", " << p1.getY() << std::endl;
    
    // Create a Point object with double coordinates
    Point<double> p2(1.5, 2.5);
    std::cout << "p2: " << p2.getX() << ", " << p2.getY() << std::endl;
    return 0;
}
