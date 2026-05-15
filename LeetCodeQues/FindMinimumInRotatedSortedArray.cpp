#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> nums = {4,5,6,7,0,1,2};
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int low = 0;
    int high = nums.size() - 1;

    while(low < high) {
        int mid = low + (high - low) / 2;

        if(nums[mid] > nums[high])
            low = mid + 1;
        else
            high = mid;
    }

    cout << "Minimum element in the rotated sorted array is: " << nums[low];

    return 0;
}