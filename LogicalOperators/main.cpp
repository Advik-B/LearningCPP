#include <iostream>

int main() {
    using namespace std;
    cout << "Using logical operators" << endl;
    int a{0}, b{0};
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "a /= b = " << (a /= b) << endl;
    // Delete a, b from memory
    a = b = 0;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "a %= b = " << (a %= b) << endl;
    // Delete a, b from memory
    a = b = 0;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "a *= b = " << (a *= b) << endl;
    // Delete a, b from memory
    a = b = 0;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "a += b = " << (a += b) << endl;
    // Delete a, b from memory
    a = b = 0;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "a -= b = " << (a -= b) << endl;
    // Delete a, b from memory
    a = b = 0;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "a <<= b = " << (a <<= b) << endl;
    // Delete a, b from memory
    a = b = 0;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "a >>= b = " << (a >>= b) << endl;
    // Delete a, b from memory
    a = b = 0;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "a &= b = " << (a &= b) << endl;
    // Delete a, b from memory
    a = b = 0;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "a ^= b = " << (a ^= b) << endl;
    // Delete a, b from memory
    a = b = 0;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "a |= b = " << (a |= b) << endl;
    // Delete a, b from memory
    a = b = 0;
    return 0;
}
