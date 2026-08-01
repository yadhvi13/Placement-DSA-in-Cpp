#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<string> findRepeatedDnaSequences(string s) {
    unordered_set<string> seen;
    unordered_set<string> repeated;

    for (int i = 0; i + 9 < s.size(); i++) {
        string sub = s.substr(i, 10);

        if (seen.count(sub))
            repeated.insert(sub);
        else
            seen.insert(sub);
    }

    return vector<string>(repeated.begin(), repeated.end());
}

int main() {
    string s;
    cin >> s;

    vector<string> ans = findRepeatedDnaSequences(s);

    for (string str : ans)
        cout << str << endl;

    return 0;
}