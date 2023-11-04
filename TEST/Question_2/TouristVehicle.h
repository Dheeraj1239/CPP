#ifndef TOURISTVEHICLE_H
#define TOURISTVEHICLE_H

#include <iostream>
#include "TouristVehicleType.h"

class TouristVehicle
{
private:
    std::string _number;
    TouristVehicleType _type;
    int _seat_count;
    float _per_hour_booking_charge;

public:
    TouristVehicle(

        std::string _number,
        TouristVehicleType _type,
        int _seat_count,
        float _per_hour_booking_charge

    );
    
    ~TouristVehicle() {
        std::cout<<"Tourist Vehicle destroyed" <<std::endl;
    }

    std::string number() const { return _number; }
    void setNumber(const std::string &number) { _number = number; }

    TouristVehicleType type() const { return _type; }
    void setType(const TouristVehicleType &type) { _type = type; }

    int seatCount() const { return _seat_count; }
    void setSeatCount(int seat_count) { _seat_count = seat_count; }

    float perHourBookingCharge() const { return _per_hour_booking_charge; }
    void setPerHourBookingCharge(float per_hour_booking_charge) { _per_hour_booking_charge = per_hour_booking_charge; }

    friend std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs);
};

std::string DisplayEnum(TouristVehicleType vtype);

#endif // TOURISTVEHICLE_H
