#include <bits/stdc++.h>
using namespace std;

int findShortestSubArray(vector<int>& nums) {
    unordered_map<int, int> freq, first, last;

    for (int i = 0; i < nums.size(); i++) {
        if (first.find(nums[i]) == first.end()) {
            first[nums[i]] = i;
        }
        last[nums[i]] = i;
        freq[nums[i]]++;
    }

    int degree = 0;
    for (auto &p : freq) {
        degree = max(degree, p.second);
    }

    int minLen = nums.size();
    for (auto &p : freq) {
        if (p.second == degree) {
            int len = last[p.first] - first[p.first] + 1;
            minLen = min(minLen, len);
        }
    }

    return minLen;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Output: " << findShortestSubArray(nums) << endl;

    return 0;
}