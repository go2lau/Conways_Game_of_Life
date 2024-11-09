#ifndef ROOM_H
#define ROOM_H
#include <string>
#include <array>
using namespace std;
class Room{
    protected: 
        bool isAvailable;
        bool type;
        string features;
        float price;
        int number;
    public: 
        Room();
        Room(bool boolean, bool boolean2, string data, float num , int val);
        string get_room_info();
        void book();


};
#endif
