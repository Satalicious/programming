#include "account.hpp"
#include "bank.hpp"
#include <iostream>
#include <string>
#include <ctime>

void printInfo() {
  std::cout << "Please choose an option." << std::endl;
  std::cout << "1. add new account" << std::endl
            << "2. delete existing account" << std::endl;
  std::cout << "3. crediting/depositing to an account" << std::endl
            << "4. debiting/withdrawing from account" << std::endl;
  std::cout << "5. display this information" << std::endl
            << "6. display a list of all accounts within the bank" << std::endl;
  std::cout << "7. close program" << std::endl;
}


int main() {
  int option = 0;
  printInfo();
  std::cin >> option;
  Bank b;
  do {
    switch (option) {
    case 1:
      b.createAccount();
      break;
    case 5:
      printInfo();
      break;
    case 7:
      break;
    default:
      std::cout << "Not a Valid Choice. \n"
                << "Choose again.\n";
      break;
    }
    if (option != 7) {
      std::cin >> option;
    }
    printInfo();
  } while (option != 7);

  return 0;
}
