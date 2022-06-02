#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::string;
// using namespace std;

int main() {
    vector<char> vowels_vec {'a', 'e', 'i', 'o', 'u'};
    char vowels_arr [] {'a', 'e', 'i', 'o', 'u'};
    string tab {"    "};
    cout << "vowels_vec: " << endl << tab;
    for (auto c : vowels_vec) {
        cout << c << " ";
    }
    cout << endl;
    cout << "vowels_arr: " << endl << tab;
    for (auto c : vowels_arr) {
        cout << c << " ";
    }
    cout << endl;
    cout << "vowels_vec.size(): " << vowels_vec.size() << endl;
    cout << "sizeof(vowels_arr): " << sizeof(vowels_arr) << endl;
    cout << "RAW C-OUT: vowels_arr: " << vowels_arr << endl;
    cout << "RAW C-OUT: vowels_vec: " << "<NOT POSSIBLE>" << endl;
    return 0;
}
