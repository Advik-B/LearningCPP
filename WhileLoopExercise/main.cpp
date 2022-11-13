#include <iostream>
#include <vector>
using namespace std;

/*

 Given a vector of integers, determine how many integers are present before you see the value -99.
 Note, it's possible-99  is not in the vector!
 If -99  is not in the vector then the result will be equal to the number of elements in the vector.
 The final result should be stored in an integer variable named count.
 Note that you the different vectors will be tested against your code.
 You do not need to declare the vector of integers. vec  is the name of the vector you should use.

*/

int count_numbers(const vector<int> &vec) {
    int count {0};
    size_t index {0};  // See the Q/A forum for more about size_t:
    // size_t is an unsigned int
    // you can replace size_t with int or unsigned int and it will work fine

    while (index < vec.size() && vec.at(index) != -99  ) {
        ++count;
        ++index;
    }
    return count;
};


int main()
{
    // Does contain -99 at 10th index
    vector<int> test1 {
        1,
        2,
        5,
        7,
        9,
        10,
        90,
        100,
        200,
        923,
        -99,
        823,
        87
    };

    // Does not contain -99
    vector<int> test2 {
        1,
        2,
        5,
        7,
        9,
        10,
        90,
        100,
        200,
        923,
        823,
        87
    };
    cout << "test1 contains " << count_numbers(test1) << " numbers before -99" << endl;
    cout << "test2 contains " << count_numbers(test2) << " numbers before -99" << endl;
    if (count_numbers(test1) == 10) {
        cout << "test1 passed" << endl;
    }
    if (count_numbers(test2) == 12) {
        cout << "test2 passed" << endl;
    }
    return 0;
}