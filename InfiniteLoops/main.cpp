#include <iostream>

using std::cout;
using std::cin;

int main() {
    /* For infinite loop, use while(true)
    for (;;)
        cout << "This is an infinite loop.\n";
    */

    /*
     while (true)
        cout << "This is an infinite loop.\n";
     */

    /*
     do {
        cout << "This is an infinite loop.\n";
     } while (true);
     */

    char again;
    while (true) {
        cout << "Do you want to loop again? (y/n): ";
        std::cin >> again;
        if (again == 'n' or again == 'N')
            break;

    }

    return 0;
}
