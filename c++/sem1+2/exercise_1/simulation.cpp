#include <ctime>
#include <iostream>
#include <stdlib.h>
/*Monte Carlo Simulation (rather easy, but still worth a bonus point)
Simulation is an ingenious method of finding approximate solutions where other methods fail. A typical example is the calculation of . Your task is to implement a simple simulation that calculates an approximation of . To do so, imagine a 2 x 2 square with an inscribed circle with a radius of 1. To facilitate calculations, the center of the square should be the origin of a cartesian coordinate system. Generate random pairs of (x/y) coordinates inside the square and then test if the denoted point is inside the circle (). Since the area of the circle is and the area of the square is 4, the approximate number of points inside the circle divided by the number of generated points is divided by 4 ().
(Hint: use the function drand48() (requires #include <stdlib.h>) to generate random numbers [0.0, 1.0).)*/

double simulate_pi(int iterations);
bool shoot();

// implement the missing functions
/**
 * Simulate the given number of iterations to retrieve a good approximation
 * of pi.
 */
double simulate_pi(int iterations) {
  double cnt = 0;
  for (int i = 0; i < iterations; i++) {
    shoot();
    if (shoot())
      cnt+=1;
  }
  return cnt / iterations * 4;
  }

/**
 * Shoot a dart at a 2x2 square and return true if the dart hit inside the
 * inscribed circle.
 */
bool shoot() {
  float x = 2 * drand48() -1;
  float y = 2 * drand48() -1;
  if (x*x + y*y <= 1) {
    return true;
  }
  return false;
}

int main(int argc, char** argv) {
  srand48(time((time_t*) NULL));  // initialize random number generator

  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " iterations\n";
    return 1;
  }
  int iterations(std::atoi(argv[1]));
  std::cout << "approximation of pi: " << simulate_pi(iterations) << "\n";
  return 0;
}
