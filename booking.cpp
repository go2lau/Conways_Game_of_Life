#include "booking.h"
using namespace std;

Booking::Booking(){
    booking_id=0;
    check_in_date={};
    check_out_date={};

}

Booking::Booking(int booking_id_, int check_in_date_[], int check_out_date_[]){
    booking_id=booking_id_;
    for (int i=0; i<3; i++){
        check_in_date[i]=check_in_date_[i];
        check_out_date[i]=check_out_date_[i];
    }


}

int Booking::get_id(){
    return booking_id;
}

array<int,3> Booking::get_dates(){
    return check_in_date;
    return check_out_date;
}
