#ifndef BOOKING_H
#define BOOKING_H
#include <string>
#include <array>
#include <vector>
#include "room.h"
using namespace std;
class Booking{
    private:
        int booking_id;
        vector <Room> rooms_booked;
        array<int,3> check_in_date;
        array<int,3> check_out_date;
    public:
        Booking();
        Booking(int val1, Room vector[], int array1[], int array2[], int val2);
        void cancel_booking();
        vector <Room> get_rooms_booked(); 
};
#endif
