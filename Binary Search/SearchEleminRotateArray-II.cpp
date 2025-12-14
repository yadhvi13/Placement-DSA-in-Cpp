// search in rotated manner in Sorted array, where the elements could be duplicate in an array
// arr[] = [7,8,1,2,3,3,3,4,5,6] target = 3

#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int>& arr, int x) {
    int l = 0, r = arr.size() - 1;
    int ans = -1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x) {
            ans = mid;
            r = mid - 1;   // search left side
        } 
        else if (arr[mid] < x) {
            l = mid + 1;
        } 
        else {
            r = mid - 1;
        }
    }
    return ans;
}

int lastOccurrence(vector<int>& arr, int x) {
    int l = 0, r = arr.size() - 1;
    int ans = -1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x) {
            ans = mid;
            l = mid + 1;   // search right side
        } 
        else if (arr[mid] < x) {
            l = mid + 1;
        } 
        else {
            r = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5};
    int x = 2;

    int first = firstOccurrence(arr, x);
    int last = lastOccurrence(arr, x);

    if (first == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found" << endl;
        cout << "First Occurrence Index: " << first << endl;
        cout << "Last Occurrence Index: " << last << endl;
        cout << "Total Count: " << last - first + 1 << endl;
    }

    return 0;
}
