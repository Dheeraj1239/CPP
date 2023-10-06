#ifndef INSURANCE_H
#define INSURANCE_H

#include <iostream>
#include "InsuranceType.h"

class Insurance
{
private:
    std::string _insuranceId;
    float _insuranceAmount;
    InsuranceType _insuranceType;

public:

    Insurance() = default; // delete
    Insurance(
        std::string _insuranceId,
        float _insuranceAmount,
        InsuranceType _insuranceType);
    
    ~Insurance() {}

    std::string insuranceId() const { return _insuranceId; }

    float getInsuranceAmount() const { return _insuranceAmount; }

    InsuranceType insuranceType() const { return _insuranceType; }

    friend std::ostream &operator<<(std::ostream &os, const Insurance &rhs);

};

std::string DisplayEnum(InsuranceType itype);

#endif // INSURANCE_H
