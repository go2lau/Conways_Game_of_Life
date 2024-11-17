#ifndef SUITE_H
#define SUITE_H
#include <string>
#include "room.h"
class Suite: public Room{
    private:
        string spaces;
        string type;
    public:
        Suite();
        Suite(string data, string data2);
        string get_spaces();
        string get_suite_info();
        string get_suite_type();
};
#endif

