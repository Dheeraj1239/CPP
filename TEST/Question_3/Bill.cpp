#include "Bill.h"
#include <iostream>

Bill::Bill(float _billAmount, float _billTaxAmount, Invoice *_billAssociation)
: _billAmount(_billAmount), _billTaxAmount(_billAmount) , _billAssociation(_billAssociation)
{
    if(_billAmount < _billTaxAmount){
        throw std::runtime_error("Tax muxt be less than Bill Amount");
    }
}
std::ostream &operator<<(std::ostream &os, const Bill &rhs) {
    os << "_billAmount: " << rhs._billAmount
       << " _billTaxAmount: " << rhs._billTaxAmount
       << " _billAssociation: " << rhs._billAssociation;
    return os;
}
