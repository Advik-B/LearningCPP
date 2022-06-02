#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void cout_vector(vector<int> &v) {
    for (auto &i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void cout_array(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {

    // Construct a 2D array called movie_ratings
    int movie_ratings_array[5][4] = {
        {5, 5, 5, 5},
        {5, 5, 5, 5},
        {5, 5, 5, 5},
        {5, 5, 5, 5},
        {5, 5, 5, 5}
    };
    // Construct a vector called movie_ratings
    vector<vector<int>> movie_ratings_vector;
    for (auto & movie_rating : movie_ratings_array) {
        vector<int> row;
        for (int & j : movie_rating) {
            row.push_back(j);
        }
        movie_ratings_vector.push_back(row);
    }

    cout << "movie_ratings_array:" << endl;
    cout_array(movie_ratings_array[0], 4);
    cout << "movie_ratings_vector:" << endl;
    cout_vector(movie_ratings_vector[0]);
    return 0;

}
