#include <bits/stdc++.h>
using namespace std;

int missingInteger(vector<int>& nums) {
    unordered_set<int> st(nums.begin(), nums.end());

    int sum = nums[0];

    // Find the sequential prefix sum
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1] + 1)
            sum += nums[i];
        else
            break;
    }

    // Find the smallest missing integer
    while (st.count(sum))
        sum++;

    return sum;
}

int main() {
    vector<int> nums = {1, 2, 3, 2, 5};

    cout << missingInteger(nums) << endl;

    return 0;
}