#include <iostream>
#include "Bill.h"
#include "Invoice.h"
#include "funtionalities.h"

#define SIZE 3

int main(){

    Bill* arr[SIZE]={nullptr};
    try
    {
        createObjects(arr);

        // [1] functioanality
        std::cout<<getHighestInvoiceNumber(arr)<<std::endl;

//-----------------------------------------------------------------

        // [2] functionaility
        Invoice* i = getInvoiceInstance(arr,"io2");

        i==nullptr?std::cout<<"No Invoice Exits"<<std::endl:std::cout<<*i<<std::endl;

//-----------------------------------------------------------------

        // [3] functionality
        Invoice** res = getBillAssociatedInvoice(arr,990.0f);

        for(int i=0;i<SIZE && res[i] != nullptr;i++){
            std::cout<< *res[i] << std::endl;
        }

//-----------------------------------------------------------------
        // [4] funtionality
        PrintMaxAndMinInvoiceNumber(arr);

//-----------------------------------------------------------------
        // [5] functionality
        freeMemory(arr);

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}