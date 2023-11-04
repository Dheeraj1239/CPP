#ifndef FUNTIONALITIES_H
#define FUNTIONALITIES_H

#define SIZE 3
#include "Bill.h"
#include "Invoice.h"
#include "InvoiceType.h"
#include <limits.h>


// functon to chaeck if obj exits if yes return false else return true;
bool CheckNull(Bill *arr[SIZE]);

void createObjects(Bill* arr[SIZE]);

// funtion to find hieghest bill amount
std::string getHighestInvoiceNumber(Bill *arr[SIZE]);

// function find invoice Instance
Invoice *getInvoiceInstance(Bill *arr[SIZE], std::string inum);

// get Invoice in bill whose bill amount > threshold

Invoice **getBillAssociatedInvoice(Bill *arr[SIZE], float billAmount);

// function to print max and min Invoice number
void PrintMaxAndMinInvoiceNumber(Bill *arr[SIZE]);

// function to free memory
void freeMemory(Bill* arr[SIZE]);
#endif // FUNTIONALITIES_H
