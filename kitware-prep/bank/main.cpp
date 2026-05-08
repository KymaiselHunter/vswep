#include <iostream> 
#include "bank_account.hpp"

#include <cassert>
#include <cmath>

// optional helper for comparing doubles
bool almostEqual(double a, double b) {
    return fabs(a - b) < 0.0001;
}

int main() {
    BankAccount account("Kyle", 100.0);

    assert(account.getOwner() == "Kyle");
    assert(almostEqual(account.getBalance(), 100.0));

    account.deposit(50.0);
    assert(almostEqual(account.getBalance(), 150.0));

    bool success = account.withdraw(30.0);
    assert(success == true);
    assert(almostEqual(account.getBalance(), 120.0));

    success = account.withdraw(500.0);
    assert(success == false);
    assert(almostEqual(account.getBalance(), 120.0));

    return 0;
}