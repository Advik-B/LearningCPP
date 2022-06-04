#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::boolalpha;

int main()
{
    bool is_equal {false};
    bool is_not_equal {false};
    string a{}, b{};
    cout << boolalpha;
    cout << "Enter 2 strings (seperated by a space): ";
    cin >> a >> b;
    is_equal = (a == b);
    is_not_equal = (a != b);
    cout << "Is equal: " << is_equal << endl;
    cout << "Is not equal: " << is_not_equal << endl;
    return 0;
}
