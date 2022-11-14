#include <iostream>
#include <string>
using namespace std;


// Print function takes an infinite number of arguments (strings) and prints them to the console separated by a space
void print(string s, ...)
{
    // Create a variable argument list
    va_list args;
    // Initialize the variable argument list
    va_start(args, s);
    // Print the first string
    cout << s;
    // Loop through the rest of the strings
    while (!s.empty())
    {
        // Get the next string (without va_arg)
        s = va_arg(args, char*);
        // Print the string
        cout << " " << s;
    }
    // End the variable argument list
    va_end(args);
    // Print a new line
    cout << endl;
}
