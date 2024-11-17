#ifndef ROOM_H
#define ROOM_H
#include <string>
using namespace std;
class Room{
    protected: 
        bool isAvailable;
        string type;
        string features;
        float price;
        int number;
    public: 
        Room();
        Room(bool boolean, string data2, string data3, float num , int val);
        string get_type();
        string get_features();
        string get_room_info();
        float get_price();
        int get_room_number();
        string get_availability();
        void set_availability(bool);
        void set_features(string);
        void set_price(float);

};
#endif
