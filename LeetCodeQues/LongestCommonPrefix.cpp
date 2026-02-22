#include<iostream>
using namespace std;

string longestCommonPrefix(string str[], int n) {
    if (n == 0) return "";
    string prefix = str[0];

    for (int i = 1; i < n; i++) {
        while (str[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty()) return "";
        }
    }

    return prefix;
}

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    string str[n];
    cout << "Enter strings:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    string result = longestCommonPrefix(str, n);
    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}