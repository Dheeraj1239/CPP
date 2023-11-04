#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>
#include "InvoiceType.h"

class Invoice
{
private:
    std::string _invoiceNumber;
    InvoiceType _invoiceType;
    int _invoiceItems;

public:
    Invoice(

        std::string _invoiceNumber,
        InvoiceType _invoiceType,
        int _invoiceItems

    );
    ~Invoice() {
        std::cout<<"Invoice destroyed"<<std::endl;
    }

    std::string invoiceNumber() const { return _invoiceNumber; }
    void setInvoiceNumber(const std::string &invoiceNumber) { _invoiceNumber = invoiceNumber; }

    InvoiceType invoiceType() const { return _invoiceType; }
    void setInvoiceType(const InvoiceType &invoiceType) { _invoiceType = invoiceType; }

    int invoiceItems() const { return _invoiceItems; }
    void setInvoiceItems(int invoiceItems) { _invoiceItems = invoiceItems; }

    friend std::ostream &operator<<(std::ostream &os, const Invoice &rhs);

};

std::string DisplayEnum(InvoiceType itype);

#endif // INVOICE_H
