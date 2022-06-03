#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    int total {};
    // Same as:
    // int total {0};
    int num1 {}, num2 {}, num3 {};
    const int count {3};

    cout << "Enter three numbers (separated by spaces): ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double average {0};
    average = total / count;
    cout << "The numbers are: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "The sum is: " << total << endl;
    cout << "The average is: " << average << endl;

    cout << "Apparently the above can case possible loss of presiton" << endl;

    cout << "Now, let's try to fix that (using static_cast)" << endl;

    average = 0;
    average = static_cast<double>(total) / count;
//    average = (double)total / count; // This is the same as the above but old and deprecated
    cout << "The average is: " << average << endl;
    cout << "The above is now fixed" << endl;
    return 0;
}
