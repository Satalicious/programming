
#include "account.hpp"
#include "bank.hpp"
#include <iostream>
#include <string>
#include <ctime>

void Bank::addAccount(Account &account) {
    accounts_.push_back(account);
}
std::vector<Account> Bank::getAccounts() {
    return accounts_;
}

void Bank::createAccount() {
  std::string firstname;
  std::string lastname;
  std::cout << "Please provide your first name: " << std::endl;
  std::cin >> firstname;
  std::cout << "Please provide your last name: " << std::endl;
  std::cin >> lastname;
  std::string name = firstname + " " + lastname;
  std::time_t result = std::time(nullptr);
  std::string date = std::ctime(&result);
  Account a1(1000, rand(), name, date);
  this->addAccount(a1);
}

void Bank::printAccounts() {
    for(auto&e : accounts_) {
        std::cout << "========" << std::endl;
        std::cout << e.getBalance() << std::endl;
         std::cout << e.getCustomerName() << std::endl;
 std::cout << e.getCreateDate() << std::endl;
    }
}
