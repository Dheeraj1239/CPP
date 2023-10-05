#include <iostream>
#include "functionalities.h"

#include <map>
#include <list>
#include "HotelType.h"

#define SIZE 3

int main()
{

    Hotel *arr[SIZE];
    std::map<int, Hotel *> map = createObjects(arr);

    // [1] std::cout<<CountInstanceHotel(arr)<<std::endl;

    // [2]
    // std::list<int> ls = {2864, 3123};
    // std::list<Hotel *> list = FindHotelBasedOnLocationCode(map, ls);

    // for(Hotel* h : list){
    //     std::cout<<h->name()<<std::endl;
    // }

    // [3]
    // std::cout<<FindAverageArea(map,2864)<<std::endl;

    // [4]
    // std::list<Hotel*> list = getHotel(arr,HotelType::PREMIUM);
    // for(Hotel* h : list){
    //     std::cout<<h->name()<<std::endl;
    // }

    // [5]
    std::cout<<CheckExistance(map,2864)<<std::endl;

    return 0;
}