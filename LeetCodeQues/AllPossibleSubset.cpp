#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& nums, int index, vector<int>& current, vector<vector<int>>& result) {
    // store current subset
    result.push_back(current);

    for (int i = index; i < nums.size(); i++) {
        // include
        current.push_back(nums[i]);

        // recursive call
        solve(nums, i + 1, current, result);

        // backtrack
        current.pop_back();
    }
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> current;

    solve(nums, 0, current, result);
    return result;
}

// for VS Code testing
int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = subsets(nums);

    for (auto subset : ans) {
        cout << "[ ";
        for (int x : subset) cout << x << " ";
        cout << "]\n";
    }
}