#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int n;
    vector<int> suffix;
    vector<vector<int>> dp;

    int solve(int i, int M) {
        if (i >= n)
            return 0;

        if (dp[i][M] != -1)
            return dp[i][M];

        // If we can take all remaining piles
        if (2 * M >= n - i)
            return dp[i][M] = suffix[i];

        int ans = 0;

        // Try taking X piles
        for (int X = 1; X <= 2 * M; X++) {

            int opponent = solve(i + X, max(M, X));

            // Total remaining stones - opponent's maximum
            int current = suffix[i] - opponent;

            ans = max(ans, current);
        }

        return dp[i][M] = ans;
    }

    int stoneGameII(vector<int>& piles) {
        n = piles.size();

        // Calculate suffix sums
        suffix.assign(n + 1, 0);

        for (int i = n - 1; i >= 0; i--) {
            suffix[i] = suffix[i + 1] + piles[i];
        }

        // DP table
        dp.assign(n, vector<int>(n + 1, -1));

        return solve(0, 1);
    }
};

int main() {

    Solution obj;

    // Test Case 1
    vector<int> piles1 = {2, 7, 9, 4, 4};

    cout << "Test Case 1: ";
    cout << obj.stoneGameII(piles1) << endl;

    // Test Case 2
    vector<int> piles2 = {1, 2, 3, 4, 5, 100};

    Solution obj2;

    cout << "Test Case 2: ";
    cout << obj2.stoneGameII(piles2) << endl;

    return 0;
}