#ifndef GUEST_H
#define GUEST_H
#include <string>
#include <array>
#include <vector>
#include "booking.h"
using namespace std; 

class Guest{

    protected:
        string name;
        array <string,2> contact_info;
        vector <Booking> bookings_made;
    public:
        Guest();
        Guest(string data, string data2[], Booking vector1[], int val);
        string get_name();
        array<string,2> get_contact_info();
        vector <Booking> get_bookings();

};
#endif
