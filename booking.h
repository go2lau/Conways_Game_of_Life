#ifndef BOOKING_H
#define BOOKING_H
#include <string>
#include <array>
#include "payment.h"
using namespace std;
class Booking{
    private:
        int booking_id;
        array<int,3> check_in_date;
        array<int,3> check_out_date;
    public:
        Booking();
        Booking(int val1, int array1[], int array2[]);
        void set_checkin(array<int,3>);
        void set_checkout(array<int,3>);
        array<int,3> get_dates();
        int get_booking_id();
};
#endif
