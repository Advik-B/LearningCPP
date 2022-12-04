//
// Created by Advik on 23/11/22.
//
#include "format.cpp"
#include <iostream>

using namespace std;
int main()
{
    cout << fmt::format("Hello World!", "on_green red", "underline") << endl;
    return 0;
}