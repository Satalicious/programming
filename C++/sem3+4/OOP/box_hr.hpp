#include<bits/stdc++.h>
#ifndef BOX_HR
#define BOX_HR
using namespace std;

class Box {
    public:
    Box(int l, int b, int h) : l_{l},b_{b},h_{h} {}; // constructor
    Box() : Box(0,0,0) {}; // constructor
    Box(Box& otherBox) { // copy constructor // Box test = newBox(oldtest);
        l_ = otherBox.l_;
        b_ = otherBox.b_;
        h_ = otherBox.h_;
    };
    ~Box() = default; // destrutor
    Box& operator=(const Box& other){ // copy assignemnt
        l_ = other.l_;
        b_ = other.b_; 
        h_ = other.h_;
        return *this;
    };

    int getLength() { return l_; }
    int getBreadth() { return b_; }
    int getHeight() { return h_; }
    // long long CalculateVolume(); // Return the volume of the box
    long long CalculateVolume()  {
        return (long long) this->b_ * (long long) this->h_ * (long long) this->l_;
    }
    //bool operator<(Box& a, Box& b)
    bool operator<(Box& b) {
      return (this->CalculateVolume() < b.CalculateVolume()); 
    };
    //ostream& operator<<(ostream& out, Box& b)
    friend ostream& operator<<(ostream& out, Box& b) {
        out << b.getLength()  << " " << b.getBreadth() << " " << b.getHeight();
        return out;
    }
    private:
    int l_,b_,h_{0};
};


class Box2 {
    public:
    Box2(int l, int b, int h) : l(l), b(b), h(h) {};
    Box2() : Box2(0,0,0) {}; 
    ~Box2() = default;
    Box2(Box2& other) {
        l = other.l;
        other.b = b;
        other.h = h;
    };
    int getLength() { return l; }
    int getBreadth () { return b;}
    int getHeight() { return h;}

    long long CalculateVolume()  {
        return (long long) this->b * (long long) this->h * (long long) this->l;
    }
    //bool operator<(Box& a, Box& b)
    bool operator<(Box& b) {
      return (this->CalculateVolume() < b.CalculateVolume()); 
    };
    
    
    private:
    int l,b,h;  
};

ostream& operator<<(ostream& out, Box& other) {
        out << other.getLength() << " " << other.getBreadth() << " " << other.getHeight();
        return out;
}
#endif