#ifndef BILL_H
#define BILL_H
#include "Invoice.h"
#include <ostream>

class Bill
{
private:
    float _billAmount;
    float _billTaxAmount;
    Invoice *_billAssociation;

public:
    Bill(
        float _billAmount,
        float _billTaxAmount,
        Invoice * _billAssociation);
    ~Bill() {
        delete _billAssociation;
        std::cout<< "Bill destroyed"<<std::endl;
    }

    float billAmount() const { return _billAmount; }
    void setBillAmount(float billAmount) { _billAmount = billAmount; }

    float billTaxAmount() const { return _billTaxAmount; }
    void setBillTaxAmount(float billTaxAmount) { _billTaxAmount = billTaxAmount; }

    Invoice *billAssociation() const { return _billAssociation; }
    void setBillAssociation(Invoice *billAssociation) { _billAssociation = billAssociation; }

    friend std::ostream &operator<<(std::ostream &os, const Bill &rhs);

};

#endif // BILL_H
