#include <iostream>
#include "Customer.h"
#include "CreditCard.h"
#include "functionalities.h"

#define SIZE 3

int main(){

    Customer*  arr[SIZE];
    try
    {
        // [1] functionality
        createCustomer(arr);

//-------------------------------------------

        // [2] functionality
        std::string res = getCreditCardNumer(arr);
        res == "" ? std::cout<<"No Credit Card Exists": std::cout<<res<<std::endl;

//------------------------------------------------

        // [3] functionality
        CreditCard** card = getCreditCard(arr,CreditCardType::SIGNATURE);

        for(int i=0;i<SIZE&& card[i] !=nullptr;i++){
            std::cout<<*card[i]<<std::endl;
        }
//------------------------------------------------------------------

        // [4] functionality

        CustomerType ctype = getCustomerType(arr,"c1");
        if(ctype == CustomerType::ELITE){
            std::cout<< "ELITE"<<std::endl;
        }else if(ctype == CustomerType::PRIVILAGED){
            std::cout<< "PRIVILAGED"<<std::endl;
        }else if(ctype == CustomerType::PRO){
            std::cout<< "PRO"<<std::endl;
        } else{
            std::cout<< "No customer Exists "<<std::endl;
        }
//----------------------------------------------------------------

        // [5] functionality
        CheckCustomerCreditCardType(arr) == 1 ? std::cout<<"All contains"<<std::endl : std::cout<<"Not found"<<std::endl;

//---------------------------------------------------------------
        //[6] fucntionality
        freeMemory(arr);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;  
}