#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    vector<int> freq(256, 0);
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.length(); right++) {
        freq[s[right]]++;

        // Shrink window if duplicate found
        while (freq[s[right]] > 1) {
            freq[s[left]]--;
            left++;
        }

        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

int main() {
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s);
    return 0;
}
