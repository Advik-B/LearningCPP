#include <iostream>
#include <cstring> // For c-style string functions
#include <cctype> // For character-based functions

using std::cout, std::cin;

int main() {
    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};

    cin.get(temp, 50); // Will read up to 49 characters into temp
    cout << temp << '\n'; // Will output the characters read into temp
    cout << strlen(temp) << '\n'; // Will output the number of characters read into temp

    for (size_t i { }; i < strlen(temp); ++i) {
        if (isalpha(temp[i])) {
            temp[i] = (char)toupper(temp[i]);
        }
    }
    cout << temp << '\n'; // Will output the characters read into temp, but in uppercase
    return 0;
}
