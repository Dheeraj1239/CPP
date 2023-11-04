#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include "SavingsAccountType.h"

class Account
{
private:
    long _accountNumber;
    float _accountBalance;
    const float _accountMinBalance = 100.0f;

public:
    Account() = default;

    Account(const Account &rhs) = default;

    Account *operator=(Account *rhs)
    {
        Account *res;
        res->_accountNumber = rhs->accountNumber();
        res->_accountBalance = rhs->accountBalance();
        return res;
    }

    Account(
        long _accountNumber,
        float _accountBalance);
    virtual ~Account()
    {
        std::cout << "Account Destroyed" << std::endl;
    }

    virtual float CalculateInterestAmmount() = 0;

    long long accountNumber() const { return _accountNumber; }
    void setAccountNumber(long long accountNumber) { _accountNumber = accountNumber; }

    float accountBalance() const { return _accountBalance; }
    void setAccountBalance(float accountBalance) { _accountBalance = accountBalance; }

    float accountMinBalance() const { return _accountMinBalance; }

    friend std::ostream &operator<<(std::ostream &os, const Account &rhs);
};

#endif // ACCOUNT_H
