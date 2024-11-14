#ifndef HOTEL_H
#define HOTEL_H
#include <string>
#include <array>
#include <vector>
#include "room.h"
using namespace std;
class Hotel{
    protected: 
        string name;
        string location;
        vector<string> amenities;
        Room room;
        vector<Room> rooms;
    public:
        Hotel();
        Hotel(string data1, string data2, string vector[], Room room_array[], int val1, int val2);
        string get_hotel_info();
        vector<string> get_amenities();
        vector<Room> get_rooms();

};
#endif

