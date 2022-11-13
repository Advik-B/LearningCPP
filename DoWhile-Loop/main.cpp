#include <iostream>
#include "string"
#include "vector"
using namespace std;

void print_list(const vector<string> &list)
{


    long int index;
    for (const string &i : list) {

        // Cout the index of the list item and the list item itself
        index = &i - &list[0];
        index++; // Increment the index by 1 for human readability
        cout << index << " 🔹 " << i << endl;

    }

}


int main()
{
    long selection {0};
    bool satisfied { false };
    vector<string> todo
    {
        "Do homework",
        "Do laundry",
        "Do dishes",
        "Do nothing",
        "Do something else",
        "Do something",
        "Do chores",
    };
    string tmp;
    print_list(todo);
    do {
        cout << "→ ";
        cin >> selection;
        // make sure the selection is a number, if not, clear the input buffer and make the selection 0
        if (cin.fail()) {
            cin.clear();
            tmp = cin.get();
            for (char &i : tmp) {
                cin.ignore(1, i);
            }
            selection = 0;
        }

        if (selection > 0 && selection <= todo.size()) {
            satisfied = true;
        }
        else {
            cout << "Invalid selection. Please try again." << endl;
        }
    }
    while (not satisfied);
    cout << "You selected: " << todo[selection - 1] << endl;
    cout << "Goodbye!" << endl;
    return 0;
}
