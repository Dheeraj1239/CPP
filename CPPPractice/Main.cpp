#include <iostream>

#define SIZE 3
#include "Car.h"
#include "Fun.h"
#include <iostream>

int main()
{

    Car<float> *cars[SIZE]={nullptr};

    try
    {
        createCars(cars);

        Car<float> **res = getListOfCarInstances(cars, 1234);
        for (int i = 0; i < SIZE && res[i] != nullptr; i++)
        {
            std::cout << *res[i]<< std::endl;
        }

//----------------------------------------------------------------------------
        // int* carRes = getCarPrice(cars, VehicleType::COMMERCIAL);

        // for (int i = 0; i < SIZE && carRes[i] != -1; i++)
        // {

        //     std::cout << carRes[i] << std::endl;
        // }
//-------------------------------------------------------------------------------
        // std::string *color = getCarColor(cars, VehicleType::COMMERCIAL);
        // for (int i = 0; i < SIZE && color[i] != ""; i++)
        // {
        //     std::cout << color[i] << std::endl;
        // }
//-------------------------------------------------------------------------------
        //std::cout<<AvgOfInsuranceAmount(cars)<<std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

   
    // Car<float>* c1 = new Car<float>("v1", 1234, VehicleType::PRIVATE, new Insurance("i1", 1290.0f, InsuranceType::ZERO_DEBT), CarType::HATCHBACK, 1290, "blue");
    // Car<float>* c2 = new Car<float>("v1", 1234, VehicleType::PRIVATE, new Insurance("i1", 1290.0f, InsuranceType::ZERO_DEBT), CarType::HATCHBACK, 1290, "blue");
     
    // Car<float>* c = *c1 + c2;
    // std::cout<<*c<<std::endl;
    return 0;

}