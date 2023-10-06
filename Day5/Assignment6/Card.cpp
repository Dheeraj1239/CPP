#include "Card.h"



Card::Card(int _number, int _cvv_number, CardType ctype, float _annual_charge, int _limit)
: _number(_number), _cvv_number(_cvv_number), ctype(ctype), _annual_charge(_annual_charge) , _limit(_limit)
{

    if(_number < 999 || _number > 10000){
        throw std::runtime_error("Enter a valid number"); 
    }

    if(_cvv_number <99 || _cvv_number >= 1000){
        throw std::runtime_error("Enter a valid cvv number");
    }
}
std::ostream &operator<<(std::ostream &os, const Card &rhs) {
    os << "_number: " << rhs._number
       << " _cvv_number: " << rhs._cvv_number
       << " ctype: " << DisplayEnum(rhs.ctype)
       << " _annual_charge: " << rhs._annual_charge
       << " _limit: " << rhs._limit;
    return os;
}

std::string DisplayEnum(CardType ctype){
    if(ctype == CardType::MASTERCARD){
        return "MASTERVARD";
    }else if(ctype == CardType::RUPAY){
        return "RUPAY";
    }else{
        return "VISA";
    }
}
