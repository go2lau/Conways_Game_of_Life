#include "guest.h"

Guest::Guest(){
    name="";
    phone_number="";
    email="";
    bookings_made={};
    payments_made={};

}

Guest::Guest(string name_, string phone_number_, string email_, Booking bookings_made_[], Payment payments_made_[], int num_bookings, int num_payments){
    name=name_;
    
    for(int i=0; i<num_bookings; i++ ){
        bookings_made[i]=bookings_made_[i];
    }

    phone_number=phone_number_;
    email=email_;

    for(int i=0; i<num_payments; i++){
        payments_made[i]=payments_made_[i];
    }
}

void Guest::set_bookings(vector<Booking> bookings_made_){

    bookings_made= bookings_made_;
}

void Guest::set_payments(vector<Payment> payments_made_){

    payments_made=payments_made_;
}

string Guest::get_guest_info(){

    string info= "Name: "+ name + "\nPhone number: "+ phone_number + "\nEmail: "+email;
    return info;
}

vector <Booking> Guest::get_bookings(){
    return bookings_made;
}

vector <Payment> Guest::get_payments(){

    return payments_made;
}


