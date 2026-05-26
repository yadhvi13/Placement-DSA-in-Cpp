#include <iostream>
#include <unordered_set>
using namespace std;

int numberOfSpecialChars(string word) {
    unordered_set<char> lower, upper;

    // Store lowercase and uppercase letters
    for(char ch : word) {
        if(islower(ch))
            lower.insert(ch);
        else if(isupper(ch))
            upper.insert(ch);
    }

    int count = 0;

    // Check matching uppercase letters
    for(char ch : lower) {
        if(upper.count(toupper(ch)))
            count++;
    }

    return count;
}

int main() {
    string word;

    cout << "Enter string: ";
    cin >> word;

    int ans = numberOfSpecialChars(word);

    cout << "Number of special characters: " << ans;

    return 0;
}