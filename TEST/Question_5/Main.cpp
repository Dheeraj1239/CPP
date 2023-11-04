#include <iostream>

#include "Account.h"
#include "fun.h"
#define SIZE 4

int main()
{

    Account *arr[SIZE];
    try
    {
        createObjects(arr);

        // [1] funtionality
        std::cout << AverageAccountBalance(arr) << std::endl;

// //-------------------------------------------------------------
//         // [2] functionality
        long* ans = HighestAccountBalance(arr);
        std::cout<<ans[0]<<std::endl;
// //---------------------------------------------------------
//         // [3] functionality
        std::cout<<AverageAccountBalance(arr)<<std::endl;
// //--------------------------------------------------------
//         // [4] funtioanlity
            std::cout<<FindTotalInteresAmount(arr)<<std::endl;
//----------------------------------------------------------
        // [5] funtionality
            Account* acc = FindAccountWithMinBalance(arr);
            acc!=nullptr?std::cout<<*acc<<std::endl : std::cout<<"No account Exists"<<std::endl;
//---------------------------------------------------------------
        // [6] funtionality
            freeMemory(arr);

    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}