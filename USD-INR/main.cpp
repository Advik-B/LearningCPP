#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    const double usd {77.61};
    double inr {0};
    cout << "Convert USD to INR" << endl;
    cout << "(Dollars to rupees)" << endl;
    cout << "Enter the amount in USD: ";
    cin >> inr;
    cout << "The amount in INR is: " << inr * usd << "/-" <<  endl;
    return 0;
}
