#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#define SIZE 3
#include "Customer.h"
#include "CreditCardType.h"
#include "CreditCard.h"
#include "Customer.h"
#include <limits.h>

// functon to chaeck if obj exits if yes return false else return true;
bool CheckNull(Customer *arr[SIZE]);

// function to creeat Customer
void createCustomer(Customer *arr[SIZE]);

// function to return Credit Number
std::string getCreditCardNumer(Customer *arr[SIZE]);

// Function get Credit Crad with given Instance

CreditCard** getCreditCard(Customer *arr[SIZE], CreditCardType ctype);

// function to find customer with given id

CustomerType getCustomerType(Customer *arr[SIZE], std::string _id);

// function to check if all customer all SIGNATURE CREDIT CARD
bool CheckCustomerCreditCardType(Customer *arr[SIZE]);

// function to deallocate memory
void freeMemory(Customer *arr[SIZE]);
#endif // FUNCTIONALITIES_H
