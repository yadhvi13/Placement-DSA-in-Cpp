#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minMoves(vector<int>& nums, int limit) {

    int n = nums.size();

    vector<int> diff(2 * limit + 2, 0);

    for (int i = 0; i < n / 2; i++) {

        int a = nums[i];
        int b = nums[n - i - 1];

        int low = min(a, b) + 1;
        int high = max(a, b) + limit;
        int sum = a + b;

        // Assume 2 moves
        diff[2] += 2;

        // 1 move range
        diff[low] -= 1;

        // 0 move at exact sum
        diff[sum] -= 1;
        diff[sum + 1] += 1;

        // Back to 2 moves
        diff[high + 1] += 1;
    }

    int ans = INT_MAX;
    int moves = 0;

    for (int s = 2; s <= 2 * limit; s++) {
        moves += diff[s];
        ans = min(ans, moves);
    }

    return ans;
}

int main() {

    vector<int> nums = {1, 2, 4, 3};
    int limit = 4;

    cout << minMoves(nums, limit);

    return 0;
}