#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include "CustomerType.h"
#include "CreditCard.h"

class Customer
{
private:
    std::string _name;
    std::string _id;
    CustomerType _customerType;
    CreditCard *_credit_card;

public:
    Customer(
        std::string _name,
        std::string _id,
        CustomerType _customerType,
        CreditCard *_credit_card);
    ~Customer() {
        delete _credit_card;
        std::cout<<"Customer destroyed"<<std::endl;
    }

    std::string name() const { return _name; }
    void setName(const std::string &name) { _name = name; }

    std::string id() const { return _id; }
    void setId(const std::string &id) { _id = id; }

    CustomerType customerType() const { return _customerType; }
    void setCustomerType(const CustomerType &customerType) { _customerType = customerType; }

    CreditCard *creditCard() const { return _credit_card; }
    void setCreditCard(CreditCard *credit_card) { _credit_card = credit_card; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);
    
};

std::string DisplayEnum(CustomerType ctype);

#endif // CUSTOMER_H
