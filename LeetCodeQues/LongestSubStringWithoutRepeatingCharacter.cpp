#include <iostream>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> st;
    int left = 0;
    int maxLength = 0;

    for(int right = 0; right < s.length(); right++) {

        while(st.count(s[right])) {
            st.erase(s[left]);
            left++;
        }

        st.insert(s[right]);
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() {
    string s;
    
    cout << "Enter the string: ";
    cin >> s;

    int result = lengthOfLongestSubstring(s);

    cout << "Length of longest substring without repeating characters: " 
         << result << endl;

    return 0;
}