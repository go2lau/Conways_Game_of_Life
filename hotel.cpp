#include "hotel.h"// Include the header file for the Hotel class
using namespace std;

// Default constructor: Initializes the hotel details (name, location, amenities) to empty strings, and empty vectors for rooms and suites
Hotel::Hotel(){
    name="";
    location="";
    amenities="";
    rooms={};
    suites={};
    
}

// Constructor with parameters: Initializes the hotel name, location, and amenities
Hotel::Hotel(string name_, string location_, string amenities_){

    name=name_;
    location=location_;
    amenities=amenities_;


}


// Function to add a room to the hotel: Adds a room object to the rooms vector
void Hotel::add_room(Room room){

    rooms.push_back(room);
}

// Function to add a suite to the hotel: Adds a suite object to the suites vector
void Hotel::add_suite(Suite suite){

    suites.push_back(suite);
}

// Getter function for hotel information: Returns a string with the hotel name, location, and amenities
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
