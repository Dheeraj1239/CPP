#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#define SIZE 5

#include <iostream>
#include "Product.h"
#include "ProductType.h"
#include <limits.h>

bool CheckNull(Product *arr[SIZE])
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

// function to create 5 products
void createProducts(Product *arr[SIZE])
{

    arr[0] = new Product("p1", ProductType::APPLIANCE, 1234.0f, "xyz");
    arr[1] = new Product("p1", ProductType::APPLIANCE, 1234.0f, "xyz");
    arr[2] = new Product("p1", ProductType::APPLIANCE, 1234.0f, "xyz");
    arr[3] = new Product("p1", ProductType::APPLIANCE, 1234.0f, "xyz");
    arr[4] = new Product("p1", ProductType::APPLIANCE, 1234.0f, "xyz");
}

// funtion to find average product price
float FindAvgProductPrice(Product *arr[SIZE])
{
    float avg = 0.0f;

    // chech if container is null
    if (CheckNull(arr))
    {
        std::runtime_error("Container is empty");
    }
    else
    {
        // iterate through array and calculate avg
        for (int i = 0; i < SIZE; i++)
        {
            avg += arr[i]->productPrice();
        }
    }

    // return total / SIZE;
    return avg / SIZE;
}

// function to find tax of product with minimum price
float FindProductTaxAmount(Product *arr[SIZE])
{

    // chech if container is null

    int min = INT_MAX;
    Product *p = arr[0];
    if (CheckNull(arr))
    {
        std::runtime_error("Container is empty");
    }
    else
    {
        // finding miniu product
        for (int i = 0; i < SIZE; i++)
        {
            if (arr[i]->productPrice() < min)
            {
                min = arr[i]->productPrice();
                p = arr[i];
            }
        }
    }

    // return price * percentage;
    return p->productPrice() * 0.5;
}

float FindMaxProductPrice(Product* arr[SIZE]){
    int max = INT_MIN;
    Product* p = arr[0];
    if (CheckNull(arr))
    {
        std::runtime_error("Container is empty");
    }else{
        for(int i =0;i<SIZE;i++){
            if(arr[i]->productPrice() > max){
                max = arr[0]->productPrice();
                p = arr[i];
            }
        }
    }

    return p->productPrice();
}


// function to free memory
void freeMemory(Product* arr[SIZE]){
    for(int i=0;i<SIZE;i++){
        delete arr[i];
    }
}

#endif // FUNCTIONALITIES_H
