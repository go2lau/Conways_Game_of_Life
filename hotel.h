#ifndef HOTEL_H
#define HOTEL_H
#include <string>
#include <array>
#include <vector>
#include "room.h"
#include "suite.h"
using namespace std;
class Hotel{
    private: 
        string name;
        string location;
        string amenities;
        vector<Room> rooms;
        vector<Suite> suites;
    public:
        Hotel();
        Hotel(string data1, string data2, string data3);
        void add_room(Room);
        void add_suite(Suite);
        void set_amenities(string);
        string get_hotel_info();
        string get_amenities();
        vector<Room> get_rooms();
        vector <Suite> get_suites();

};
#endif

