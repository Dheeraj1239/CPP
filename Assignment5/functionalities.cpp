#include "Hotel.h"
#include <list>
#include <iostream>
#include "HotelType.h"
#include "Room.h"
#include "functionalities.h"
#include <map>
#define SIZE 3

std::map<int,Hotel*> createObjects(Hotel *arr[SIZE])
{
    std::list<Room *> ls;
    arr[0] = new Hotel(
        "hotel1",
        2323,
        ls = {new Room(123.0f, RoomType::DELUXE, 1234), new Room(123.0f, RoomType::DELUXE, 1234), new Room(123.0f, RoomType::DELUXE, 1234)},
        HotelType::PREMIUM);

    arr[1] = new Hotel(
        "hotel2",
        3123,
        ls = {new Room(123.0f, RoomType::DELUXE, 1234), new Room(123.0f, RoomType::DELUXE, 1234), new Room(123.0f, RoomType::DELUXE, 1234)},
        HotelType::STAY);

    arr[2] = new Hotel(
        "hotel3",
        2864,
        ls = {new Room(123.0f, RoomType::DELUXE, 1234), new Room(123.0f, RoomType::DELUXE, 1234), new Room(123.0f, RoomType::DELUXE, 1234)},
        HotelType::PREMIUM);


        std::map<int,Hotel*> map;

        map[arr[0]->location()] = arr[0]; 

        map[arr[1]->location()] = arr[1];

        map[arr[2]->location()] = arr[2];

        return map;
}


int CountInstanceHotel(Hotel *arr[SIZE])
{
    int cnt = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if(arr[i]->category() == HotelType::PREMIUM ){
            bool flag = false;
            for(Room* r : arr[i]->rooms()){
                if(r->type() == RoomType::DELUXE){
                    flag = true;
                    break;
                }
            }
            if(flag) cnt++;

            flag = false;
        }
    }

    return cnt;
}

 std::list<Hotel*> FindHotelBasedOnLocationCode(std::map<int, Hotel*> map,std::list<int> lcode){

    std::list<Hotel*> ls ;
    for(int i : lcode){
        ls.push_back(map[i]);
    }

    return ls;

}

float FindAverageArea(std::map<int,Hotel*> map,int lcode){

    Hotel* h = map[lcode];

    float avg = 0.0f;
    int size = h->rooms().size();
    for(Room* r : h->rooms()){
        avg+=r->area();
    }

    return avg/size;
}

std::list<Hotel*> getHotel(Hotel* arr[SIZE], HotelType htype){
    

    std::list<Hotel*> ls;
    for(int i=0;i<SIZE;i++){
        if(arr[i]->category() == htype){
            ls.push_back(arr[i]);
        }
    }

    return ls;
}

bool CheckExistance(std::map<int,Hotel*> map,int lcode){
    
    return (map.count(lcode) != 0);

    // return map.find(lcode)!=map.end();
    
}