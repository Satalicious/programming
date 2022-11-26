
class Circle {
public:
  Circle() = default;  // use the compiler-generated default constructor
  Circle(double area, double circumference, double radius) : x{x}, y{y} {
    this->area(area); // `this` allows to reuse `radius` as parameter
    this->circumference(circumference);
    this->radius(radius);
  }
  double x {0.0};  // use public member instead of trivial getters / setters
  double y {0.0};

  double radius() const;
  double area() const;
  double circumference() const;

private:
  double radius_ {1.0};  // default value is better than ctor default argument
  double area_ {1.0}; 
  double circumference_ {1.0};  
};  // end class definition with a semicolon