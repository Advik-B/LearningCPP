#include <QApplication>
#include "window.h"
#include <iostream>
#include <string>

using namespace std;

template <typename TextObject>
void print(TextObject text, bool newLine = true, bool flush = false)
{
    cout << text;
    if (newLine)
        cout << endl;
    if (flush)
        cout.flush();
}

void display_arguments(int argc, char *argv[])
{
    print("Arguments:");
    print("argc: " + to_string(argc));
    for (int i = 0; i < argc; i++)
    {
        print("argv[" + to_string(i) + "]: " + argv[i]);
    }
}

template <typename ReturnType>
ReturnType input(string prompt)
{
    ReturnType input;
    print(&prompt, false);
    cin >> input;
    return input;
}

bool input(string prompt)
{
    string input;
    print(&prompt, false);
    cin >> input;
    switch (input[0])
    {
        case 'T':
        case 't':
            return true;
        case 'F':
        case 'f':
            return false;

        default:
            return false;
    }
}

int main(int argc, char *argv[])
{
    display_arguments(argc, argv);
    QApplication app(argc, argv);
    MainWindow window;
    window.resize(600, 550);
    window.show();
    return QApplication::exec();

}
