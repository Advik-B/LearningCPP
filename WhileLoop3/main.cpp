#include <iostream>

// This was a waste of time 🙁
using namespace std;
int main()
{
    long long stop { 0 };
    long long current{0};
    cout << "Enter a number to count up to: ";
    cin >> stop;
    while (current >= stop){
        cout << current << "\n";
        stop--;
    }
    
    
}