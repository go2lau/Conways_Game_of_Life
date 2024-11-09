#ifndef BOOKING_H
#define BOOKING_H
#include <string>
#include <array>
#include "payment.h"
using namespace std;
class Booking{
    private:
        int booking_id;
        Payment payment;
        array<int,3> check_in_date;
        array<int,3> check_out_date;
    public:
        Booking();
        Booking(int val1, int array1[], int array2[]);
        int get_id();
        array<int,3> get_dates();
};
#endif
