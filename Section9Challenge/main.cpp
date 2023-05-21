#include "iostream"
#include "string"
#include "vector"
#include "map"
#include "set"
#include "algorithm"

/*
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.
1
If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[J - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space.
For example, [1 234 5]
If the user enters IA' or 'a' then you should prompt the user for an integer to add to the list
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are 0K
If the user enters IMI or 1m' you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"
If the user enters IS' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1], you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"
If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
 */
using namespace std;


void print_elements(vector<int> vec) {
    if (vec.size() == 0) {
        cout << "The list is empty\n";
        return;
    }
    cout << "[ ";
    for (int element: vec) {
        cout << element << ", ";
    }
    cout << "] \n";
}

int get_int() {
    int num;
    cout << "\nEnter a number: ";
    cin >> num;
    return num;
}

float mean(vector<int> numbers_vec) {
    int sum = 0;
    int count = 0;
    for (int element: numbers_vec) {
        sum += element;
        count++;
    }
    return sum / count;
}

int mode(vector<int> numbers_vec) {
    map<int, int> count_table;
    // First add all the numbers_vec as a key to the hashmap to keep count (all initially to 0)
    for (int num: numbers_vec) {
        count_table[num] = 0;
    }
    for (int num: numbers_vec) {
        count_table[num]++;
    }
    int current_highest_num = 0;
    int current_highest_count = 0;
    for (pair<int, int> nums: count_table) {
        if ( nums.second > current_highest_count ) {
            current_highest_num = nums.first;
        }
    }
    return current_highest_num;

}

int median(vector<int> numbers_vec) {
    // Check if the size is even
    size_t size_of_num;
    size_of_num = numbers_vec.size();
    if (size_of_num % 2 != 0) {
        size_of_num++;
    }
    size_of_num /= 2;
    return numbers_vec.at(size_of_num);
}

template <typename T>
vector<T> reverse_vector(const vector<T> vec ) {
    vector<T> vec_copy = vec;
    size_t index = vec.size();
    // Reverse iterate over the vector
    for ((vec_copy.size() != vec.size()); index--;) {
        vec_copy.push_back(vec.at(index));
    }
    return vec_copy;

}

int largest_num(vector<int> numbers_vec) {
    int current_largest = 0;
    for (int num: numbers_vec) {
        if (num >= current_largest) {
            current_largest = num;
        }
    }
    return current_largest;
}

int smallest_num(vector<int> numbers_vec) {
    int current_smallest = largest_num(numbers_vec);
    for (int num: numbers_vec) {
        if ( num <= current_smallest) {
            current_smallest = num;
        }
    }
}

int main() {
    string menu =
        "A: Add a number\n"
        "R: Reverse the numbers_vec\n"
        "M: Print the average of the numbers_vec\n"
        "V: Print the median of the numbers_vec\n"
        "B: Print the mode of the numbers_vec\n"
        "D: Display the numbers_vec\n"
        "L: Display the largest number\n"
        "S: Display the smallest number\n"
        "P: Purge all the elements\n"
        "X: Remove a number\n"
        "U: Undo adding/removing a number\n"
        "G: Remove all the duplicate numbers_vec\n"
        "?: Print this menu\n"
        "Q: Exit the program\n"

        ;

    char choice = '?';
    int recent_num;
    vector<int> numbers_vec = {};
    cout << menu;
    while (choice != 'Q' && choice != 'q') {
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 'A':
            case 'a':
            {
                int num = get_int();
                numbers_vec.push_back(num);
                recent_num = num;
                continue;
            }

            case 'R':
            case 'r': {
                numbers_vec = reverse_vector<int>(numbers_vec);
            }

            case 'M':
            case 'm':
            {cout << "\nThe mean of the numbers_vec is: " << mean(numbers_vec) << '\n';}

            case 'D':
            case 'd': {
                print_elements(numbers_vec);
            }

            case 'L':
            case 'l':
            {cout << "\nThe largest number is: " << largest_num(numbers_vec) << '\n';}

            case 'S':
            case 's':
            {
                cout << "\nThe smallest number is: " << smallest_num(numbers_vec) << '\n';
            }

            case 'P':
            case 'p': {
                numbers_vec.clear();
                cout << "\nnumbers_vec cleared\n";
            }

            case 'G':
            case 'g':
            {
                // Clear duplicates
                set<int> numset;
                for (int num: numbers_vec) {
                    numset.insert(num);
                }
                numbers_vec.clear();
                for (int num: numset) {
                    numbers_vec.push_back(num);
                }
            }

            case 'X':
            case 'x':
            {
                int num;
                cout << "Enter the number that you want to remove: ";
                cin >> num;
                auto found = find(numbers_vec.end(), numbers_vec.begin(), num);
                if (found != numbers_vec.end()) {
                    cout << "Erased "<< num << " at position " <<
                    found - numbers_vec.end()
                    << '\n';
                    numbers_vec.erase(found);

                } else {
                    cout << "Not found :(\n";
                }
                recent_num = num;

            }

            case '?':
            { cout << menu; }

            case 'U':
            case 'u':
            {
                auto found = find(numbers_vec.end(), numbers_vec.begin(), recent_num);
                if (found != numbers_vec.end()) {
                    numbers_vec.erase(found);
                }
                else {
                    numbers_vec.push_back(recent_num);
                }
            }

            default:
            {
                choice = '?';
                continue;

            }
        }
    }
    return 0;
}
