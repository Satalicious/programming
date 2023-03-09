
struct Coord {

Coord(int x, int y) : x_(x), y_(y) {};
Coord() : Coord(0,0) {};
~Coord();

int x_;
int y_;

void move(int newX, int newY){
    x_ = newX;
    y_ = newY;
}
};
