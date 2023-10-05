#ifndef HOTEL_H
#define HOTEL_H

#include <iostream>
#include "HotelType.h"
#include "Room.h"
#include <list>

class Hotel
{
private:
    std::string _name;
    signed int _location;
    std::list<Room *> _rooms;
    HotelType _category;

public:
    Hotel(

        std::string _name,
        signed int _location,
        std::list<Room *> _rooms,
        HotelType _category);
    ~Hotel()
    {
        std::cout << "Hoted " << _name << "destroyed" << std::endl;
    }

    std::string name() const { return _name; }

    signed int location() const { return _location; }

    HotelType category() const { return _category; }

    std::list<Room *> rooms() const { return _rooms; }
};

#endif // HOTEL_H
