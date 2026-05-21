#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>
using namespace std;

class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string> prefixes;

        // Store all prefixes from arr1
        for (int num : arr1) {
            string s = to_string(num);
            string pref = "";

            for (char c : s) {
                pref += c;
                prefixes.insert(pref);
            }
        }

        int ans = 0;

        // Check prefixes in arr2
        for (int num : arr2) {
            string s = to_string(num);
            string pref = "";

            for (char c : s) {
                pref += c;

                if (prefixes.count(pref)) {
                    ans = max(ans, (int)pref.size());
                }
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> arr1 = {1, 10, 100};
    vector<int> arr2 = {1000};

    int result = obj.longestCommonPrefix(arr1, arr2);

    cout << "Longest Common Prefix Length: " << result << endl;

    return 0;
}