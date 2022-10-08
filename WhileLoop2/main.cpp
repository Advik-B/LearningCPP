#include <iostream>
using namespace std;
int main()
{
    long long num{ 0 };
    int current { 1 };
    cout << "Enter a positive integer to count up to:";
    cin >> num;
    while (num >= current){
        cout << current << "\n";
        current++;
    }
}