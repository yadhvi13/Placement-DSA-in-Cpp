#include <iostream>
#include <vector>
using namespace std;

vector<int> pivotArray(vector<int>& nums, int pivot) {
    vector<int> ans;

    for (int x : nums) {
        if (x < pivot)
            ans.push_back(x);
    }

    for (int x : nums) {
        if (x == pivot)
            ans.push_back(x);
    }

    for (int x : nums) {
        if (x > pivot)
            ans.push_back(x);
    }

    return ans;
}

int main() {
    vector<int> nums = {9, 12, 5, 10, 14, 3, 10};
    int pivot = 10;

    vector<int> result = pivotArray(nums, pivot);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}