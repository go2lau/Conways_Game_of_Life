#ifndef SUITE_H
#define SUITE_H
#include <vector>
#include <string>
#include "room.h"
class Suite: public Room{
    private:
        vector<string> spaces;
        int type;
    public:
        Suite();
        Suite(string vector[], int val, int val2);
        vector<string> get_suite_info();
};
#endif
