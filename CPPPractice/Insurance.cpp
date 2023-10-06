#include "Insurance.h"

Insurance::Insurance(std::string _insuranceId, float insuranceAmount, InsuranceType _insuranceType)
: _insuranceId(_insuranceId), _insuranceAmount(insuranceAmount), _insuranceType(_insuranceType)
{
}

std::ostream &operator<<(std::ostream &os, const Insurance &rhs) {
    os << "_insuranceId: " << rhs._insuranceId
       << " _insuranceAmount: " << rhs._insuranceAmount
       << " _insuranceType: " << DisplayEnum( rhs._insuranceType );
    return os;
}


std::string DisplayEnum(InsuranceType itype){
    if( itype == InsuranceType::REGULAR){
        return "REGULAR";
    }else {
        return "ZERO_DEBT";
    }
}