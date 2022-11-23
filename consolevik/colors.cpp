#include <termcolor/termcolor.hpp>
#include <string>
#include <sstream>

using std::string;

void test()
{
    #include <iostream>

    using namespace std;
    using namespace termcolor;

    cout << "Hello, world!" << endl;
    cout << "Hello, " << red << "world!" << reset << endl;
}

int main()
{
    test();
    return 0;
}