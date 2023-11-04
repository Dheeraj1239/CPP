#include "Account.h"

Account::Account(long _accountNumber, float _accountBalance)
: _accountNumber(_accountNumber), _accountBalance(_accountBalance)
{
}
std::ostream &operator<<(std::ostream &os, const Account &rhs) {
    os << "_accountNumber: " << rhs._accountNumber
       << " _accountBalance: " << rhs._accountBalance
       << " _accountMinBalance: " << rhs._accountMinBalance;
    return os;
}
