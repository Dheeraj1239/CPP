#ifndef FUN_H
#define FUN_H

#define SIZE 3

#include "Car.h"
#include "VehicleType.h"

bool CheckNull(Car *cars[SIZE]);

void createCars(Car* cars[SIZE]);

Car **getListOfCarInstances(Car *cars[SIZE], float thresh);

int* getCarPrice(Car *cars[SIZE], VehicleType vtype);

std::string *getCarColor(Car *cars[SIZE], VehicleType vtype);


float AvgOfInsuranceAmount(Car* cars[SIZE]);

#endif // FUN_H
