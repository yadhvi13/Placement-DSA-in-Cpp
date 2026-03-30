#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to check palindrome
    bool isPalindrome(string &s, int start, int end) {
        while (start <= end) {
            if (s[start] != s[end]) return false;
            start++;
            end--;
        }
        return true;
    }

    // Backtracking function
    void solve(int index, string &s, vector<string> &path, vector<vector<string>> &ans) {
        // Base case
        if (index == s.size()) {
            ans.push_back(path);
            return;
        }

        // Try all partitions
        for (int i = index; i < s.size(); i++) {
            if (isPalindrome(s, index, i)) {
                path.push_back(s.substr(index, i - index + 1));

                solve(i + 1, s, path, ans);

                // Backtrack
                path.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;

        solve(0, s, path, ans);
        return ans;
    }
};

int main() {
    Solution obj;
    string s = "aab";

    vector<vector<string>> result = obj.partition(s);

    for (auto &vec : result) {
        for (auto &str : vec) {
            cout << str << " ";
        }
        cout << endl;
    }

    return 0;
}