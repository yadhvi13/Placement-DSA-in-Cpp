#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxFrequency(vector<int>& nums, int k) {

    sort(nums.begin(), nums.end());

    long long sum = 0;
    int left = 0;
    int ans = 1;

    for (int right = 0; right < nums.size(); right++) {

        sum += nums[right];

        while ((long long)nums[right] * (right - left + 1) - sum > k) {
            sum -= nums[left];
            left++;
        }

        ans = max(ans, right - left + 1);
    }

    return ans;
}

int main() {

    vector<int> nums = {1, 2, 4};
    int k = 5;

    cout << maxFrequency(nums, k);

    return 0;
}