#ifndef BOOKING_H
#define BOOKING_H
#include <array>
using namespace std;
class Booking{
    private:
        int booking_id;// Integer to store the booking ID
        array<int,3> check_in_date; // Array to store the check-in date (3 elements: day, month, year)
        array<int,3> check_out_date; //Same as check in
    public:
        Booking();
        Booking(int val1, array<int,3>, array<int,3>);
        // Getter function to retrieve the check-in date
        array<int,3> get_checkin();
        // Getter function to retrieve the check-out date
        array<int,3> get_checkout();
        // Getter function to retrieve the booking ID
        int get_booking_id();

};
#endif
