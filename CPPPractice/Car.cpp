#include "Car.h"

Car::Car(std::string vehicleId, int vehicleRegisteration, VehicleType vehicleType, Insurance vehicleInsurancePlan, CarType _carType, float _carPrice, std::string _carColor)
:Vehicle(vehicleId,vehicleRegisteration,vehicleType,vehicleInsurancePlan), _carType(_carType) , _carPrice(_carPrice), _carColor(_carColor)
{
}