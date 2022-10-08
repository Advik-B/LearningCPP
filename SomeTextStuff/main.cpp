#include <iostream>
#include <string>

using namespace std;

struct vector2
{
    long float x;
    long float y;
};

int main()
{
    string text {"The quick brown fox jumps over the lazy dog."};
    
    // There are 2 ways of outputing the text to the console;
    // 1:
    cout << text << endl;
    // 2: (You can ommit the curly braces {} because it is indented, hovever, multiline is not supported)
    for (auto c: text)
        cout << c;

    cout << endl;
    // 3: Range based (traditional)
    for (char c: text)
    {
        cout << c;
    }

    cout << endl;
    return 0;
}
