#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int index, vector<int>& candidates, int target, 
               vector<int>& path, vector<vector<int>>& ans) {

        // Base case
        if (target == 0) {
            ans.push_back(path);
            return;
        }

        if (index >= candidates.size() || target < 0) {
            return;
        }

        // PICK (same index because reuse allowed)
        path.push_back(candidates[index]);
        solve(index, candidates, target - candidates[index], path, ans);
        path.pop_back();

        // NOT PICK (move to next index)
        solve(index + 1, candidates, target, path, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> path;

        solve(0, candidates, target, path, ans);
        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> result = obj.combinationSum(candidates, target);

    for (auto &vec : result) {
        cout << "[ ";
        for (auto &num : vec) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}