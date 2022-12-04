#include <QApplication>
#include "window.h"
#include <iostream>
#include <string>
#include "msgpack.hpp"

using namespace std;

struct car {
    string name;
    string model;
    uint8_t speed;
    uint16_t year;
    uint32_t mileage;
    uint price;

    template<class T>
    void pack(T &pack) {
        pack(name, model, speed, year, mileage, price);
    }
};

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

int main(int argc, char *argv[])
{
    car Honda_Grand_Civic = {"Honda", "Grand Civic", 180, 2018, 10000, 100000};

    auto data = msgpack::pack(Honda_Grand_Civic);
    print("Data size: " + to_string(data.size()));
    print("Original data size: " + to_string(sizeof(Honda_Grand_Civic)));
    display_arguments(argc, argv);
    QApplication app(argc, argv);
    MainWindow window;
    window.resize(600, 550);
    window.show();
    return QApplication::exec();

}
