#include "room.h"
using namespace std;

Room::Room(){
    isAvailable=0;
    type= "";
    features="";
    price=0;
    number=0;
}

Room::Room(bool isAvailable_, string type_, string features_, float price_, int number_){
    isAvailable=isAvailable_;
    type=type_; 
    features=features_;
    price=price_;
    number=number_;
}

void Room::set_features(string features_){

    features=features_;
}

void Room::set_price(float price_){

    price=price_;
}


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
    }
    else{
        avail="Room is available";
    }
    
}
    
string Room::get_type(){
    return type;
}

string Room::get_features(){
    return features;
}

string Room::get_room_info(){
    string info= "Room number: "+to_string(number)+"\nPrice: "+to_string(price)+ "\nFeatures: "+features+"\nAvailability: "+get_availability();
    return info;
}
