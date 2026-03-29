#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& nums, int index, vector<int>& current, vector<vector<int>>& result) {
    result.push_back(current);

    for (int i = index; i < nums.size(); i++) {

        // skip duplicates
        if (i > index && nums[i] == nums[i-1]) continue;

        current.push_back(nums[i]);

        solve(nums, i + 1, current, result);

        current.pop_back();
    }
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    vector<vector<int>> result;
    vector<int> current;

    solve(nums, 0, current, result);
    return result;
}

int main() {
    vector<int> nums = {1, 2, 2};

    vector<vector<int>> ans = subsetsWithDup(nums);

    for (auto subset : ans) {
        cout << "[ ";
        for (int x : subset) cout << x << " ";
        cout << "]\n";
    }

    return 0;
}