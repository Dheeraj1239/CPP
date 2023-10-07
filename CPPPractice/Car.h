#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "CarType.h"
#include "Vehicle.h"
#include "Insurance.h"
#include "VehicleType.h"

template <typename T>
class Car : public Vehicle
{
private:
    CarType _carType;
    T _carPrice;
    std::string _carColor;

public:
    Car() = default;
    Car(const Car &rhs) = default; // copy constructor set to default
    Car(
        std::string vehicleId,
        int vehicleRegisteration,
        VehicleType vehicleType,
        Insurance *vehicleInsurancePlan,
        CarType _carType,
        T _carPrice,
        std::string _carColor) : Vehicle(vehicleId, vehicleRegisteration, vehicleType, vehicleInsurancePlan), _carType(_carType), _carPrice(_carPrice), _carColor(_carColor) {}
    ~Car()
    {
        std::cout << "Car destroted" << std::endl;
    }

    Car *operator+(Car *rhs)
    {
        Car *car;
        car = rhs;
        car->_carPrice = _carPrice + rhs->carPrice();
        return car;
    }

    template <typename A>
    friend std::ostream &operator<<(std::ostream &os, const Car<A> &rhs)
    {
        os << static_cast<const Vehicle &>(rhs)
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

    CarType carType() const { return _carType; }

    std::string carColor() const { return _carColor; }

    T carPrice() const { return _carPrice; }

    // friend std::ostream &operator<<(std::ostream &os, const Car<T> &rhs);
};

// std::string DisplayEnum(CarType ctype);

// std::string DisplayEnum(CarType ctype){
//     if(ctype == CarType::HATCHBACK){
//         return "HATCHBACK";
//     }else if(ctype == CarType::SUV){
//         return "SUV";
//     }else{
//         return "SEDAN";
//     }
// }

#endif // CAR_H
