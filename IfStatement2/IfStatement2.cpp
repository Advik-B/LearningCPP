#include <iostream>

int main() {
	using namespace std;
	const int min{ 10 };
	const int max{ 100 };
	
	int num{ 0 };
	int diff{ 0 };
	cout << "Enter a number between " << min << " and " << max << ": ";
	cin >> num;
	
	if (num >= min) {
		diff = num - min;
		cout << "The number is " << diff << " greater than " << min << endl;
	}
	
	if (num <= max) {
		diff = max - num;
		cout << "The number is " << diff << " less than " << max << endl;
	}

	if (num >= min and num <= max) {
		cout << num << " is in range (" << min << "," << max << ")" << endl;
	}
	
	cout << endl;
	return 0;
}