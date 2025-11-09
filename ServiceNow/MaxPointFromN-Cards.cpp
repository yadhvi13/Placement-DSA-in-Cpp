#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int Lsum = 0, Rsum = 0;

        // Take first k cards from the left
        for (int i = 0; i < k; i++) {
            Lsum += cardPoints[i];
        }

        int maxSum = Lsum;
        int Rindex = n - 1;

        // Shift cards from left to right one by one
        for (int i = k - 1; i >= 0; i--) {
            Lsum -= cardPoints[i];          // remove one from left
            Rsum += cardPoints[Rindex];     // add one from right
            Rindex--;                       // move right index leftwards
            maxSum = max(maxSum, Lsum + Rsum);
        }

        return maxSum;
    }
};

int main() {
    Solution obj;
    
    int n, k;
    cout << "Enter number of cards: ";
    cin >> n;
    
    vector<int> cardPoints(n);
    cout << "Enter card points: ";
    for (int i = 0; i < n; i++) cin >> cardPoints[i];
    
    cout << "Enter k: ";
    cin >> k;

    int result = obj.maxScore(cardPoints, k);
    cout << "\nMaximum points you can obtain = " << result << endl;

    return 0;
}
