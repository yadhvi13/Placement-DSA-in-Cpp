#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreater(const vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, -1);
    stack<int> st; // store values (candidates for next greater)

    for (int i = n - 1; i >= 0; --i) {
        // remove all elements <= nums[i]
        while (!st.empty() && st.top() <= nums[i]) st.pop();
        // top (if any) is the next greater
        ans[i] = st.empty() ? -1 : st.top();
        // push current as a candidate for elements to the left
        st.push(nums[i]);
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Example usage
    vector<int> arr = {4, 5, 2, 25};
    auto res = nextGreater(arr);
    cout << "Input: ";
    for (int x : arr) cout << x << " ";
    cout << "\nNext Greater: ";
    for (int x : res) cout << x << " ";
    cout << "\n";

    // Additional test
    vector<int> arr2 = {13, 7, 6, 12};
    auto res2 = nextGreater(arr2);
    cout << "Input: ";
    for (int x : arr2) cout << x << " ";
    cout << "\nNext Greater: ";
    for (int x : res2) cout << x << " ";
    cout << "\n";
    return 0;
}
