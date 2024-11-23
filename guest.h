#ifndef GUEST_H
#define GUEST_H
#include <string> // Include string library for using strings
#include "booking.h" // Include the Booking class header
#include "room.h" // Include the Room class header
#include "suite.h"  // Include the Suite class header
using namespace std; 

class Guest{

    private:
        string name; 
        string phone_number;
        string email; 
        Booking booking; // Booking object to store the guest's booking details (aggregation relationship)
        Room room; // Room object to store the guest's booking details (aggregation relationship)
        Suite suite; // Suite object to store the guest's booking details (aggregation relationship)
    public:
        Guest();
        Guest(string data, string data2, string data3, Booking booking, Room room, Suite suite);
        // Function to book a room: Takes a Room and Booking object, changes its availability
        void book_room(Room, Booking); 
         // Function to book a suite: Takes a Suite and Booking object, changes its availability
        void book_suite(Suite, Booking);
        string get_email();
        string get_phone();
        string get_guest_name();
        Booking get_booking();
        Room get_room();
        Suite get_suite();
};
#endif
