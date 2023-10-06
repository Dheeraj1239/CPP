#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include <iostream>
#include "Employee.h"

class Executive : virtual public Employee
{
private:
    std::string _location;
public:

    // Executive(std::string _id,std::string _name,std::string _location):Employee(_id,_name) , _location(_location){}
    Executive(std::string _location) : _location(_location){}
    void CalculateTax() override{
        std::cout<<"Executive pays 40% tax"<<std::endl;
    }
    virtual ~Executive() {
        std::cout<<"Executive destroyed"<<std::endl;
    }

    std::string location() const { return _location; }

    friend std::ostream &operator<<(std::ostream &os, const Executive &rhs);

    
};

inline std::ostream &operator<<(std::ostream &os, const Executive &rhs) {
    os << static_cast<const Employee &>(rhs)
       << " _location: " << rhs._location;
    return os;
}



#endif // EXECUTIVE_H
