#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> numbers{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

	// For-loop (range)
	for (int num : numbers) {
		cout << num << "\n";
	};

	// For-loop (classic)
	for (int i{ 0 }; i <= 10; i++) {

	};
	
	return 0;
}
