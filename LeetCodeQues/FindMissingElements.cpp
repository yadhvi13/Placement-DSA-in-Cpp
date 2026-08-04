#include <iostream>
#include <vector>
#include <unordered_set>
#include <climits>
using namespace std;

vector<int> findMissingElements(vector<int>& nums) {
    int mn = INT_MAX;
    int mx = INT_MIN;

    unordered_set<int> st;

    for (int x : nums) {
        mn = min(mn, x);
        mx = max(mx, x);
        st.insert(x);
    }

    vector<int> ans;

    for (int i = mn + 1; i < mx; i++) {
        if (st.find(i) == st.end()) {
            ans.push_back(i);
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {1, 4, 2, 5};

    vector<int> ans = findMissingElements(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}