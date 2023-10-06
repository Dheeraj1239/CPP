#include <iostream>
#include "Director.h"
#include "Employee.h"

int main(){
    Director* d = new Director(
        "D191",         
        "Dheeraj",  
        16,         
        "Pune",     
        973793.0f 
    );

    std::cout<<"Director object"<<std::endl;
    std::cout<<*d<<std::endl;

    d->Manager::CalculateTax();
    d->Executive::CalculateTax();
    d->CalculateTax();

    delete d;
    return 0;

}
