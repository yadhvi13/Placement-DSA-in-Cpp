#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char c : s) {
        // If opening bracket, push to stack
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        else {
            // If stack is empty, invalid
            if (st.empty()) return false;

            // Check matching
            if ((c == ')' && st.top() != '(') ||
                (c == '}' && st.top() != '{') ||
                (c == ']' && st.top() != '[')) {
                return false;
            }

            st.pop();
        }
    }

    // Stack should be empty if valid
    return st.empty();
}

int main() {
    string s;

    cout << "Enter parentheses string: ";
    cin >> s;

    if (isValid(s))
        cout << "Valid Parentheses ✅" << endl;
    else
        cout << "Invalid Parentheses ❌" << endl;

    return 0;
}
