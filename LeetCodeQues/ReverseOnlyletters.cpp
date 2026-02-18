#include <iostream>
#include <string>
using namespace std;

bool isLetter(char c) {
    return ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') );
}

string reverseOnlyLetters(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (!isLetter(s[left])) {
            left++;
        }
        else if (!isLetter(s[right])) {
            right--;
        }
        else {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }

    return s;
}

int main() {
    string s;

    cout << "Enter string: ";
    getline(cin, s);

    string result = reverseOnlyLetters(s);

    cout << "Output: " << result << endl;

    return 0;
}
