#ifndef ROOM_H
#define ROOM_H
#include <string>
#include <array>
#include <vector>
using namespace std;
class Room{
    protected: 
        bool isAvailable;
        string type;
        vector<string> features;
        float price;
        int number;
    public: 
        Room();
        Room(bool boolean, string data2, string data[], float num , int val, int val2);
        string get_type();
        vector<string> get_features();
        void book();
        void cancel_booking();
        float get_price();
        int get_room_number();

};
#endif
