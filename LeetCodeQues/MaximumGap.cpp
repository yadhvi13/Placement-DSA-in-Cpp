#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();

        // If fewer than 2 elements, no gap exists
        if (n < 2) {
            return 0;
        }

        // Find minimum and maximum element
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());

        // All elements are same
        if (mn == mx) {
            return 0;
        }

        /*
            Minimum possible maximum gap:
            ceil((mx - mn) / (n - 1))

            ceil(a / b) = (a + b - 1) / b
        */
        int gap = (mx - mn + n - 2) / (n - 1);

        // Number of buckets
        int bucketCount = (mx - mn) / gap + 1;

        // Store minimum and maximum value in every bucket
        vector<int> bucketMin(bucketCount, INT_MAX);
        vector<int> bucketMax(bucketCount, INT_MIN);

        // Put every number into its appropriate bucket
        for (int num : nums) {
            int index = (num - mn) / gap;

            bucketMin[index] = min(bucketMin[index], num);
            bucketMax[index] = max(bucketMax[index], num);
        }

        int ans = 0;

        // Maximum of previous non-empty bucket
        int prevMax = mn;

        // Check gaps between consecutive non-empty buckets
        for (int i = 0; i < bucketCount; i++) {

            // Empty bucket
            if (bucketMin[i] == INT_MAX) {
                continue;
            }

            // Gap between current bucket's minimum
            // and previous bucket's maximum
            ans = max(ans, bucketMin[i] - prevMax);

            prevMax = bucketMax[i];
        }

        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {3, 6, 9, 1};

    cout << sol.maximumGap(nums) << endl;

    return 0;
}