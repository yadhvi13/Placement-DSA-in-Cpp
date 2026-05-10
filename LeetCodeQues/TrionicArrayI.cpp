#include <iostream>
#include <vector>

using namespace std;

bool isTrionic(vector<int>& nums) {
    int n = nums.size();

    for (int p = 1; p < n - 2; p++) {
        for (int q = p + 1; q < n - 1; q++) {

            bool ok = true;

            // strictly increasing from 0 to p
            for (int i = 1; i <= p; i++) {
                if (nums[i] <= nums[i - 1]) {
                    ok = false;
                    break;
                }
            }

            // strictly decreasing from p to q
            if (ok) {
                for (int i = p + 1; i <= q; i++) {
                    if (nums[i] >= nums[i - 1]) {
                        ok = false;
                        break;
                    }
                }
            }

            // strictly increasing from q to n-1
            if (ok) {
                for (int i = q + 1; i < n; i++) {
                    if (nums[i] <= nums[i - 1]) {
                        ok = false;
                        break;
                    }
                }
            }

            if (ok)
                return true;
        }
    }

    return false;
}

int main() {
    vector<int> nums = {1, 3, 5, 4, 2, 6};

    if (isTrionic(nums))
        cout << "true";
    else
        cout << "false";

    return 0;
}