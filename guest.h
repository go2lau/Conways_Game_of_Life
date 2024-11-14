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
        string phone_number;
        string email; 
        vector <Booking> bookings_made;
        vector <Payment> payments_made;

    public:
        Guest();
        Guest(string data, string data2, string data3, Booking vector1[], Payment vector2[], int val, int val2);
        void set_bookings(vector<Booking>);
        void set_payments(vector<Payment>);
        string get_guest_info();
        vector <Booking> get_bookings();
        vector <Payment> get_payments();

};
#endif
