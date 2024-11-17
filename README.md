# Hotel_Booking_System
This project is a simulation of a simple hotel booking system written in C++ using Object-Oriented Programming. The interface of this program allows users to book the rooms of their choice at any hotel they want. Furthermore, it enables them to consult the status of their payment, and of course cancel their bookings at any given time before the check-in date. As can be seen, the functionalities of this project are barely limited and can be found in any conventional hotel booking system, meaning that it is almost certainly ready to be used in real instances. 

# Features
-Booking rooms and suites of any kind

-Ability to cancel bookings

-User can preview the room and/or suite he/she has booked

-User can choose which hotel to book rooms or suites from

 
 # Implementation

The project is based on the following class diagram:
![Captura de pantalla 2024-11-16 231020](https://github.com/user-attachments/assets/0d1218a2-73dc-446c-aa71-13973cc534c2)




The classes work as follows:

Hotel: This class has a composition relationship with Room and Suite (as Suite has an inheritance relationship with Room, as we shall see later). Its attributes are a vector that contains all of its rooms so that the user may select one of them, another vector filled with suites, its name, its location, and its amenities. All of these attributes may be consulted by the user via getter methods. 

Room: This class has a subclass named Suite, which is why its attributes are protected. Its attributes may all be consulted by users. They are useful data, such as availability, type (suite or regular room), facilities, price and room number. There are getter methods for all of these attributes, in addition to two methods set_features, set_price and set_availability.

Suite: This is Room's only subclass. It has two additional attributes. Therefore, it has two additional getter methods. 

Guest: This class is the composer class for the Room, Suite and Booking classes. Its attributes are name, phone number, e-mail and three objects of the types Room, Suite and Booking, respectively. Data that may change, such as e-mail and phone number, has been granted with setter methods. An object of the Guest class can interact with objects of the Booking, Room and Suite via the methods book_suite, book_room, cancel_room_booking and cancel_suite_booking. 

Booking: There are three attributes to this class: ID, check-in date and check-out date. As the check-in and check-out dates may change as the user manipulates them, they are the only attributes to get setter methods in this class. 
