#ifndef CREDITCARD_H
#define CREDITCARD_H

#include "Card.h"

class CreditCard : virtual public Card
{
private:
    float _transaction_limit;
public:
    CreditCard(int number, int _cvv_number, CardType ctype, float annulaCharge,int limit,float transactionLimit);
    float CalculateTaxOnCharge() override;
    ~CreditCard() {}
};

#endif // CREDITCARD_H
