#include "CurrentAccount.h"
#include "Account.h"

CurrentAccount::CurrentAccount(long _accountNumber, float _accountBalance, float _currentAccountMinimumQuarterBalance, CurrentAccountType _currentAccountType)
: Account(_accountNumber,_accountBalance), _currentAccountMinimumQuarterBalance(_currentAccountMinimumQuarterBalance), _currentAccountType(_currentAccountType)
{
}

float CurrentAccount::CalculateInterestAmmount()
{
    if(_currentAccountType == CurrentAccountType::BASIC){
        return 0.06 * accountBalance();
    }else{

        return 0.1 * accountBalance();
    }
}
