#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "CarType.h"
#include "Vehicle.h"
#include "Insurance.h"
#include "VehicleType.h"

class Car : public Vehicle
{
private:
    CarType _carType;
    float _carPrice;
    std::string _carColor;

public:
    Car() = default;
    Car(const Car& rhs) = default; // copy constructor set to default
    Car(
        std::string vehicleId,
        int vehicleRegisteration,
        VehicleType vehicleType,
        Insurance* vehicleInsurancePlan,
        CarType _carType,
        float _carPrice,
        std::string _carColor);
    ~Car() {}

    CarType carType() const { return _carType; }

    float carPrice() const { return _carPrice; }

    std::string carColor() const { return _carColor; }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);
    
};

std::string DisplayEnum(CarType ctype);

#endif // CAR_H
