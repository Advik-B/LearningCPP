#include <iostream>

using namespace std;

int main() {
    char selection;
    do {
        double width, height;
        cout << "Enter width and height: ";
        cin >> width >> height;
        cout << "Area: " << width * height << endl;
        cout << "Continue? (y/n): ";
        cin >> selection;
    } while (selection == 'y' || selection == 'Y');
    cout << "Bye!" << endl;
    return 0;

}