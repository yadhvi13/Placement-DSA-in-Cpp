#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            bool leader = true;

            for (int j = i + 1; j < n; j++) {
                if (nums[j] > nums[i]) {
                    leader = false;
                    break;
                }
            }

            if (leader)
                ans.push_back(nums[i]);
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {16, 17, 4, 3, 5, 2};

    Solution obj;
    vector<int> ans = obj.leaders(nums);

    cout << "Leaders: ";
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}