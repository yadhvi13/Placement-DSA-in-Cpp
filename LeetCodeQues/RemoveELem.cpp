#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int k = 0;  // pointer for valid elements
    
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }
    
    return k;
}

int main() {
    int n, val;
    
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter value to remove: ";
    cin >> val;

    int newLength = removeElement(nums, val);

    cout << "New length: " << newLength << endl;
    cout << "Updated array: ";
    
    for(int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}