#include <iostream>
#include <cstring> // For c-style string functions
#include <cctype> // For character-based functions

using std::cout, std::cin;

int main() {
    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};

    // cout << first_name; // Will likely output garbage
    cout << "Enter your first name: ";
    cin >> first_name;

    cout << "Enter your last name: ";
    cin >> last_name;

    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters." << '\n';
    cout << "And your last name, " << last_name << " has " << strlen(last_name) << " characters." << '\n';

    strcpy(full_name, first_name); // Copy first_name to full_name
    strcat(full_name, " "); // Concatenate full_name and a space
    strcat(full_name, last_name); // Concatenate last_name to full_name
    cout << "Your full name is " << full_name << '\n';
    return 0;
}
