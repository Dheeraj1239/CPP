#include "Vehicle.h"

Vehicle::Vehicle(std::string _vehicleId, int _vehicleRegisteration, VehicleType _vehicleType, Insurance* _vehicleInsurancePlan)
: _vehicleId(_vehicleId),_vehicleRegisteration(_vehicleRegisteration), _vehicleType(_vehicleType), _vehicleInsurancePlan(_vehicleInsurancePlan)
{
}


std::string DisplayEnum(VehicleType vtype){
    if(vtype == VehicleType::COMMERCIAL){
        return "COMMERCIAL";
    }else if(vtype == VehicleType::PRIVATE){
        return "PRIVATE";
    }else{
        return "PURPOSE";
    }
}

std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os << "_vehicleId: " << rhs._vehicleId
       << " _vehicleRegisteration: " << rhs._vehicleRegisteration
       << " _vehicleType: " <<  DisplayEnum(rhs._vehicleType)
       << " _vehicleInsurancePlan: " << *rhs._vehicleInsurancePlan;
    return os;
}
