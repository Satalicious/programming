
#include <string>

class ChildAccount {
    public:
        ChildAccount() = default;
        ChildAccount(std::string owner, unsigned int deposit) : owner_{owner}, deposit_{deposit} {};

        void withdraw(unsigned int amount);



    private:
        std::string owner_ = "";
        unsigned int deposit_ = 0;
};
