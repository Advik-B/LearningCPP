#include <iostream>

using namespace std;
int main() {
    int movie_rating [3][4]
    {
            {0, 4, 3, 5},
            {2, 4, 6, 8},
            {10, 20, 30, 40}
    };
    // std::cout << movie_rating; Lol this does not even work
    cout << movie_rating[0][2] << endl;
    return 0;
}
