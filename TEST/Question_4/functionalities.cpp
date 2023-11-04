#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#define SIZE 3
#include "Customer.h"
#include "CreditCardType.h"
#include "CreditCard.h"
#include "Customer.h"
#include <limits.h>

// functon to chaeck if obj exits if yes return false else return true;
bool CheckNull(Customer *arr[SIZE])
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

// function to creeat Customer
void createCustomer(Customer *arr[SIZE])
{
    arr[0] = new Customer("c1", "bab121101", CustomerType::PRO, new CreditCard("1234 6789 1234 5678", CreditCardType::SIGNATURE, 12345.0f, 123));
    arr[1] = new Customer("c2", "bab121102", CustomerType::PRO, new CreditCard("1234 6789 1234 5679", CreditCardType::SIGNATURE, 12345.0f, 123));
    arr[2] = new Customer("c3", "bab121103", CustomerType::PRO, new CreditCard("1234 6789 1234 5673", CreditCardType::SIGNATURE, 12345.0f, 123));
}

// function to return Credit Number
std::string getCreditCardNumer(Customer *arr[SIZE])
{
    float min = INT_MAX;
    std::string CreditCardNum = "";
    if (CheckNull(arr))
    {
        throw std::runtime_error("Container is Empty");
    }
    else
    {
        for (int i = 0; i < SIZE; i++)
        {
            // find Customer with minimum credit limit
            if (arr[i]->creditCard()->limit() < min)
            {
                min = arr[i]->creditCard()->limit();
                CreditCardNum = arr[i]->creditCard()->number();
            }
        }
    }

    return CreditCardNum;
}

// Function get Credit Crad with given Instance

CreditCard ** getCreditCard(Customer *arr[SIZE], CreditCardType ctype)
{
    static CreditCard * res[SIZE] = {nullptr};
    int k =0;
    if (CheckNull(arr))
    {
        throw std::runtime_error("Container is Empty");
    }
    else
    {
        // cheching weather the card exists
        for (int i = 0; i < SIZE; i++)
        {
            // condition
            if (arr[i]->creditCard()->cardType() == ctype)
            {
                res[k++] = arr[i]->creditCard();
            }
        }
    }

    return res;
}

// function to find customer with given id

CustomerType getCustomerType(Customer *arr[SIZE], std::string _id)
{

    CustomerType ctype ;
    // check if atleats one object exists
    if (CheckNull(arr))
    {
        throw std::runtime_error("Container is Empty");
    }
    else
    {
        // checking weather the customer exists
        for (int i = 0; i < SIZE; i++)
        {
            // condition
            if (arr[i]->id() == _id)
            {
                return arr[i]->customerType();
            }
        }
    }

    return ctype;
}

// function to check if all customer all SIGNATURE CREDIT CARD
bool CheckCustomerCreditCardType(Customer *arr[SIZE])
{
    // check if atleats one object exists
    int cnt = 0;
    if (CheckNull(arr))
    {
        throw std::runtime_error("Container is Empty");
    }
    else
    {

        for (int i = 0; i < SIZE; i++)
        {
            if (arr[i]->creditCard()->cardType() == CreditCardType::SIGNATURE)
            {
                cnt++;
            }
        }
    }

    return cnt == SIZE;
}

// function to deallocate memory
void freeMemory(Customer *arr[SIZE])
{
    if (CheckNull(arr))
    {
        throw std::runtime_error("Container is Empty");
    }
    else
    {
        for (int i = 0; i < SIZE; i++)
        {
            delete arr[i];
        }
    }
}
#endif // FUNCTIONALITIES_H
