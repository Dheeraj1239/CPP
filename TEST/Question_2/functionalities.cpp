#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#define SIZE 3
#include "TouristVehicle.h"
#include <limits.h>

// functon to chaeck if vechicle exits if yes return false else return true;
bool CheckNull(TouristVehicle *arr[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] != nullptr)
        {
            // true if atleast one vehicle exists
            return false;
        }
    }
    // if cotainer is empty
    return true;
}

// function to create 3 vehicles
void creatVehicle(TouristVehicle *arr[SIZE])
{
    arr[0] = new TouristVehicle("v1", TouristVehicleType::BUS, 10, 1234.0f);
    arr[1] = new TouristVehicle("v1", TouristVehicleType::BUS, 10, 1234.0f);
    arr[2] = new TouristVehicle("v1", TouristVehicleType::BUS, 10, 1234.0f);
}

// function to free space
void freeMemory(TouristVehicle *arr[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        delete arr[i];
    }
}

// function return pointer to all instance which satisfies following condition
// condition :- _seat_count >= 4

TouristVehicle **getTouristVehicle(TouristVehicle *arr[SIZE])
{

    static TouristVehicle *res[SIZE] = {nullptr};
    int k = 0;
    if (CheckNull(arr))
    {
        std::runtime_error("Container is empty");
    }
    else
    {
        // iterate through array to check if the instance exits
        for (int i = 0; i < SIZE; i++)
        {
            // condition to be met
            if (arr[i]->seatCount() >= 4)
            {
                res[k++] = arr[i];
            }
        }
    }

    return res;
}

// functiont to find average perhour booking price
float AvgPerHourBookingCharge(TouristVehicle *arr[SIZE])
{
    float total = 0.0f;
    if (CheckNull(arr))
    {
        std::runtime_error("Container is empty");
    }
    else
    {
        // iterate and calculte the total sum
        for (int i = 0; i < SIZE; i++)
        {
            total += arr[i]->perHourBookingCharge();
        }
    }
    // return sum / total num  vehicles
    return total / SIZE;
}
// function to find vehicle with max perhourbookingcharge

TouristVehicle *getVehicleWithMaxBookingCharge(TouristVehicle *arr[SIZE])
{

    int max = INT_MIN;
    // local index value
    int idx = -1;
    if (CheckNull(arr))
    {
        std::runtime_error("Container is empty");
    }
    else
    {
        // iterate to find max
        for (int i = 0; i < SIZE; i++)
        {
            // codiction to satisfy
            if (arr[i]->perHourBookingCharge() > max)
            {
                max = arr[i]->perHourBookingCharge();
                idx = i;
            }
        }
    }
    return arr[idx];
}



#endif // FUNCTIONALITIES_H
