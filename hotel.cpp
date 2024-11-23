#include "hotel.h"
using namespace std;

Hotel::Hotel(){
    name="";
    location="";
    amenities="";
    rooms={};
    suites={};
    
}

Hotel::Hotel(string name_, string location_, string amenities_){

    name=name_;
    location=location_;
    amenities=amenities_;



}




void Hotel::add_room(Room room){

    rooms.push_back(room);
}


void Hotel::add_suite(Suite suite){

    suites.push_back(suite);
}


string Hotel::get_hotel_info(){
    string info= "Name: "+ name+ "\nLocation: "+location + "\nAmenities: "+ amenities;
    return info;
}



vector<Room> Hotel::get_rooms(){
    return rooms;
}

vector<Suite> Hotel::get_suites(){
    return suites;
}

string Hotel::get_name(){
    return name;
}
