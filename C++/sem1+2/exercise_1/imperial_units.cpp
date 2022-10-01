/* Imperial units
Ask the user for a length in meters and print the corresponding length measured in inches, in feet, 
in yards, and in miles. Assume that one inch is 2.54 cm, one foot is 12 inches, one yard is 3 feet, 
and one British mile is 1760 yards. Round all results to two digits for printing.
A sample run of this program:
Enter a distance in meters: 1.3
51.18 inch
4.27 feet
1.42 yards
0.00 miles */
#include <cmath>
#include <iomanip>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main() {
  double meter;
  cout << "Enter a distance in meters: ";
  cin >> meter;
  const double inch_per_meter = meter * 39.3692308;
  const double feet_per_meter = inch_per_meter / 12;
  const double yards_per_meter = feet_per_meter / 3;
  const double miles_per_meter = yards_per_meter / 1760;
  cout << std::setprecision(2) << std::fixed;
  cout << inch_per_meter << " inch" << endl << feet_per_meter << " feet" << endl << yards_per_meter << " yards" << endl << miles_per_meter << " miles" << endl;
  return 0;
}
