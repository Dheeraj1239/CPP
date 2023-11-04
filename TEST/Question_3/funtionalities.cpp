#ifndef FUNTIONALITIES_H
#define FUNTIONALITIES_H

#define SIZE 3
#include "Bill.h"
#include "Invoice.h"
#include "InvoiceType.h"
#include <limits.h>

// funtiona to create 3 objects
void createObjects(Bill *arr[SIZE])
{
    arr[0] = new Bill(1200.0f, 990.0f, new Invoice("io1", InvoiceType::E_BILL, 20));
    arr[1] = new Bill(200.0f, 190.0f, new Invoice("io2", InvoiceType::E_BILL, 20));
    arr[2] = new Bill(500.0f, 290.0f, new Invoice("io3", InvoiceType::E_BILL, 20));
}

// functon to chaeck if obj exits if yes return false else return true;
bool CheckNull(Bill *arr[SIZE])
{
    // loop and check if one onj exists
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] != nullptr)
        {
            // true if atleast one obj exists
            return false;
        }
    }
    // if cotainer is empty
    return true;
}

// funtion to find hieghest bill amount
std::string getHighestInvoiceNumber(Bill *arr[SIZE])
{

    int max = INT_MIN;
    std::string invoiceNumber = "";
    // check if atleast one obj exits
    if (CheckNull(arr))
    {
        throw std::runtime_error("Container is Empty");
    }
    else
    {
        for (int i = 0; i < SIZE && arr[i] != nullptr; i++)
        {
            // find max bill amount and set the invoice
            if (arr[i]->billAmount() > max)
            {
                max = arr[i]->billAmount();
                invoiceNumber = arr[i]->billAssociation()->invoiceNumber();
            }
        }
    }

    return invoiceNumber;
}

// function find invoice Instance
Invoice *getInvoiceInstance(Bill *arr[SIZE], std::string inum)
{
    static Invoice *i = {nullptr};

    if (CheckNull(arr))
    {
        throw std::runtime_error("Container is Empty");
    }
    else
    {
        // check if the bill exists with give invoice number if yes return else return nullptr;
        for (int i = 0; i < SIZE && arr[i] != nullptr; i++)
        {
            if (arr[i]->billAssociation()->invoiceNumber() == inum)
            {
                return arr[i]->billAssociation();
            }
        }
    }

    return i;
}

// get Invoice in bill whose bill amount > threshold

Invoice **getBillAssociatedInvoice(Bill *arr[SIZE], float billAmount)
{

    static Invoice *res[SIZE] = {nullptr};
    int k = 0;
    if (CheckNull(arr))
    {
        throw std::runtime_error("Container is Empty");
    }
    else
    {
        for (int i = 0; i < SIZE; i++)
        {
            if (arr[i]->billAmount() > billAmount)
            {
                res[k] = arr[i]->billAssociation();
            }
        }
    }

    return res;
}

// function to print max and min Invoice number
void PrintMaxAndMinInvoiceNumber(Bill *arr[SIZE])
{
    int min = INT_MAX;
    int max = INT_MIN;

    Invoice *imax;
    Invoice *imin;

    if (CheckNull(arr))
    {
        throw std::runtime_error("Container is Empty");
    }
    else
    {
        for (int i = 0; i < SIZE; i++)
        {
            // find min
            if (arr[i]->billAmount() < min)
            {
                min = arr[i]->billAmount();
                imin = arr[i]->billAssociation();
            }

            // find max
            if (arr[i]->billAmount() > max)
            {
                max = arr[i]->billAmount();
                imax = arr[i]->billAssociation();
            }
        }
    }

    std::cout << "MAX :" << imax->invoiceNumber() << std::endl;
    std::cout << "MIN :" << imin->invoiceNumber() << std::endl;
}

void freeMemory(Bill *arr[SIZE])
{
    if (CheckNull(arr))
    {
        throw std::runtime_error("Container is Empty");
    }
    else
    {
        // deallocating memory
        for (int i = 0; i < SIZE; i++)
        {
            delete arr[i];
        }
    }
}
#endif // FUNTIONALITIES_H
