#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Employee.h"
#include "Executive.h"
#include "Manager.h"
#include <ostream>

/*
    In multiple inheritence in CPP , the most derived class is responsible for instantiating the most base class/ classses
*/


class Director : public Manager , public Executive
{
private:
    float _budget;
public:
    Director(std::string id, std::string name,int size, std::string location, float budget)
    : Employee(id,name), Manager(size), Executive(location), _budget(budget) 
    {
        
    }

    void CalculateTax(){
        std::cout<<"Director pays 40% tax"<<std::endl;
    }

    ~Director() {
        std::cout<<"Director Destroyed"<<std::endl;
    }

    float budget() const { return _budget; }

    friend std::ostream &operator<<(std::ostream &os, const Director &rhs);

    
};

inline std::ostream &operator<<(std::ostream &os, const Director &rhs) {
    os << static_cast<const Manager &>(rhs)
       << static_cast<const Executive &>(rhs)
       << " _budget: " << rhs._budget;
    return os;
}

#endif // DIRECTOR_H
