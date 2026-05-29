#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;

        for (int x : nums) {
            int sum = 0;

            while (x > 0) {
                sum += x % 10;
                x /= 10;
            }

            ans = min(ans, sum);
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {10, 12, 13, 14};

    cout << obj.minElement(nums);

    return 0;
}