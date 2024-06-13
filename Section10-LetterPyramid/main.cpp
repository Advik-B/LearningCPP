#include <iostream>
#include <string>


using namespace std;
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    for (int i = 0; i < input.length(); i++) {
        for (int j = 0; j < input.length() - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << input[j];
        }
        for (int j = i - 1; j >= 0; j--) {
            cout << input[j];
        }
        cout << endl;
    }

    return 0;
}
