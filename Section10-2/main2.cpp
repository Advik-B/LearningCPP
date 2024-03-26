#include <iostream>
#include <string>

using namespace std;
int main() {
    string s1;
    cout << "Enter a string: ";
    getline(cin, s1);
    cout << "You entered: " << s1 << "\n";
    return 0;
}