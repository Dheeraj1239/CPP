#ifndef CREDITCARD_H
#define CREDITCARD_H

#include "CreditCardType.h"
#include <iostream>

class CreditCard
{
private:
    std::string _number;
    CreditCardType _card_type;
    float _limit;
    int _card_cvv_number;

public:
    CreditCard(
        std::string _number,
        CreditCardType _card_type,
        float _limit,
        int _card_cvv_number);
    ~CreditCard()
    {
        std::cout << "Credit Card Destroyed" << std::endl;
    }

    std::string number() const { return _number; }
    void setNumber(const std::string &number) { _number = number; }

    CreditCardType cardType() const { return _card_type; }
    void setCardType(const CreditCardType &card_type) { _card_type = card_type; }

    float limit() const { return _limit; }
    void setLimit(float limit) { _limit = limit; }

    int cardCvvNumber() const { return _card_cvv_number; }
    void setCardCvvNumber(int card_cvv_number) { _card_cvv_number = card_cvv_number; }

    friend std::ostream &operator<<(std::ostream &os, const CreditCard &rhs);
};

std::string DisplayEnum(CreditCardType ctype);

#endif // CREDITCARD_H
