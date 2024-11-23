#ifndef SUITE_H
#define SUITE_H
#include <string> // Include string library for using strings
#include "room.h" //Include room header file
class Suite: public Room{ //Inheritance relationship with room
    private:
        //Additional attributes special for the class
        string spaces; 
        string suite_type;
    public:
        Suite();
        Suite(bool boolean, string data, string data2, float num , int val,string data3, string data4);
        string get_spaces();
        string get_suite_type();
};
#endif
