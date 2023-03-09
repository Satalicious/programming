/*
 Distance between two points
Write a program that asks the user for two points in a two-dimensional plane. The program must calculate and print the euclidean distance between the two points, rounded to 4 digits.
A sample run of this program:

First point's x-coordinate: 3.0
First point's y-coordinate: 7.0
Second point's x-coordinate: -2.0
Second point's y-coordinate: 3.0
The euclidean distance between the two points is 6.4031.
*/
#include <cmath>
#include <iomanip>
#include <iostream>
#include <math.h>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;
using std::pow;

int main() {
  double x1, x2, y1, y2, distance;
  cout << "First point's x-coordinate: ";
  cin >> x1;
  cout << "First point's y-coordinate: ";
  cin >> y1;
  cout << "Second point's x-coordinate: ";
  cin >> x2;
  cout << "Second point's y-coordinate: ";
  cin >> y2;
  distance = sqrt(pow(x1 - x2,2) + pow(y1 - y2,2));
  cout << "The euclidean distance between the two points is " << std::setprecision(4) << std::fixed << distance << "." << endl;
  return 0;
}
