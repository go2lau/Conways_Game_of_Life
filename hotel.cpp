#include "hotel.h"
using namespace std;

Hotel::Hotel(){
    name="";
    location="";
    amenities={};
    rooms={};
    info={};
    
}

Hotel::Hotel(string name_, string location_, string amenities_[],Room rooms[], int room_count, int num_amenities){
    name=name_;
    location=location_;
    for (int i=0; i<num_amenities; i++){
        amenities[i]=amenities_[i];
    }
    info={name, location};
    for (int i=0; i<room_count; i++){
        rooms[i]= room;
    }
}

array <string,2> Hotel::get_hotel_info(){
    return info;
}

vector<Room> Hotel::get_rooms(){
    return rooms;
}
