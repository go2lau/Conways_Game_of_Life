#ifndef ROOM_H 
#define ROOM_H
#include <string> // Include string library for using strings
using namespace std;
class Room{
    protected: 
        bool isAvailable;// Boolean to store whether the room is available (1 for available, 0 for not available)
        string type;
        string features;
        float price;
        int number;
    public: 
        Room(); 
        Room(bool boolean, string data2, string data3, float num , int val);
        string get_type();
        string get_features();
        float get_price();
        int get_room_number();
        string get_availability();
        // Setter function for room availability: Sets the room's availability status
        void set_availability(bool);

};
#endif
