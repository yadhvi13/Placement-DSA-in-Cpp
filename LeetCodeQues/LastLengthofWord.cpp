#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) {
    int i = s.length() - 1;
    int length = 0;

    // Step 1: Skip trailing spaces
    while(i >= 0 && s[i] == ' ') {
        i--;
    }

    // Step 2: Count characters of last word
    while(i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}

int main() {
    string s;

    cout << "Enter the string: ";
    getline(cin, s);   // takes full line input including spaces

    int result = lengthOfLastWord(s);

    cout << "Length of last word: " << result << endl;

    return 0;
}