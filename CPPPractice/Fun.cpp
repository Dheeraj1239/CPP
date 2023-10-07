#define SIZE 3

#include "Car.h"
#include "VehicleType.h"
#include "Fun.h"

bool CheckNull(Car<float> *cars[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        if (cars[i] != nullptr)
        {
            return false;
        }
    }

    return true;
}

void createCars(Car<float> *cars[SIZE])
{
    cars[0] = new Car<float>("v1", 1234, VehicleType::PRIVATE, new Insurance("i1", 1290.0f, InsuranceType::ZERO_DEBT), CarType::HATCHBACK, 1290.0f, "blue");
    cars[1] = new Car<float>("v2", 1234, VehicleType::PRIVATE, new Insurance("i2", 1290.0f, InsuranceType::ZERO_DEBT), CarType::HATCHBACK, 1290.0f, "blue");
    cars[2] = new Car<float>("v3", 1234, VehicleType::PRIVATE, new Insurance("i3", 1290.0f, InsuranceType::ZERO_DEBT), CarType::HATCHBACK, 1290.0f, "blue");
}
Car<float> **getListOfCarInstances(Car<float> *cars[SIZE], float thresh)
{

    static Car<float> *resCars[SIZE] = {nullptr};

    if (CheckNull(cars))
    {
        throw std::runtime_error("Container is null");
    }
    else
    {
        int k = 0;
        for (int i = 0; i < SIZE; i++)
        {
            if (cars[i]->vehicleInsurancePlan()->getInsuranceAmount() > thresh)
            {
                resCars[k++] = cars[i];
            }
        }
    }
    if (resCars[0] == nullptr)
        throw std::runtime_error("No object Exists");
    return resCars;
}

int *getCarPrice(Car<float> *cars[SIZE], VehicleType vtype)
{
    static int res[SIZE] = {-1};
    int k = 0;
    if (CheckNull(cars))
    {
        throw std::runtime_error("Container is null");
    }
    else
    {
        for (int i = 0; i < SIZE; i++)
        {
            if (cars[i]->vehicleType() == vtype)
            {
                res[k++] = cars[i]->carPrice();
            }
        }
    }

    if (res[0] == -1)
    {
        throw std::runtime_error("No object Exists");
    }
    return res;
}

std::string *getCarColor(Car<float> *cars[SIZE], VehicleType vtype)
{

    static std::string res[SIZE] = {""};
    int k = 0;
    if (CheckNull(cars))
    {
        throw std::runtime_error("Container is null");
    }
    else
    {
        for (int i = 0; i < SIZE; i++)
        {
            if (cars[i]->vehicleType() == vtype)
            {
                res[k++] = cars[i]->carColor();
            }
        }
    }

    if (res[0] == "")
    {
        throw std::runtime_error("No Object exists");
    }

    return res;
}

float AvgOfInsuranceAmount(Car<float> *cars[SIZE])
{

    float res = 0.0f;
    int n = 0;
    if (CheckNull(cars))
    {
        throw std::runtime_error("Container is null");
    }
    else
    {
        for (int i = 0; i < SIZE; i++)
        {
            if (cars[i]->vehicleType() == VehicleType::COMMERCIAL && cars[i]->vehicleRegisteration() == 202023 && cars[i]->vehicleInsurancePlan()->insuranceType() == InsuranceType::ZERO_DEBT)
            {
                res += cars[i]->vehicleInsurancePlan()->getInsuranceAmount();
                n++;
            }
        }
    }
    if (n == 0)
    {
        throw std::runtime_error("No object exsits");
    }
    return res / n;
}