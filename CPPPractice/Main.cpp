#include <iostream>

#define SIZE 3
#include "Car.h"
#include "Fun.h"
#include <iostream>

int main()
{

    // Car *cars[SIZE]={nullptr};

    try
    {
        // createCars(cars);

        // Car **res = getListOfCarInstances(cars, 1290);
        // for (int i = 0; i < SIZE && res[i] != nullptr; i++)
        // {
        //     std::cout << *res[i] << std::endl;
        // }

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

    return 0;
}