#include <iostream>

#include "TouristVehicle.h"
#include "functionalities.h"
#define SIZE 3

int main()
{
    TouristVehicle *arr[SIZE];
    try
    {
        // [1] fucntionality
        creatVehicle(arr);
//-----------------------------------------------------

        // [2] funtionality
        TouristVehicle **res = getTouristVehicle(arr);
        for (int i = 0; i < SIZE && res[i] != nullptr; i++)
        {   
            std::cout<<*res[i]<<std::endl;

        }

//----------------------------------------------------------    

        //[3] functionality
        std::cout<<"Average :"<<AvgPerHourBookingCharge(arr)<<std::endl;

//---------------------------------------------------------
        //[4] funtionality
        std::cout<<"Max :"<<*getVehicleWithMaxBookingCharge(arr)<<std::endl;

        // [5] functionality

        freeMemory(arr);

    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}