#include <iostream>

using namespace std;
int main()
{
    /*
     * This program demonstrates input validation in c++
     * Acheved with while-loops
     */
    
    // Usally use 'long long' for user input cause you may never know what they are gonna put
    long long number;
    cout << "Enter an even number: ";
    cin >> number;
    if (number % 2 == 0)    {
        cout << "Wow, you really entered an even number the first time. Thank you for actually listening!\n";
        return 0;
    }
    else {
        
        // Very angry program lol
        cout << "YOU LIL SHIT, YOU HAVE TO ENTER AN EVEN NUMBER, NOW I WILL PUT YOU IN A LOOP UNTIL YOU ENTER AN EVEN NUMBER\n";
    
    }
    
    while (number % 2 != 0)
    {
        cout << "ENTER A DAMM NUMBER YOU NUMB-SKULL: ";
        cin >> number;
    }
    {
        cout << "Good, you actually entered an number, lil shit";
    }
    return 0;
}