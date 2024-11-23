#ifndef BOOKING_H
#define BOOKING_H
#include <string>
#include <array>
using namespace std;
class Booking{
    private:
        int booking_id;
        array<int,3> check_in_date;
        array<int,3> check_out_date;
    public:
        Booking();
        Booking(int val1, array<int,3>, array<int,3>);
        array<int,3> get_checkin();
        array<int,3> get_checkout();
        int get_booking_id();

};
#endif
