#include <iostream>

int main() {
    using namespace std;
    double num1{}, num2{};
    const string endl{"\n"};
    cout << boolalpha;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "num1 == num2: " << (num1 == num2) << endl;
    cout << "num1 != num2: " << (num1 != num2) << endl;
    cout << "num1 < num2: " << (num1 < num2) << endl;
    cout << "num1 > num2: " << (num1 > num2) << endl;
    cout << "num1 <= num2: " << (num1 <= num2) << endl;
    cout << "num1 >= num2: " << (num1 >= num2) << endl;
    return 0;
}
