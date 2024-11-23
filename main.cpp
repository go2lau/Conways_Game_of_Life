#include <iostream>
#include <cstdlib> 
#include <ctime>
#include "hotel.cpp"
#include "guest.cpp"
#include "booking.cpp"
#include "room.cpp"
#include "suite.cpp"
using namespace std;

// Function to generate random features for rooms
string generate_features(){
    int features = rand()%5; // Randomly select one of 5 feature sets
    if (features == 0){
        return "Wi-fi, AC, mini-fridge, TV, desk, one bed";
    }
    else if (features==1){
        return "Wi-fi, AC, mini-fridge, TV, central heating, desk, one bed";
    }
    else if (features == 2){
        return "Wi-fi, AC, mini-fridge, TV, central heating, desk, minibar, two beds";
    }
    else if (features ==3){
        return "Wi-fi, AC, mini-fridge, TV, central heating, desk, minibar, espresso machine, one bed";
    }
    else{
        return "Wi-fi, AC, mini-fridge, TV, central heating, desk, minibar, espresso machine, two beds";
    }
}

// Function to generate the price based on the room's features
float generate_room_price(string features){
    if (features=="Wi-fi, AC, mini-fridge, TV, desk, one bed"){
        return 1500.00;
    }
    else if (features=="Wi-fi, AC, mini-fridge, TV, central heating, desk, one bed"){
        return 1650.00;
    }
    else if (features=="Wi-fi, AC, mini-fridge, TV, central heating, desk, minibar, two beds"){
        return 1800.00;
    }
    else if (features=="Wi-fi, AC, mini-fridge, TV, central heating, desk, minibar, espresso machine, one bed"){
        return 1850.00;
    }
    else{
        return 1900.00;
    }
}

// Function to generate a room number based on the floor number
int generate_room_number(int floor){
    int number= floor*100+(rand()%20);
    return number;
}

// Function to generate a random suite type (Junior, Regular, or Presidential)
string generate_suite_type(){
    int type=rand()%3;
    if (type==0){
        return "Junior";
    }
    else if (type==1){
        return "Regular";
    }
    else{
        return "Presidential";
    }
}

// Function to generate space description for suites based on the suite type
string generate_spaces(string type){
    if (type=="Junior"){
        return "One room, one living room, balcony";
    }
    else if (type=="Regular"){
        return "Two rooms, one living room, bañcony";
    }
    else{
        return "Two rooms, one living room, kitchen, balcony";
    }

}

// Function to generate the price of suites based on the suite type
float generate_suite_price(string type){
    if (type=="Junior"){
        return 2000.00;
    }
    else if (type=="Regular"){
        return 2200.00;
    }
    else {
        return 2500.00;
    }
}

// Function to display the main menu options for the user
void menu(){
    cout<<"Welcome to HotelesQuerétaro.com!"<<endl;
    cout<<"Choose an option:"<< endl;
    cout<<"1. View available rooms"<<endl;
    cout<<"2. View available suites"<<endl;
    cout<<"3. Book a room"<<endl;
    cout<<"4. Exit"<<endl;
}

// Function to generate a random room
Room generate_room(int floor){
    string features= generate_features();
    Room room (1,"Standard",features,generate_room_price(features), generate_room_number(floor));
    return room;
}

// Function to generate a random suite
Suite generate_suite(int floor){
    string features= "Wi-fi, AC, mini-fridge, TV, central heating, desk, minibar, espresso machine, one bed";
    string type= generate_suite_type();
    Suite suite (1, "Suite", features, generate_suite_price(type), generate_room_number(floor), generate_spaces(type), type);
    return suite;


}

// Function to display room details
void display_room(Room room){
    cout<<"\nRoom Number: "<<room.get_room_number()<<"\nType: "<<room.get_type()<<"\nFeatures: "<<room.get_features()<<"\nPrice: "<<"$"<<room.get_price()<<"\nAvailability:"<<room.get_availability()<<endl;
}

// Function to display suite details
void display_suite(Suite suite){
    display_room(suite);
    cout<<"\nSuite Type: "<<suite.get_suite_type()<<"\nSpaces: "<<suite.get_spaces()<<endl;
}

// Function to display all rooms in a hotel
void display_rooms(Hotel hotel){
    vector<Room> rooms= hotel.get_rooms(); // Get the list of rooms in the hotel
    cout<<"\nRooms in "<<hotel.get_name()<<":\n"; 
    for (int i=0; i<rooms.size(); i++ ){
        display_room(rooms[i]);
        cout<<"------------------------------------\n";
    }
}

// Function to display all suites in a hotel
void display_suites(Hotel hotel){
    vector<Suite> suites= hotel.get_suites();
    cout<<"\nSuites in "<<hotel.get_name()<<":\n";
    for (int i=0; i<suites.size(); i++ ){
        display_room(suites[i]);
        cout<<"------------------------------------\n";
    }
}

// Function to generate a random booking ID
int generate_booking_id(){
    int id=100000+(rand()%100000);
    return id;
}

// Function to enter check-in date from user input
array<int,3> enter_check_in(){
    int day=0;
    int month=0;
    int year=0;

    cout<<"Entering check in date: "<<endl;
    cout<<"Day: ";
    cin>>day;
    cout<<"Month: ";
    cin>>month;
    cout<<"Year: ";
    cin>>year;

    return {day,month,year};

}

// Function to enter check-out date from user input

array<int,3> enter_check_out(){
    int day=0;
    int month=0;
    int year=0;

    cout<<"Entering check out date: "<<endl;
    cout<<"Day: ";// User inputs day
    cin>>day;
    cout<<"Month: "; // User inputs month
    cin>>month;
    cout<<"Year: "; // User inputs year
    cin>>year;
    
    return {day,month,year}; 

}

// Function to retrieve a room by room number from a hotel's rooms
Room get_room(vector<Room> rooms, int num){
    Room default_room(1,"","",0.0, 0);// Default room to return if not found
    for (int i=0;i<rooms.size();i++){// Loop through the list of rooms
        if(rooms[i].get_room_number()==num){// If the room number matches
                return rooms[i];// Return the matching room
            }
        }

    return default_room; // Return the default room if not found

    }



// Function to retrieve a suite by room number from a hotel's suites (same functionality as get_room())
Suite get_suite(vector<Suite> suites, int num){
    Suite default_suite(1,"","",0.0,0,"","");
    for (int i=0;i<suites.size();i++){
        if(suites[i].get_room_number()==num){
                return suites[i];
            }
        }
    return default_suite;
    
}
// Function to book a hotel by name from the list of hotels (same functionality as get_room())
Hotel book_hotel(array<Hotel,5> hotels, string name){
    Hotel default_hotel("","","");
    for (int i=0; i<5; i++){
        if (hotels[i].get_name()==name){
            return hotels[i];
        }
    }
    return default_hotel;
}

// Function to display booking details
void display_booking(Booking booking){
    cout<<"\nBooking ID: "<<booking.get_booking_id()<<"\nCheck in date: "<<booking.get_checkin()[0]<<"/"<<booking.get_checkin()[1]<<"/"<<booking.get_checkin()[2]<<"\nCheck out date: "<<booking.get_checkout()[0]<<"/"<<booking.get_checkout()[1]<<"/"<<booking.get_checkout()[2];
    
}

//Function to show guest data
void display_guest_data(Guest guest){
    display_booking(guest.get_booking());
    display_room(guest.get_room());
    display_suite(guest.get_suite());
}

// Main function to run the hotel booking system
int main(){
srand(time(0));

//Initializing hotels
Hotel fiesta_inn("Fiesta Inn", "Centro Sur", "Gym, Parking lot, pool, bar, restaurant");
int rooms_fiesta= 5+(rand()%5);
int suites_fiesta= 2+(rand()%3);
for (int i=0; i<rooms_fiesta; i++){
    fiesta_inn.add_room(generate_room(1+(rand()%10)));
}
for (int i=0; i<suites_fiesta; i++){
    fiesta_inn.add_suite(generate_suite(1+(rand()%10)));
}

Hotel encore("Encore", "Jurica", "Gym, Parking lot, electric car chagrers, children's club" );
int rooms_encore= 5+(rand()%5);
int suites_encore= 2+(rand()%3);
for (int i=0; i<rooms_encore; i++){
    encore.add_room(generate_room(1+(rand()%10)));
}
for (int i=0; i<rooms_encore; i++){
    encore.add_suite(generate_suite(1+(rand()%10)));
}

Hotel city_express("City Express", "Jurica", "Safe, room cleaning service");
int rooms_city= 5+(rand()%5);
int suites_city= 2+(rand()%3);
for (int i=0; i<rooms_city; i++){
    city_express.add_room(generate_room(1+(rand()%6)));
}
for (int i=0; i<suites_city; i++){
    city_express.add_suite(generate_suite(1+(rand()%6)));
}

Hotel real_de_minas("Real de Minas", "City Centre", "Children's activities, pool, children's pool, conference rooms");
int rooms_real= 5+(rand()%5);
int suites_real= 2+(rand()%3);
for (int i=0; i<rooms_real; i++){
    real_de_minas.add_room(generate_room(1+(rand()%6)));
}
for (int i=0; i<suites_real; i++){
    real_de_minas.add_suite(generate_suite(1+(rand()%6)));
}

Hotel crown_victoria("Crown Victoria", "City Centre", "Currency exchange, gym, café, jacuzzi, business center");
int rooms_crown= 5+(rand()%5);
int suites_crown= 2+(rand()%3);
for (int i=0; i<rooms_crown; i++){
    crown_victoria.add_room(generate_room(1+(rand()%7)));
}
for (int i=0; i<suites_crown; i++){
    crown_victoria.add_suite(generate_suite(1+(rand()%7)));
}

//Creating an array with the hotels created
array<Hotel,5> hotels={fiesta_inn, encore, city_express, real_de_minas, crown_victoria};

    //Running menu
    int option = 0;// Variable to store menu option
    while (option != 4) {// Loop until user chooses to exit
        menu();
        cin>>option; // User selects an option
        
        if (option==1){
            //Display hotel details, including their rooms
            cout<<fiesta_inn.get_hotel_info();
            display_rooms(fiesta_inn);
            cout<<encore.get_hotel_info();
            display_rooms(encore);
            cout<<city_express.get_hotel_info();
            display_rooms(city_express);
            cout<<real_de_minas.get_hotel_info();
            display_rooms(real_de_minas);
            cout<<crown_victoria.get_hotel_info();
            display_rooms(crown_victoria);
        }
        
        else if (option==2){
            //Display hotel details, including their suites
            cout<<fiesta_inn.get_hotel_info();
            display_suites(fiesta_inn);
            cout<<encore.get_hotel_info();
            display_suites(encore);
            cout<<city_express.get_hotel_info();
            display_suites(city_express);
            cout<<real_de_minas.get_hotel_info();
            display_suites(real_de_minas);
            cout<<crown_victoria.get_hotel_info();
            display_suites(crown_victoria);
        }

        else if (option==3){
            int booking_id= generate_booking_id(); 
            array<int,3> checkin= enter_check_in();
            array<int,3> checkout= enter_check_out();
            Booking booking(booking_id, checkin, checkout); //Create a booking object with the previously specified data
            
            //Creating variables to store guest data
            string name="";
            string phone="";
            string email="";
            int room_booked_num=0;
            string hotel_name="";

            //Retrieving guest data
            cout << "Enter your name: ";
            cin>>name; 
            cin.ignore();
            cout << "Enter your phone number: ";
            getline(cin,phone);
            cout << "Enter your email: ";
            cin>> email; 
            cin.ignore();

            //Retrieving hotel name
            cout << "Enter the name of the hotel at which you would like to book: ";
            getline(cin, hotel_name); 
            cout << "Enter the number of the room you would like to book: ";//  Number used to associate a number to a room
            cin>>room_booked_num;

            Hotel hotel_booked= book_hotel(hotels,hotel_name); //Selecting a hotel to avoid confusion
            Room room_booked= get_room(hotel_booked.get_rooms(), room_booked_num); //Using  get_room() to associate a number to a room
            Suite suite_booked= get_suite(hotel_booked.get_suites(), room_booked_num);
            Guest guest1(name, phone, email, booking, room_booked, suite_booked);//Using get_suite() to associate a number to a suite
            
            //Booking a room (or suite)
            guest1.book_room(room_booked, booking);
            guest1.book_suite(suite_booked, booking);
            cout<<"\nAll done! Here are your booking details: "<<endl;
            display_guest_data(guest1); //Showing guest's booking details
        }

        else if (option==4){
            cout<< "\nThank you for visiting HotelesQuerétaro.com!"; //Exit program
            break;
        }

        else{
        cout << "Invalid input. Please enter a number between 1 and 4: "; //Restarting menu in case of invalid input
        cin>> option;
        cin.ignore();
        continue;
      
        }
    }
return 0;
}


