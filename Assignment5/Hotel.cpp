#include "Hotel.h"

Hotel::Hotel(std::string _name, signed int _location, std::list<Room *> _rooms, HotelType _category)
: _name(_name), _location(_location), _rooms(_rooms),_category(_category)
{
}