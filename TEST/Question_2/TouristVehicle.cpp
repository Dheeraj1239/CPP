#include "TouristVehicle.h"

TouristVehicle::TouristVehicle(std::string _number, TouristVehicleType _type, int _seat_count, float _per_hour_booking_charge)
: _number(_number),_type(_type), _seat_count(_seat_count), _per_hour_booking_charge(_per_hour_booking_charge)
{
}
std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs) {
    os << "_number: " << rhs._number
       << " _type: " << DisplayEnum( rhs._type)
       << " _seat_count: " << rhs._seat_count
       << " _per_hour_booking_charge: " << rhs._per_hour_booking_charge;
    return os;
}

std::string DisplayEnum(TouristVehicleType vtype){
    if(vtype == TouristVehicleType::BIKE){
        return "BIKE";
    }else if(vtype == TouristVehicleType::BUS){
        return "BUS";
    }else{
        return "CAB";
    }
}
