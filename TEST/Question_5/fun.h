#ifndef FUN_H
#define FUN_H

#define SIZE 4
#include "Account.h"
#include "SavingsAccount.h"
#include "CurrentAccount.h"

// functon to chaeck if obj exits if yes return false else return true;
bool CheckNull(Account *arr[SIZE]);

void createObjects(Account *arr[SIZE]);

// function to find average account balance;

float AverageAccountBalance(Account *arr[SIZE]);

// funtion to find account with max balanca
long *HighestAccountBalance(Account *arr[SIZE]);

// function to free allocations
void freeMemory(Account *arr[SIZE]);

// funtion to find total interest amount

float FindTotalInteresAmount(Account *arr[SIZE]);

// account with minimum balance
Account *FindAccountWithMinBalance(Account *arr[SIZE]);

#endif // FUN_H
