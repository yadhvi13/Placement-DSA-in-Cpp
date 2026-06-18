#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {

            int sum = 0;

            for (int k = i; k <= j; k++) {
                sum += nums[k];
            }

            maxi = max(maxi, sum);
        }
    }

    return maxi;
}

int main() {
    vector<int> nums = {-2, -3, -7, -2, -10, -4};

    cout << maxSubArray(nums);

    return 0;
}