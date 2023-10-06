#ifndef NOMATCHINGCARD_H
#define NOMATCHINGCARD_H

#include <iostream>
#include <exception>

class NoMatchingCard : public std::exception
{
private:
    std::string msg;
public:
    std::string what(){
        return msg;
    }
    NoMatchingCard(std::string msg): msg(msg) {}
    ~NoMatchingCard() {}
};

#endif // NOMATCHINGCARD_H
