# Hotel_Booking_System
This project is a simulation of a simple hotel booking system written in C++ using Object-Oriented Programming. The interface of this program allows users to book the rooms of their choice at any hotel they want. Furthermore, it enables them to consult the status of their payment, and of course cancel their bookings at any given time before the check-in date. As can be seen, the functionalities of this project are barely limited and can be found in any conventional hotel booking system, meaning that it is almost certainly ready to be used in real instances. 

# Features
-Booking suites of any kind

-Refunds in case of booking cancellation

-User can view all of his/her bookings

-User can view all of his/her payments

 
 # Implementation

The project is based on the following class diagram:

![Captura de pantalla 2024-11-13 235104](https://github.com/user-attachments/assets/85fffdb4-21fb-4cd7-86e9-504fab75a761)


The classes work as follows:

Hotel: This class has a composition relationship with Room and Suite (as Suite has an inheritance relationship with Room, as we shall see later). Its attributes are a vector that contains the numbers of all of its rooms so that the user may select one of them, its name, its location, a vector containing all of its amenities and the variable room (data type Room), which will be useful when determining how the vector of rooms will be filled. All of these attributes may be consulted by the user via getter methods. 

Room: This class has a subclass named Suite, which is why its attributes are protected. Its attributes may all be consulted by users. They are useful data, such as availability, type (suite or regular room), facilities, price and room number. There are getter methods for all of these attributes, in addition to two methods called book() and cancel_booking(), which essentially alter the state of the attribute isAvailable. 

Suite: This is Room's only subclass. It has two additional attributes. Therefore, it has two additional getter methods. 

Guest: This class is the composer class for both the Payment and Booking classes. Its attributes are name, phone number, e-mail and two vectors named bookings and payments. These vectors store, respectively, objects of the classes Booking and Payment, and they are the only attributes of this class which require setter methods, as the length of these vectors will change over runtime. An object of the Guest class can interact with objects of the Booking and Payment classes in order to "have" more of them (and subsequently store them in their respective vectors).   

Payment: There are two attributes to this class: ID and amount. Aside from the getter methods, this class has a method named refund(), which sets both the ID and the amount to 0 (its intention is to erase the object). 

Booking: There are three attributes to this class: ID, check-in date and check-out date. As the check-in and check-out dates may change as the user manipulates them, they are the only attributes to get setter methods in this class. 
