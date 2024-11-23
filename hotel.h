#ifndef HOTEL_H
#define HOTEL_H
#include <string>
#include <vector> // Include vector library for using vectors (for rooms and suites)
#include "room.h" // Include the Room class header
#include "suite.h" // Include the Suite class header
using namespace std;
class Hotel{
    private: 
        string name;
        string location;
        string amenities;
        vector<Room> rooms; // Vector to store the list of rooms in the hotel (aggregation relationship)
        vector<Suite> suites; // Vector to store the list of suites in the hotel (aggregation relationship)
    public:
        // Default constructor: Initializes the hotel details to empty strings and empty vectors for rooms and suites
        Hotel();
        // Constructor with parameters: Initializes the hotel with the provided name, location, and amenities
        Hotel(string data1, string data2, string data3);
         // Function to add a room to the hotel's list of rooms
        void add_room(Room);
        // Function to add a suite to the hotel's list of suites
        void add_suite(Suite);
        // Function to get the hotel information (name, location, and amenities) as a string
        string get_hotel_info();
        vector<Room> get_rooms();
        vector <Suite> get_suites();
        string get_name();

};
#endif
