#include <iostream>

/*

 Advik's Carpet cleaning service
 Charges 30/- per room
 Sales tax rate is 6%
 Estimates are valid for 30 days

 Prompt the user to ask for the number of rooms they want cleaned

Example:
 Number of rooms: 2
 Price per room: 30/-
 cost: 60/-
 Tax: 3.6/-

Total: 63.6/-
This estimate is valid for 30 days.

 Prompt the user to enter the number of rooms
 Display the number of rooms
 Display price per room

 Display cost: (Number of rooms* Price per room)
 Display tax: cost * tax rate
 Display total estimate
 Display expiration time

 */

using std::cout;
using std::cin;
using std::endl;
// I could just do `using namespace std` but I wanted to make sure I use good pratices
int main()
{
    long int number_of_rooms {0};
    long int price_per_room {30};
    double tax {0.06};
    double total {0};
    cout << "[+] Hello, welcome to Advik's carpet cleaning service" << endl;
    cout << "[?] How many rooms do you want cleaned" << endl;
    cout << "👉 ";
    cin >> number_of_rooms;
    cout << endl;
    cout << "Estimate for carpet cleaning service:" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: " << price_per_room << endl;
    total = price_per_room * number_of_rooms;
    cout << "Cost: " << total << endl;
    cout << "Tax(sales): " << tax << endl;
    total = total + tax;
    cout << "Total cost: " << total << endl;
    cout << endl;
    cout << "THE TOTAL IS VALID FOR 30 DAYS ONLY!!" << endl;
    cout << endl;
    return 0;
}
