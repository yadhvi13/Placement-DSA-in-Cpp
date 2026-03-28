#include <bits/stdc++.h>
using namespace std;

void solve(string str, string output, int i) {
    if (i >= str.length()) {
        cout << output << endl;
        return;
    }

    // exclude
    solve(str, output, i + 1);

    // include
    output.push_back(str[i]);
    solve(str, output, i + 1);
}

int main() {
    string str = "abc";
    string output = "";
    solve(str, output, 0);
}