
#include <iostream>
#include "account.hpp"

double Account::getBalance() { return balance_; }
void Account::balance(double balance) {
    if (balance <= 0) { std::cerr << "not allowed to set negative balance" << std::endl; return;} 
    balance_ = balance;
}

int Account::getAccNr() { return accNr_; } 
void Account::setAccNr(int accNr) { accNr_ = accNr; }

std::string Account::getCustomerName() { return customerName_; }
void Account::setCustomerName(std::string customerName) { customerName_ = customerName; }

std::string Account::getCreateDate() { return createDate_; }
void Account::setCreateDate(std::string createDate) { createDate_ = createDate; }

void Account::credit(uint depositAmount) {
    //add an amount to the current balance and store it back into the balance
    if(depositAmount <= 0) { std::cerr << "deposit amount must be greater than 0" << std::endl; return;}
    balance_ += depositAmount;
};

uint Account::debit(uint withdrawAmount) {
    //withdraw money from the Account, modify the balance, and ensure the debit amount does not exceed the Account's balance. 
    if(withdrawAmount > balance_) { std::cerr << "withdraw amound exceeds your balance" << std::endl; return 0;}
    balance_ -= withdrawAmount;
    return withdrawAmount;
};

void Account::printAccountInfo() {
    //prints the current balance, account number, customer name, and date of the account
    std::cout << "======== YOUR ACCOUNT INFO ========" << std::endl;
    std::cout << "Balance: \t"<< this->balance_ << std::endl;
    std::cout << "Account NR: \t"<< this->accNr_ << std::endl;
    std::cout << "Customer: \t"<< this->customerName_ << std::endl;
    std::cout << "Date Created: \t"<< this->createDate_ << std::endl;
    std::cout << "======== YOUR ACCOUNT INFO ========" << std::endl;
}
