#include <iostream>

#include "Product.h"
#include "functionalities.h"
#define SIZE 5

int main(){
    Product* arr[SIZE];
    try
    {
        // [1] functionaity
        createProducts(arr);
//------------------------------------------

        // [2] functionality
        std::cout<<"Averagre :"<<FindAvgProductPrice(arr)<<std::endl;
//---------------------------------------------

        // [3] functionality
        std::cout<<"Tax "<<FindProductTaxAmount(arr)<<std::endl;
//---------------------------------------------------------

        // [4] functionality
        std::cout<<"MAX "<<FindMaxProductPrice(arr)<<std::endl;

//--------------------------------------------------------
        // [5] functionality
        freeMemory(arr);

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}