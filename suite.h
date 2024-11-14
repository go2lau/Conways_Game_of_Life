#ifndef SUITE_H
#define SUITE_H
#include <vector>
#include <string>
#include "room.h"
class Suite: public Room{
    private:
        vector<string> spaces;
        string type;
    public:
        Suite();
        Suite(string vector[], string data, int val2);
        vector<string> get_suite_info();
        string get_suite_type();
};
#endif
