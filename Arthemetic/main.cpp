#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    int a, b;
    cout << "Enter two numbers (separated by space)\n[will be stored as a, b]\n~> ";
    cin >> a >> b;
    cout << "a" << "+" << "b" << "=" << a+b << endl;
    cout << "a" << "-" << "b" << "=" << a-b << endl;
    cout << "a" << "*" << "b" << "=" << a*b << endl;
    cout << "a" << "%" << "b" << "=" << a%b << endl;
    cout << "a" << "/" << "b" << "=" << a/b << endl;
    return 0;
}
