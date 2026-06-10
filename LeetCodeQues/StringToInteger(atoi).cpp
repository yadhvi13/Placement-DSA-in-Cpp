#include <iostream>
#include <string>
#include <cctype>
#include <climits>
using namespace std;

int myAtoi(string s) {
    int i = 0;
    int sign = 1;
    long long ans = 0;
    int n = s.length();

    // Skip leading spaces
    while (i < n && s[i] == ' ')
        i++;

    // Check sign
    if (i < n && (s[i] == '+' || s[i] == '-')) {
        if (s[i] == '-')
            sign = -1;
        i++;
    }

    // Convert digits
    while (i < n && isdigit(s[i])) {
        ans = ans * 10 + (s[i] - '0');

        // Handle overflow
        if (sign * ans > INT_MAX)
            return INT_MAX;

        if (sign * ans < INT_MIN)
            return INT_MIN;

        i++;
    }

    return (int)(sign * ans);
}

int main() {
    string s;

    cout << "Enter string: ";
    getline(cin, s);

    cout << "Result: " << myAtoi(s) << endl;

    return 0;
}