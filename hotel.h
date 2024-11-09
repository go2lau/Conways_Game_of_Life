#ifndef HOTEL_H
#define HOTEL_H
#include <string>
#include <array>
using namespace std;
class Hotel{
    protected: 
        array<string,3> info;
        string name;
        string location;
        string amenities;
        int Room;
        //The size of this array is intended to vary over runtime. The implementation of this functionality is pending.
        array<int,10> rooms;
    public:
        Hotel();
        Hotel(string data[], int array[]);
        array<string,3> get_hotel_info();
        array<int,10> get_rooms();

};
#endif
