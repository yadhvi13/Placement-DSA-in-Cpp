#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word;
        stringstream ss(s);

        while (ss >> word) {
            words.push_back(word);
        }

        if (words.size() != pattern.size())
            return false;

        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;

        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string w = words[i];

            if (charToWord.count(c)) {
                if (charToWord[c] != w)
                    return false;
            } else {
                charToWord[c] = w;
            }

            if (wordToChar.count(w)) {
                if (wordToChar[w] != c)
                    return false;
            } else {
                wordToChar[w] = c;
            }
        }

        return true;
    }
};

int main() {
    Solution obj;

    string pattern = "abba";
    string s = "dog cat cat dog";

    if (obj.wordPattern(pattern, s))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}