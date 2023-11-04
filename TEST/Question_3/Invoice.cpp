#include "Invoice.h"

Invoice::Invoice(std::string _invoiceNumber, InvoiceType _invoiceType, int _invoiceItems)
: _invoiceNumber(_invoiceNumber), _invoiceType(_invoiceType), _invoiceItems(_invoiceItems)
{
}
std::ostream &operator<<(std::ostream &os, const Invoice &rhs) {
    os << "_invoiceNumber: " << rhs._invoiceNumber
       << " _invoiceType: " <<  DisplayEnum( rhs._invoiceType)
       << " _invoiceItems: " << rhs._invoiceItems;
    return os;
}


std::string DisplayEnum(InvoiceType itype){
    if(itype == InvoiceType::E_BILL){
        return "E_BILL";
    }else if(itype == InvoiceType::PAPER_SLIP){
        return "PAPRE_SLIP";
    }else{
        return "SMS_GENRATED";
    }
}