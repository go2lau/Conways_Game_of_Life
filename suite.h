#ifndef SUITE_H
#define SUITE_H
#include <string>
#include "room.h"
class Suite: public Room{
    private:
        string spaces;
        string suite_type;
    public:
        Suite();
        Suite(bool boolean, string data, string data2, float num , int val,string data3, string data4);
        string get_spaces();
        string get_suite_type();
};
#endif
