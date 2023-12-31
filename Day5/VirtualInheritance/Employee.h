#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

class Employee
{
private:
    std::string _id;
    std::string _name;
public:

    Employee()=default;
    Employee(std::string _id,std::string _name):_id(_id), _name(_name) {}
    virtual void CalculateTax() = 0;
    virtual ~Employee() {
        std::cout<<"Employee destroyed"<<std::endl;
    }

    std::string id() const { return _id; }

    std::string name() const { return _name; }

   friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
    
};

inline std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name;
    return os;
}

#endif // EMPLOYEE_H
