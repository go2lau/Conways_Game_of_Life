#ifndef GUEST_H
#define GUEST_H
#include <string>
#include "booking.h"
#include "room.h"
#include "suite.h"
using namespace std; 

class Guest{

    private:
        string name;
        string phone_number;
        string email; 
        Booking booking;
        Room room;
        Suite suite;
    public:
        Guest();
        Guest(string data, string data2, string data3, Booking booking, Room room, Suite suite);
        string book_room(Room, Booking);
        string book_suite(Suite, Booking);
        string get_guest_info();
        string get_email();
        string get_phone();
        string get_guest_name();
        Booking get_booking();
        Room get_room();
        Suite get_suite();
};
#endif
