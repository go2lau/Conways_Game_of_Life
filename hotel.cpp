#include "hotel.h"
using namespace std;

Hotel::Hotel(){
    name="";
    location="";
    amenities={};
    rooms={};
    
}

Hotel::Hotel(string name_, string location_, string amenities_[],Room rooms[], int room_count, int num_amenities){
    name=name_;
    location=location_;
    for (int i=0; i<num_amenities; i++){
        amenities[i]=amenities_[i];
    }
    for (int i=0; i<room_count; i++){
        rooms[i]= room;
    }
}

string Hotel::get_hotel_info(){
    string info= "Name: "+ name+ "\nLocation: "+location;
}

vector<string> Hotel::get_amenities(){
    return amenities;
}

vector<Room> Hotel::get_rooms(){
    return rooms;
}
