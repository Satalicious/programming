
#include <string>
#include "account.hpp"
#include <vector>

class Bank {
    public:
        Bank() = default;

        void addAccount(Account &account);
        std::vector<Account> getAccounts();
        void createAccount();
        void printAccounts();

    private:
        std::vector<Account> accounts_;
};
