#ifndef FUN_H
#define FUN_H

#define SIZE 3

#include "Car.h"
#include "VehicleType.h"

bool CheckNull(Car<float> *cars[SIZE]);

void createCars(Car<float>* cars[SIZE]);

Car<float> **getListOfCarInstances(Car<float> *cars[SIZE], float thresh);

int* getCarPrice(Car<float> *cars[SIZE], VehicleType vtype);

std::string *getCarColor(Car<float> *cars[SIZE], VehicleType vtype);


float AvgOfInsuranceAmount(Car<float>* cars[SIZE]);

#endif // FUN_H
