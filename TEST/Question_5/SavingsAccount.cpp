#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(long _accountNumber, float _accountBalance, SavingsAccountType _savingsAccount)
: Account(_accountNumber,_accountBalance), _savingsAccount(_savingsAccount)
{
}

float SavingsAccount::CalculateInterestAmmount()
{
    if(_savingsAccount == SavingsAccountType::METRO || _savingsAccount ==  SavingsAccountType::URBAN){
        return 0.05 * accountBalance();
    }else{
        return 0.07 * accountBalance();
    }
}

std::ostream &operator<<(std::ostream &os, const SavingsAccount &rhs) {
    os << " _savingsAccount: " << DisplayEnum(rhs._savingsAccount);
    return os;
}

std::string DisplayEnum(SavingsAccountType stype){
    if(stype == SavingsAccountType::METRO){
        return "METRO";
    }else if(stype == SavingsAccountType::URBAN){
        return "URBAN";
    }else{
        return "SPECIAL";
    }
}
