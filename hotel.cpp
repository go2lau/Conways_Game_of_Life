#include "hotel.h"
using namespace std;

Hotel::Hotel(){
    info[0];
    rooms[0];

}

Hotel::Hotel(string info[],int rooms[]){
    info[0]= name;
    info[1]= location;
    info [2]= amenities;
    for (int i=0; i<10; i++){//Again, 10 is not a fixed size
        rooms[i]= Room;
    }
}

array <string,3> Hotel::get_hotel_info(){
    return info;
}

array <int,10> Hotel::get_rooms(){
    return rooms;
}
