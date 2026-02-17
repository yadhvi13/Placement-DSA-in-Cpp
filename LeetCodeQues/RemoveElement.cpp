#include <iostream>
using namespace std;

int removeElement(int nums[], int n, int val) {
    int k = 0;  // position to place next valid element

    for (int i = 0; i < n; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;  // number of elements remaining
}

int main() {
    int n, val;

    cout << "Enter size of array: ";
    cin >> n;

    int nums[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter value to remove: ";
    cin >> val;

    int k = removeElement(nums, n, val);

    cout << "Number of elements after removal: " << k << endl;

    cout << "Modified array: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
