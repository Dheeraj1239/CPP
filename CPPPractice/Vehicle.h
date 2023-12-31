#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include "VehicleType.h"
#include "Insurance.h"

class Vehicle
{
private:
    std::string _vehicleId;
    int _vehicleRegisteration;
    VehicleType _vehicleType;
    Insurance* _vehicleInsurancePlan;

public:
    Vehicle()=default;

    Vehicle(
        std::string _vehicleId,
        int _vehicleRegisteration,
        VehicleType _vehicleType,
        Insurance* _vehicleInsurancePlan);
    
    ~Vehicle() {
        std::cout <<"Vehilce " << _vehicleId << "destroyed"<<std::endl;
    }

    std::string vehicleId() const { return _vehicleId; }

    int vehicleRegisteration() const { return _vehicleRegisteration; }

    VehicleType vehicleType() const { return _vehicleType; }

    Insurance* vehicleInsurancePlan() const { return _vehicleInsurancePlan; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);

    

};

std::string DisplayEnum(VehicleType vtype);

#endif // VEHICLE_H
