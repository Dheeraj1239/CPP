#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "Account.h"
#include "SavingsAccountType.h"
#include <ostream>

class SavingsAccount : virtual public Account
{
private:
    SavingsAccountType _savingsAccount;

public:
    SavingsAccount() = default;
    SavingsAccount(
        long _accountNumber,
        float _accountBalance,
        SavingsAccountType _savingsAccount);
    SavingsAccount(const SavingsAccount &rhs) = default;
    ~SavingsAccount() {}

    float CalculateInterestAmmount()override;

    SavingsAccountType savingsAccount() const { return _savingsAccount; }

    friend std::ostream &operator<<(std::ostream &os, const SavingsAccount &rhs);
};

std::string DisplayEnum(SavingsAccountType stype);

#endif // SAVINGSACCOUNT_H
