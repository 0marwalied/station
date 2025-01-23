# Station Ticket Booking System

This is a **Station Ticket Booking System** implemented in C++. It allows users to book tickets for a station by entering their details, selecting a ticket type, and specifying the number of passengers. The system calculates the total price and generates a ticket for the user.

## Features
- **User input**: Collects user details such as name, ticket type, place, date, time, and number of passengers.
- **Ticket type selection**: Offers 5 ticket types with different prices:
  - Type 1: $100
  - Type 2: $80
  - Type 3: $60
  - Type 4: $40
  - Type 5: $25
- **Input validation**: Ensures the user enters valid ticket types and a positive number of passengers.
- **Ticket generation**: Displays the ticket with all user details and the total price.
- **Repeat booking**: Allows users to book another ticket or exit the system.

## How to Use
1. **Compile the code**: Use a C++ compiler (e.g., `g++`) to compile the program:
   ```bash
   g++ -o station.cpp
