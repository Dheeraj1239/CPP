#ifndef MANAGER_H
#define MANAGER_H


#include <iostream>
#include "Employee.h"

class Manager : virtual public Employee
{
private:
    int _team_size;
public:
    // Manager(std::string _id,std::string _name,int _team_size):Employee(_id,_name) , _team_size(_team_size) {}
    Manager(int _team_size):_team_size(_team_size){}
    void CalculateTax() override{
        std::cout<<"Manager pays 20% tax"<<std::endl;
    }
    virtual ~Manager() {
        std::cout<<"Manager destroyed"<<std::endl;
    }

    int teamSize() const { return _team_size; }

    friend std::ostream &operator<<(std::ostream &os, const Manager &rhs);
    
};

inline std::ostream &operator<<(std::ostream &os, const Manager &rhs) {
    os << static_cast<const Employee &>(rhs)
       << " _team_size: " << rhs._team_size;
    return os;
}

#endif // MANAGER_H
