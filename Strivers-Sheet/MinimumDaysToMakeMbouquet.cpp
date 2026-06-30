#include <bits/stdc++.h>
using namespace std;

// Check if it is possible to make m bouquets
bool possible(vector<int>& arr, int day, int m, int k) {
    int count = 0;
    int noOfBouquets = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] <= day) {
            count++;
        } else {
            noOfBouquets += count / k;
            count = 0;
        }
    }

    noOfBouquets += count / k;

    return noOfBouquets >= m;
}

int roseGarden(int n, vector<int>& nums, int k, int m) {

    if ((long long)m * k > n)
        return -1;

    int low = *min_element(nums.begin(), nums.end());
    int high = *max_element(nums.begin(), nums.end());

    int ans = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (possible(nums, mid, m, k)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n = 8;
    vector<int> nums = {7, 7, 7, 7, 13, 11, 12, 7};
    int k = 3;
    int m = 2;

    cout << roseGarden(n, nums, k, m);

    return 0;
}