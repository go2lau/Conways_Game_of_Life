#include "guest.h"

Guest::Guest(){
    name="";
    contact_info={};
    bookings_made={};

}

Guest::Guest(string name_, string contact_info_[], Booking bookings_made_[],int num_bookings ){
    name=name_;
    for(int i=0; i<2; i++){
        contact_info[i]=contact_info_[i];
    }
    for(int i=0; i<num_bookings; i++ ){
        bookings_made[i]=bookings_made_[i];
    }
}

string Guest::get_name(){
    return name;
}

array<string,2> Guest::get_contact_info(){
    return contact_info;
}

vector <Booking> Guest::get_bookings(){
    return bookings_made;
}
