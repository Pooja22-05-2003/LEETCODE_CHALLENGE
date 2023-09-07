#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int min_insertion_cost(vector<int>& arr) {
    int n = arr.size();
    int initial_cost = 0;
    for (int i = 0; i < n - 1; ++i) {
        initial_cost += (arr[i] - arr[i+1]) * (arr[i] - arr[i+1]);
    }

    int min_cost = initial_cost;
    for (int i = 0; i < n - 1; ++i) {
        int insertion_point = (arr[i] + arr[i+1]) / 2;
        int reduction = (arr[i] - insertion_point) * (arr[i] - insertion_point) + (insertion_point - arr[i+1]) * (insertion_point - arr[i+1]) - (arr[i] - arr[i+1]) * (arr[i] - arr[i+1]);
        int new_cost = initial_cost - reduction;
        min_cost = min(min_cost, new_cost);
    }

    return min_cost;
}

int main() {
    vector<int> example_array1 = {4, 4, 7, 1};
    cout << min_insertion_cost(example_array1) << endl;  // Output should be 36

    vector<int> example_array2 = {3, 4, 7, 7};
    cout << min_insertion_cost(example_array2) << endl;  // Output should be 5

    return 0;
}
