#include <iostream>
#include <vector>
using namespace std;

// Function to search in a rotated sorted array
int searchInRotatedSortedArray(const vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // If element found
        if (nums[mid] == target)
            return mid;

        // Check which half is sorted
        if (nums[left] <= nums[mid]) {
            // Left half is sorted
            if (target >= nums[left] && target < nums[mid])
                right = mid - 1; // Target in left half
            else
                left = mid + 1;  // Target in right half
        } else {
            // Right half is sorted
            if (target > nums[mid] && target <= nums[right])
                left = mid + 1;  // Target in right half
            else
                right = mid - 1; // Target in left half
        }
    }

    return -1; // Element not found
}

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 6;

    int index = searchInRotatedSortedArray(nums, target);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found in array." << endl;

    return 0;
}
