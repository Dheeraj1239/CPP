#include "Car.h"
#include "Vehicle.h"

Car::Car(std::string vehicleId, int vehicleRegisteration, VehicleType vehicleType, Insurance* vehicleInsurancePlan, CarType _carType, float _carPrice, std::string _carColor)
:Vehicle(vehicleId,vehicleRegisteration,vehicleType,vehicleInsurancePlan), _carType(_carType) , _carPrice(_carPrice), _carColor(_carColor)
{
}


std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _carType: " <<  DisplayEnum( rhs._carType)
       << " _carPrice: " << rhs._carPrice
       << " _carColor: " << rhs._carColor;
    return os;
}

std::string DisplayEnum(CarType ctype){
    if(ctype == CarType::HATCHBACK){
        return "HATCHBACK";
    }else if(ctype == CarType::SUV){
        return "SUV";
    }else{
        return "SEDAN";
    }
}
