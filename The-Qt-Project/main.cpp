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


int main(int argc, char *argv[])
{
    display_arguments(argc, argv);
    QApplication app(argc, argv);
    MainWindow window;
    window.show();
    return QApplication::exec();

}
