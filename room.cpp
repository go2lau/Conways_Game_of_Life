#include "room.h"// Include the header file for the Room class
using namespace std;

// Default constructor: Initializes room attributes to default values
Room::Room(){
    isAvailable=0;
    type= "";
    features="";
    price=0;
    number=0;
}

// Constructor with parameters: Initializes room attributes with provided values
Room::Room(bool isAvailable_, string type_, string features_, float price_, int number_){
    isAvailable=isAvailable_;
    type=type_; 
    features=features_;
    price=price_;
    number=number_;
}

// Setter function for room availability: Updates the room's availability status
void Room::set_availability(bool isAvailable_){
    isAvailable=isAvailable_;
}

float Room::get_price(){

    return price;
}

int Room::get_room_number(){

    return number;
}

string Room::get_availability(){

string avail="";

    if (isAvailable==0){
        avail="Room is not available";
        return avail;
    }
    else{
        avail="Room is available";
        return avail;
    }
    
}
    
string Room::get_type(){
    return type;
}

string Room::get_features(){
    return features;
}


