#include "Customer.h"

Customer::Customer(std::string _name, std::string _id, CustomerType _customerType, CreditCard *_credit_card)
: _name(_name), _id(_id) , _customerType(_customerType), _credit_card(_credit_card)
{
}
std::ostream &operator<<(std::ostream &os, const Customer &rhs) {
    os << "_name: " << rhs._name
       << " _id: " << rhs._id
       << " _customerType: " << DisplayEnum(rhs._customerType)
       << " _credit_card: " << rhs._credit_card;
    return os;
}


std::string DisplayEnum(CustomerType ctype){
    if(ctype == CustomerType::ELITE){
        return "ELITE";
    }else if(ctype == CustomerType::PRIVILAGED){
        return "PRIVILAGED";
    }else{
        return "PRO";
    }
}