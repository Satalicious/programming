/*Business functions
Implement a function interest(capital, rate, years=1, tax=0) that returns the profit (compound interest) of investing money. If a positive tax value is entered, every year's interest is to be reduced by the tax. The rate and tax parameters must be between 0 (0%) and 1 (100%). The number of years is integral.
Using the above function, implement a second function that returns the terminal value of investing money: terminal_value(capital, rate, years=1, tax=0). */
#include <cmath>
#include <cstdlib>
#include <iostream>

// TODO: implement interest(.) and terminal_value(.)
double interest(double capital, double rate, double years, double tax) {
  return pow(capital*(1+rate*(1-tax)), years) / 100 - capital;
}
double terminal_value(double capital, double rate, double years, double tax) {
  return pow(capital*(1+rate*(1-tax)), years) / 100;
}

int main(int argc, char** argv) {
  int years(1);
  double tax(0.0);
  if (argc < 3) {
    std::cout << "Usage: " << argv[0] << " capital rate [years=1 [tax=0.0]]\n";
    return 1;
  }
  double capital(std::atof(argv[1]));
  double rate(std::atof(argv[2]));
  switch (argc) {
  case 5:
    tax = std::atof(argv[4]);
     [[fallthrough]];
  case 4:
    years = std::atoi(argv[3]);
  }
  std::cout << "interest: " << interest(capital, rate, years, tax) << "\n";
  std::cout << "terminal value: ";
  std::cout << terminal_value(capital, rate, years, tax) << "\n";
  return 0;
}
