#include <iostream>
#include "booking.h"
#include "room.h"
using namespace std;

Booking::Booking(){
    booking_id=0;
    rooms_booked={};
    check_in_date={};
    check_out_date={};
}

Booking::Booking(int booking_id, Room rooms_booked_[], int check_in_date_[], int check_out_date_[], int num_rooms){
    booking_id=0;//randomized value
    for (int i=0; i<num_rooms; i++){
        rooms_booked[i]=rooms_booked_[i];
        check_in_date[i]=check_in_date_[i];
        check_out_date[i]=check_out_date_[i];
    }


}


vector<Room> Booking::get_rooms_booked(){
    return rooms_booked; 
}

