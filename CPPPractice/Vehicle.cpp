#include "Vehicle.h"

Vehicle::Vehicle(std::string _vehicleId, int _vehicleRegisteration, VehicleType _vehicleType, Insurance vehicleInsurancePlan)
: _vehicleId(_vehicleId),_vehicleRegisteration(_vehicleRegisteration), _vehicleType(_vehicleType), vehicleInsurancePlan(vehicleInsurancePlan)
{
}