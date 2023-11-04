#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H

#include "CurrentAccountType.h"

#include "Account.h"

class CurrentAccount :virtual public Account 
{
private:
    float _currentAccountMinimumQuarterBalance;
    CurrentAccountType _currentAccountType;
public:
    CurrentAccount()= default;
    CurrentAccount(
        long _accountNumber,
        float _accountBalance,
        float _currentAccountMinimumQuarterBalance,
        CurrentAccountType _currentAccountType
    );

    float CalculateInterestAmmount() override;

    ~CurrentAccount() {
        std::cout<<"Current Destroyed"<<std::endl;
    }

    float getCurrentAccountMinimumQuarterBalance() const { return _currentAccountMinimumQuarterBalance; }
    void setCurrentAccountMinimumQuarterBalance(float currentAccountMinimumQuarterBalance_) { _currentAccountMinimumQuarterBalance = currentAccountMinimumQuarterBalance_; }
};

#endif // CURRENTACCOUNT_H
