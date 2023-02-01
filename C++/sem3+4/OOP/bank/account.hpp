
#include <string>

class Account {
    public:
        Account() = default;
        Account(double balance, int accNr, std::string customerName, std::string createDate) : accNr_{accNr}, customerName_{customerName}, createDate_{createDate} {this->balance(balance);};

        void balance(double balance);
        double balance();
        
        void setAccNr(int accNr);
        int getAccNr();

        void setCustomerName(std::string customerName);
        std::string getCustomerName();

        void setCreateDate(std::string createDate);
        std::string getCreateDate();



    private:
        double balance_ = 0.0;
        int accNr_ = 0;
        std::string customerName_ = "";
        std::string createDate_ = "";
};
