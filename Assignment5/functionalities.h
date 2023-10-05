#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#define SIZE 3

#include "Hotel.h"
#include <map>
#include <list>

std::map<int,Hotel*> createObjects(Hotel* arr[SIZE]);

int CountInstanceHotel(Hotel* arr[SIZE]);

std::list<Hotel*> FindHotelBasedOnLocationCode(std::map<int, Hotel*> map,std::list<int> lcode);

float FindAverageArea(std::map<int,Hotel*> map,int lcode);

std::list<Hotel*> getHotel(Hotel* arr[SIZE], HotelType htype);

bool CheckExistance(std::map<int,Hotel*> map,int lcode);

#endif // FUNCTIONALITIES_H
