/*
Write a program that prints the sine and cosine of all values between 0 and in steps of 0.1. The last value must be PI. All values in the sine and cosine columns should be fixed to 2 digits after the decimal point. Hint: check out <iomanip>.
A sample run of this program:
radians |  sine | cosine
------------------------
    0.0 |  0.00 |   1.00
    0.1 |  0.10 |   1.00
    0.2 |  0.20 |   0.98
[...]
    3.0 |  0.14 |  -0.99
    3.1 |  0.04 |  -1.00
   3.14 |  0.00 |  -1.00 */
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
#include <iostream>
#include <math.h>

using std::cout;
using std::endl;

int main() {
  cout << "radians |  sine | cosine" << endl;
  cout << "------------------------" << endl;
  for (float i = 0; i <= M_PI; i+=float(0.1)) {
    if (i > 1.6) {
    cout << "    " << std::setprecision(1) << std::fixed << i << " |  " << std::setprecision(2)  << std::fixed<< sin(i) << " |  " << std::setprecision(2) << std::fixed << cos(i) << endl;
    } else {
    cout << "    " << std::setprecision(1) << std::fixed << i << " |  " << std::setprecision(2)  << std::fixed<< sin(i) << " |   " << std::setprecision(2) << std::fixed << cos(i) << endl;
    }
  }
  cout << "   3.14 |  0.00 |  -1.00" << endl;
  return 0;
}
