
#include <iostream>
#include "account.hpp"

double Account::balance() { return balance_; }
void Account::balance(double balance) {
    if (balance < 0) { std::cerr << "not allowed to set negative balance" << std::endl; balance_ = 0; return;} 
    balance_ = balance;
}

int Account::getAccNr() { return accNr_; } 
void Account::setAccNr(int accNr) { accNr_ = accNr; }

std::string Account::getCustomerName() { return customerName_; }
void Account::setCustomerName(std::string customerName) { customerName_ = customerName; }

std::string Account::getCreateDate() { return createDate_; }
void Account::setCreateDate(std::string createDate) { createDate_ = createDate; }