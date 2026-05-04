#include <bits/stdc++.h>
using namespace std;

int longestStrChain(vector<string>& words) {
    unordered_map<string, int> dp;

    sort(words.begin(), words.end(), [](string &a, string &b) {
        return a.size() < b.size();
    });

    int ans = 1;

    for (string word : words) {
        dp[word] = 1;

        for (int i = 0; i < word.size(); i++) {
            string prev = word.substr(0, i) + word.substr(i + 1);

            if (dp.count(prev)) {
                dp[word] = max(dp[word], dp[prev] + 1);
            }
        }

        ans = max(ans, dp[word]);
    }

    return ans;
}

int main() {
    vector<string> words = {"a","b","ba","bca","bda","bdca"};
    cout << longestStrChain(words) << endl; // Output: 4
    return 0;
}