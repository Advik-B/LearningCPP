#include <iostream>
#include <math.h>


int main() {
    using namespace std;
	cout << 
    "Welcome to the c++ control flow\n" <<
	"This program will take a number and check if the number is even or odd\n" <<
    endl;
	long long number{0};
	cout << "Enter a number: ";
	cin >> number;
	if (fmod(number, 2) == 0) {
		cout << "The number is even" << endl;
	}
	else {
		cout << "The number is odd" << endl;
	}
    return 0;
}
