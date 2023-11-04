#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#define SIZE 3
#include "TouristVehicle.h"
#include <limits.h>

// functon to chaeck if vechicle exits if yes return false else return true;
bool CheckNull(TouristVehicle *arr[SIZE]);

// function to create 3 vehicles
void creatVehicle(TouristVehicle *arr[SIZE]);

// function to free space
void freeMemory(TouristVehicle *arr[SIZE]);

// function return pointer to all instance which satisfies following condition
// condition :- _seat_count >= 4

TouristVehicle **getTouristVehicle(TouristVehicle *arr[SIZE]);

// functiont to find average perhour booking price
float AvgPerHourBookingCharge(TouristVehicle *arr[SIZE]);
// function to find vehicle with max perhourbookingcharge

TouristVehicle *getVehicleWithMaxBookingCharge(TouristVehicle *arr[SIZE]);

#endif // FUNCTIONALITIES_H
