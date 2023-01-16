#include <iostream>
#include <vector>
using namespace std;
int main() {
    int num_items;
    cout << "How many data items do you have? ";
    cin >> num_items;

    vector<int> data;
    int current_data_item;
    for (int i = 1; i <= num_items; i++) {
         cout << "Enter data item " << i << " :";
         cin >> current_data_item;
         data.push_back(current_data_item);
    }



    for (auto val: data){
        for (int i = 1; i<=val; i++) {
            cout << "-";
        }
        cout << endl;
    }

    return 0;
}
