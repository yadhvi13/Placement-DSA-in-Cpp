#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> findAnagrams(string s, string p) {
    vector<int> result;
    if (s.size() < p.size()) return result;

    vector<int> countP(26, 0), countS(26, 0);

    // Count frequency of characters in p
    for (char c : p) {
        countP[c - 'a']++;
    }

    int windowSize = p.size();

    // First window
    for (int i = 0; i < windowSize; i++) {
        countS[s[i] - 'a']++;
    }

    if (countS == countP) {
        result.push_back(0);
    }

    // Sliding the window
    for (int i = windowSize; i < s.size(); i++) {
        // Add new char
        countS[s[i] - 'a']++;
        // Remove old char
        countS[s[i - windowSize] - 'a']--;

        if (countS == countP) {
            result.push_back(i - windowSize + 1);
        }
    }

    return result;
}

int main() {
    string s, p;
    cout << "Enter the main string: ";
    cin >> s;
    cout << "Enter the pattern string: ";
    cin >> p;

    vector<int> indices = findAnagrams(s, p);

    cout << "Anagram indices: ";
    for (int index : indices) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
