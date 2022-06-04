#include <iostream>

using namespace std;

int main()
{
    bool is_equal {false};
    bool is_not_equal {false};
    char ch1;
    char ch2;
    cout << boolalpha;
    cout << "Enter two characters: ";
    cin >> ch1 >> ch2;
    is_equal = (ch1 == ch2);
    is_not_equal = (ch1 != ch2);
    cout << "is_equal: " << is_equal << endl;
    cout << "is_not_equal: " << is_not_equal << endl;
    return 0;
}
