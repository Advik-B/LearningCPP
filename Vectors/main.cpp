#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::string;

void output_vectors(vector<int> vector, string separator) {
    /*
     * Outputs the contents of a vector to the console. (with a separator between each element)
     * ...and without a newline at the end.
     */
    for (int i : vector) {
        cout << i << separator;
    }
}

int main() {
    cout << "==========START OF PROGRAM==========" << endl;

    cout <<
    "This program is using something called vectors" << endl <<
    "vectors are like python lists..." << endl <<
    "But, if you go beyond the length of it ie:" << endl <<
    "\t# Python code below" << endl <<
    "\tlist = ['apple', 'ball', 'cat', 'dog', 'elephant'] <The total length of the list is 5 and it starts from zero (so that means that: to access the fifth value, you need to type `list[4]`)>" << endl <<
    "\tprint(list[5]) <In python, it would raise an index out of range error>" << endl <<
    "In c/c++ it would just grab the value in that memory address" << endl <<
    "Which can be a bad thing. because the value can be mutable. Then all HELL CAN BREAK LOOSE" << endl <<
    "Anyways... here is the output"
    << endl;

    cout << endl << endl;
    cout << "=====START OF OUTPUT=====" << endl;

    // Here, we are creating a vector of integers (the <int> is the type of the vector)
    vector<int> test_scores {100, 95, 99, 87, 88};
    // If we want strings, we can use <string>
    // vector<string> words {"apple", "ball", "cat", "dog", "elephant"};
    // Dont forget to add `#include <string>` in the top of the file
    cout << "The first test score is: " << test_scores.at(0) << endl;
    cout << "The second test score is: " << test_scores[1] << endl;
    cout << "The test scores are: ";
    output_vectors(test_scores, " ");
    cout << endl;

    cout << "Pushing back(appending) 72, 69, 26, 15, 12 to `test_scores`..." << endl;
    test_scores.push_back(72);
    test_scores.push_back(69);
    test_scores.push_back(26);
    test_scores.push_back(15);
    test_scores.push_back(12);
    cout << "The test scores are: ";
    output_vectors(test_scores, " ");
    cout << endl;
    cout << "=====END OF OUTPUT=====" << endl << endl;
    cout << "==========END OF PROGRAM==========" << endl;
    return 0;
}