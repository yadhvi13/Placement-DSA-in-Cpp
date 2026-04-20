#include <bits/stdc++.h>
using namespace std;

bool checkPossibility(vector<int>& nums) {
    int count = 0;

    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            count++;
            if (count > 1) return false;

            if (i > 0 && nums[i - 1] > nums[i + 1]) {
                nums[i + 1] = nums[i];
            } else {
                nums[i] = nums[i + 1];
            }
        }
    }

    return true;
}

int main() {
    vector<int> nums = {4, 2, 3};

    if (checkPossibility(nums))
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}