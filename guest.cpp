#include "guest.h"

Guest::Guest(){
    name="";
    phone_number="";
    email="";

}

Guest::Guest(string name_, string phone_number_, string email_, Booking booking_, Room room_, Suite suite_){
    name=name_;
    
    booking=booking_;
    room= room_;
    phone_number=phone_number_;
    email=email_;
    suite=suite_;

}



string Guest::book_room(Room room_, Booking booking_){

    room=room_;
    booking=booking_;
    string message="";
    if (room.get_availability()=="Room is available"){

        room.set_availability(0);
        message="You have booked this room";

    }
    else{
        message="You may not book this room because it is not available";
    }

    return message;
}

string Guest::book_suite(Suite suite_, Booking booking_){

    suite=suite_;
    booking=booking_;
    string message="";
    if (suite.get_availability()=="Room is available"){

        suite.set_availability(0);
        message="You have booked this suite.";

    }
    else{
        message="You may not book this suite because it is not available.";
    }   

    return message;
}




string Guest::get_email(){

    return email;
}

string Guest::get_guest_name(){
    return name;
}

string Guest::get_phone(){
    return phone_number;
}


string Guest::get_guest_info(){

    string info= "Name: "+ name + "\nPhone number: "+ phone_number + "\nEmail: "+email;
    return info;
}

Booking Guest::get_booking(){
    return booking;
}

Room Guest::get_room(){
    return room;
}

Suite Guest::get_suite(){
    return suite;
}

