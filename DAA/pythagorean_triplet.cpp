#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
bool is_triplet_with_sum(std::vector<int>& arr) {
    int n = arr.size();

    // First, square all elements in the array and store them in a set
    std::unordered_set<int> squared_set;
    for (int num : arr) {
        squared_set.insert(num * num);
    }
    
    for(int i : squared_set)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum_of_squares = arr[i] * arr[i] + arr[j] * arr[j];
            if (squared_set.find(sum_of_squares) != squared_set.end()) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    std::vector<int> arr = {3, 1, 4, 6, 5};
    bool result = is_triplet_with_sum(arr);
    if (result) {
        std::cout << "There is a triplet that satisfies a^2 + b^2 = c^2." << std::endl;
    } else {
        std::cout << "There is no such triplet." << std::endl;
    }

    return 0;
}
