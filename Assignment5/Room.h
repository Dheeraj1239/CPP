#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include "RoomType.h"

class Room
{
private:
    float _area;
    RoomType _type;
    float _price;
    float _tax_amount;

public:
    Room(

        float _area,
        RoomType _type,
        float _price
    );

    ~Room() {
        std::cout<< "Room destroyed "<<std::endl;
    }

    float area() const { return _area; }

    RoomType type() const { return _type; }

    float price() const { return _price; }

    float taxAmount() const { return _tax_amount; }
};

#endif // ROOM_H
