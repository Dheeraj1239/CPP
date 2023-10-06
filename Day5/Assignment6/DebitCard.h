#ifndef DEBITCARD_H
#define DEBITCARD_H

#include <iostream>
#include "DebitCardType.h"
#include "Card.h"
#include "CardType.h"

class DebitCard : virtual public Card
{
private:
    DebitCardType dtype;
public:
    DebitCard(int number, int _cvv_number, CardType ctype, float annulaCharge,int limit,DebitCardType dtype);

    ~DebitCard() {}

    float CalculateTaxOnCharge() override;

    DebitCardType getDtype() const { return dtype; }
};

#endif // DEBITCARD_H
