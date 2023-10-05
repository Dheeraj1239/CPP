#include "Room.h"

Room::Room(float _area, RoomType _type, float _price)
: _area(_area),_type(_type),_price(_price)
{

    _tax_amount = 0.15 * _price;
}