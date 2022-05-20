#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
 * The below code(commented) creates an int named age that is global
 * int age;
 * NOTE TO SELF The local varible (defined in main function) takes higher precedence over age in global
 */

int main() {
    int room_width {0};
    int room_length {0};
    cout << "Enter the WIDTH of the room: ";
    cin >> room_width;
    cout << "Enter the LENGTH of the room: ";
    cin >> room_length;
    cout << endl;
    cout << "The area of the room is: (Length x Width): " << room_width * room_length << endl;
    cout << endl;
    return 0;
}
