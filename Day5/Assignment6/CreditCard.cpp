#include "CreditCard.h"



CreditCard::CreditCard(int number, int _cvv_number, CardType ctype, float annulaCharge, int limit, float transactiolimit)
: Card(number,_cvv_number,ctype,annulaCharge,limit), _transaction_limit(transactiolimit)
{
}

float CreditCard::CalculateTaxOnCharge()
{
    return (limit()/100) * annualCharge();
}
