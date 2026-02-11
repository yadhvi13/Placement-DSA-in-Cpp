#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int totalSum = 0;

    // Step 1: Calculate total sum
    for (int num : nums) {
        totalSum += num;
    }

    int leftSum = 0;

    // Step 2: Traverse array
    for (int i = 0; i < nums.size(); i++) {
        
        int rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum) {
            return i;
        }

        leftSum += nums[i];
    }

    return -1;
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = pivotIndex(nums);

    cout << "Pivot Index: " << result << endl;

    return 0;
}
