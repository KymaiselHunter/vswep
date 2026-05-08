#include "bank_account.hpp"

// BankAccount::BankAccount(const std::string& pOwner, const double& pBalance)
// {
//     owner = pOwner;
//     banlance = pBalance;
// }
BankAccount::BankAccount(const std::string& pOwner, const double& pBalance) :
owner(pOwner), balance(pBalance)
{ 
}

std::string BankAccount::getOwner() const
{
    return owner;
}

double BankAccount::getBalance() const
{
    return balance;
}

void BankAccount::deposit(const double& pAmount)
{
    if(pAmount <= 0) return;

    balance += pAmount;
}

bool BankAccount::withdraw(const double& pAmount)
{
    if(balance < pAmount || pAmount <= 0) return false;

    balance -= pAmount;
    return true;
}

