/*
Q - Display the total bill of cleaning room service .

Pseudocode :

Enter number of rooms
Enter price per room

display cost : (number of rooms * price of each room)
display tax : (display cost * tax)
display total estimate : (display cose) + (display tax)
display expiration time
*/

#include <iostream>
using namespace std;
int main()
{
     int room;
     const int price_per_room = 30;
     // Price is kept constant everywhere in the program .

     cout << "\n\t"
          << "Welcome to Room Cleaning Service" << endl
          << endl;
     cout << "\t"
          << "Enter Requied Data correctly" << endl
          << endl;

     cout << "\t"
          << "Enter Number of rooms you like to be cleaned : ";
     cin >> room;

     cout << "\t"
          << "Estimate for cleaning service : " << endl;

     cout << "\t"
          << "Numbe of rooms are: " << room << endl;

     cout << "\t"
          << "Price per room is: $" << price_per_room << endl;

     cout << "\t"
          << "Cost is: $" << price_per_room * room << endl;

     cout << "\t"
          << "Tax applied is: $" << price_per_room * room * 0.06 << endl;

     cout << "\t"
          << "================================"
          << "\n";

     cout << "\t"
          << "Total Estimate Cost is: $" << (price_per_room * room) + (price_per_room * room * 0.06) << endl;

     cout << "\t"
          << "This is valid for " << 30 << " "
          << "days" << endl;

     return 0;
}