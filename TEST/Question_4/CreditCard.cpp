#include "CreditCard.h"

CreditCard::CreditCard(std::string _number, CreditCardType _card_type, float _limit, int _card_cvv_number)
    : _number(_number), _card_type(_card_type), _limit(_limit), _card_cvv_number(_card_cvv_number)
{
    // Credit card number validation
    if (_number.length() > 19 || _number[4] != ' ' || _number[9] != ' ' || _number[14] != ' ')
    {
        throw std::runtime_error("Invalid CardNumber");
    }
    // Card CVV number validation
    if (_card_cvv_number < 100 || _card_cvv_number > 999)
    {
        throw std::runtime_error("Invalid Card CVV Number");
    }
}
std::ostream &operator<<(std::ostream &os, const CreditCard &rhs) {
    os << "_number: " << rhs._number
       << " _card_type: " << DisplayEnum(rhs._card_type)
       << " _limit: " << rhs._limit
       << " _card_cvv_number: " << rhs._card_cvv_number;
    return os;
}

std::string DisplayEnum(CreditCardType ctype){
    if(ctype == CreditCardType::SIGNATURE){
        return "SIGNATURE";
    }else if(ctype == CreditCardType::MILES){
        return "MILES";
    }else{
        return "NEO";
    }
}
