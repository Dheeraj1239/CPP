#ifndef FUN_H
#define FUN_H

#define SIZE 4
#include "Account.h"
#include "SavingsAccount.h"
#include "CurrentAccount.h"

// functon to chaeck if obj exits if yes return false else return true;
bool CheckNull(Account *arr[SIZE])
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

void createObjects(Account *arr[SIZE])
{
    arr[0] = new SavingsAccount(12345, 1234.5f, SavingsAccountType::METRO);
    arr[1] = new SavingsAccount(12345, 1234.5f, SavingsAccountType::METRO);
    arr[2] = new CurrentAccount(12345, 1234.5f, 999.0f, CurrentAccountType::BASIC);
    arr[3] = new CurrentAccount(12345, 1234.5f, 999.0f, CurrentAccountType::BASIC);
}

// function to find average account balance;

float AverageAccountBalance(Account *arr[SIZE])
{
    float total = 0.0f;
    if (CheckNull(arr))
    {
        throw std::runtime_error("Container is Empty");
    }
    else
    {
        for (int i = 0; i < SIZE; i++)
        {
            total += arr[i]->accountBalance();
        }
    }
    return total / SIZE;
}

// funtion to find account with max balanca
long *HighestAccountBalance(Account *arr[SIZE])
{
    static long res[SIZE];
    float max = 0.0f;
    int idx = -1;
    if (CheckNull(arr))
    {
        throw std::runtime_error("Container is Empty");
    }
    else
    {

        for (int i = 0; i < SIZE; i++)
        {
            if (arr[i]->accountBalance() > max)
            {
                max = arr[i]->accountBalance();
                idx = i;
            }
        }

        res[0] = arr[idx]->accountNumber();
    }

    return res;
}

// function to free allocations
void freeMemory(Account *arr[SIZE])
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

// funtion to find total interest amount

float FindTotalInteresAmount(Account *arr[SIZE])
{
    float total = 0.0f;
    if (CheckNull(arr))
    {
        throw std::runtime_error("Container is Empty");
    }
    else
    {
        for (int i = 0; i < SIZE; i++)
        {
            total += arr[i]->CalculateInterestAmmount();
        }
    }

    return total;
}

// account with minimum balance
Account *FindAccountWithMinBalance(Account *arr[SIZE])
{
    static Account *res = {nullptr};
    float min = arr[0]->accountBalance();
    int idx = 0;
    if (CheckNull(arr))
    {
        throw std::runtime_error("Container is Empty");
    }
    else
    {
        // find account with min balance 
        for (int i = 0; i < SIZE; i++)
        {
            if (arr[i]->accountBalance() < min)
            {
                min = arr[i]->accountBalance();
                std::cout<<arr[i]->accountBalance();
                idx = i;
            }
        }

        res = arr[idx];
    }

    return res;
}
#endif // FUN_H
