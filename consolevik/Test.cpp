//
// Created by Advik on 23/11/22.
//
#include "colors.cpp"
#include "effects.cpp"
#include <iostream>

using namespace std;
int main()
{
    cout << colors::dye("Hello World", "red") << endl;
    cout << effects::add_effect("Hello World", "bold") << endl;
    return 0;
}