// Online C++ compiler to run C++ program online
#include <iostream>

class A{
    public :
        std::string _nameA;
};

class B : public A{
    public :
        std::string _nameB;
};

class C : public B{
    public :
        std::string _nameC;
};

class D{
    public :
        std::string _nameD;
};

int main() {
    
    C c;

    c._nameA = "Dheeraj";
    c._nameB = "poojary";
    c._nameC = "kumar";

    std::cout<<c._nameA;

    return 0;
}