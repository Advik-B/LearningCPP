#include <iostream>

using namespace std; // This is not recommended, but it is allowed in C++
int main()

{
    cout << boolalpha;
    bool equal_result {false};
    bool not_equal_result {false};

    int num1{}, num2{};
    cout << "Enter two integers seperated by a space: ";
    cin >> num1 >> num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;
    return 0;
}
