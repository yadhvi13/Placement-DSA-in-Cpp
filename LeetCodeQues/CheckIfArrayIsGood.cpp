#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isGood(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    int n = nums.size();

    for(int i = 0; i < n - 1; i++) {
        if(nums[i] != i + 1)
            return false;
    }

    return nums[n - 1] == n - 1;
}

int main() {
    vector<int> nums = {2, 1, 3};

    if(isGood(nums))
        cout << "True";
    else
        cout << "False";

    return 0;
}