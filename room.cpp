#include <iostream>
#include "room.h"
using namespace std;

Room::Room(){
    isAvailable=0;
    type= 0;
    features="";
    price=0;
    number=0;
}

Room::Room(bool isAvailable, bool type, string features, float price, int number){
    //The values in this method are all intended to be randomized, which is why they have temporarily remained the same. 
    isAvailable=0;
    type=0; 
    features="";
    price=0;
    number=0;
}

string Room::get_room_info(){
    return features;
}

void Room::book(){
    if (isAvailable==1){
        isAvailable= !isAvailable;
    }
}

