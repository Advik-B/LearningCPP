#include <QApplication>
#include "window.h"
#include <iostream>

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

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow window;
    window.show();
    print("Hello World!");
    return QApplication::exec();
}
