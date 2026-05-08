#ifndef BANK_ACCOUNT 
#define BANK_ACCOUNT

#include <string>

class BankAccount{
    private:
        std::string owner;
        double balance;
        
    public:
        BankAccount(const std::string& pOwner, const double& pBalance);

        std::string getOwner() const;
        double getBalance() const;

        void deposit(const double& pAmount);
        bool withdraw(const double& pAmount);
};

#endif