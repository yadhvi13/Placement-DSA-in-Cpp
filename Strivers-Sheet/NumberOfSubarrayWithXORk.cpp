#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        unordered_map<int, int> mp;

        int xr = 0;
        int count = 0;

        mp[0] = 1; // Base case

        for (int i = 0; i < nums.size(); i++) {
            xr ^= nums[i];

            int x = xr ^ k;

            if (mp.find(x) != mp.end()) {
                count += mp[x];
            }

            mp[xr]++;
        }

        return count;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {4, 2, 2, 6, 4};
    int k = 6;

    cout << obj.subarraysWithXorK(nums, k) << endl;

    return 0;
}