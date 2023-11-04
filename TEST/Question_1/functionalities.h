#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#define SIZE 5

#include <iostream>
#include "Product.h"
#include "ProductType.h"
#include <limits.h>

// functon to chaeck if product exits if yes return false else return true;
bool CheckNull(Product *arr[SIZE]);

// function to create 5 products
void createProducts(Product *arr[SIZE]);

// funtion to find average product price
float FindAvgProductPrice(Product *arr[SIZE]);

// function to find tax of product with minimum price
float FindProductTaxAmount(Product *arr[SIZE]);

float FindMaxProductPrice(Product* arr[SIZE]);


// function to free memory
void freeMemory(Product* arr[SIZE]);

#endif // FUNCTIONALITIES_H
