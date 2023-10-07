#ifndef CARD_H
#define CARD_H

#include <iostream>
#include "CardType.h"

class Card
{
private:
    int _number;
    int _cvv_number;
    CardType ctype;
    float _annual_charge;
    int _limit;

public:
    Card(
        int _number,
        int _cvv_number,
        CardType ctype,
        float _annual_charge,
        int _limit);
    ~Card() {}

    virtual float CalculateTaxOnCharge() = 0;

    int number() const { return _number; }

    int cvvNumber() const { return _cvv_number; }

    CardType getCtype() const { return ctype; }

    float annualCharge() const { return _annual_charge; }

    int limit() const { return _limit; }

    friend std::ostream &operator<<(std::ostream &os, const Card &rhs);
};

std::string DisplayEnum(CardType ctype);

#endif // CARD_H
