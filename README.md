# Hotel_Booking_System
This project is a simulation of a simple hotel booking system written in C++ using Object-Oriented Programming. The interface of this program allows users to book the rooms of their choice at any hotel they want out of five to choose from. The program interface creates a feeling of likeness to a real hotel booking system, since values like the number of rooms available, their room number and their features are randomized each time the program is run, emulating how different rooms are available in hotel booking systems depending on seasons and other factors. Furtermore, the booking process deeply resembles that of a real hotel booking system, as guest data are retrieved and a booking id is generated.  

# Features
-Booking rooms and suites of any kind

-User can preview the room and/or suite he/she has booked

-User can choose which hotel to book rooms or suites from

 
 # Implementation

The project is based on the following class diagram:

![Captura de pantalla 2024-11-24 223944](https://github.com/user-attachments/assets/b310d1cd-10ef-46ad-a149-c57c84bbcaf2)






The classes work as follows:

Hotel: This class has a composition relationship with Room and Suite (as Suite has an inheritance relationship with Room, as we shall see later). Its attributes are a vector that contains all of its rooms so that the user may select one of them, another vector filled with suites, its name, its location, and its amenities. All of these attributes may be consulted by the user via getter methods.

Room: This class has a subclass named Suite, which is why its attributes are protected. Its attributes may all be consulted by users. They are useful data, such as availability, type (suite or regular room), facilities, price and room number. There are getter methods for all of these attributes, in addition to the setter set_availability().

Suite: This is Room's only subclass. It has two additional attributes. Therefore, it has two additional getter methods.

Guest: This class is the composer class for the Room, Suite and Booking classes. Its attributes are name, phone number, e-mail and three objects of the types Room, Suite and Booking, respectively. An object of the Guest class can interact with objects of the Booking, Room and Suite via the methods book_suite and book_room.

Booking: There are three attributes to this class: ID, check-in date and check-out date. There are getter methods for all three of these attributes, as they are quite useful during runtime, as we shall see later.

There is only one setter method (found in the class Room) in this group of classes, since changing the data of the objects is not really necessary during runtime.
