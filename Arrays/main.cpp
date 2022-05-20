#include <iostream>

using namespace std;
int main() {
    char vowels [5] {'a', 'e', 'i', 'o', 'u'};
    double high_temps [] {90.1, 89.8, 77.5, 81.6};
    high_temps[0] = 90.2;
    cout << vowels << endl << high_temps;
    return 0;
}
