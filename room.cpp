#include "room.h"
using namespace std;

Room::Room(){
    isAvailable=0;
    type= 0;
    features={};
    price=0;
    number=0;
}

Room::Room(bool isAvailable_, bool type_, string features_[], float price_, int num_features){
    isAvailable=isAvailable_;
    type=type_; 
    for (int i=0; i<num_features; i++){
        features[i]=features_[i];
    }
    price=price_;
}

vector <string> Room::get_room_info(){
    return features;
}

void Room::book(){
    if (isAvailable==1){
        isAvailable= !isAvailable;
        
    }
}

void Room::cancel_booking(){
    if (isAvailable==0){
        isAvailable= !isAvailable;
    }
}
