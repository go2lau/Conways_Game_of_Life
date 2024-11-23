#include "booking.h" // Include the header file for the Booking class
using namespace std;

// Constructor with no parameters: Initializes the booking_id to 0 and empty check-in and check-out dates
Booking::Booking(){
    booking_id=0;
    check_in_date={};
    check_out_date={};
    
}

// Constructor with parameters to initialize the booking_id, check_in_date, and check_out_date
Booking::Booking(int booking_id_, array<int,3> check_in_date_, array<int,3> check_out_date_){
    booking_id=booking_id_;
    for (int i=0; i<3; i++){
        check_in_date[i]=check_in_date_[i];
        check_out_date[i]=check_out_date_[i];
    }


}

// Getter function for the booking_id. Returns the booking ID of the current booking.
int Booking::get_booking_id(){
    return booking_id;
}

// Getter function for the check-in date. Returns the check_in_date array.
array<int,3> Booking::get_checkin(){
    return check_in_date;
}

// Getter function for the check-out date. Returns the check_out_date array.
array<int,3> Booking::get_checkout(){
    return check_out_date;
}







