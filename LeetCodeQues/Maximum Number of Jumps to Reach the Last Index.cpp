#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solve(int idx, vector<int>& nums, int target, vector<int>& dp) {
    int n = nums.size();

    if (idx == n - 1)
        return 0;

    if (dp[idx] != -1)
        return dp[idx];

    int ans = -1e9;

    for (int j = idx + 1; j < n; j++) {
        if (abs(nums[j] - nums[idx]) <= target) {
            ans = max(ans, 1 + solve(j, nums, target, dp));
        }
    }

    dp[idx] = ans;
    return dp[idx];
}

int maximumJumps(vector<int>& nums, int target) {
    int n = nums.size();

    vector<int> dp(n, -1);

    int ans = solve(0, nums, target, dp);

    if (ans < 0)
        return -1;

    return ans;
}

int main() {
    vector<int> nums = {1, 3, 6, 4, 1, 2};
    int target = 2;

    cout << "Maximum Jumps: " << maximumJumps(nums, target);

    return 0;
}