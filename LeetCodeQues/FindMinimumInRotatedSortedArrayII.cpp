#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int>& nums) {
    int low = 0;
    int high = nums.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] > nums[high]) {
            low = mid + 1;
        }
        else if (nums[mid] < nums[high]) {
            high = mid;
        }
        else {
            high--;
        }
    }

    return nums[low];
}

int main() {
    vector<int> nums = {2, 2, 2, 0, 1};

    cout << "Minimum element is: " << findMin(nums);

    return 0;
}