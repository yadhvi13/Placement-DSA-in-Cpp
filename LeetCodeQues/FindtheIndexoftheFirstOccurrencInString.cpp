#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {
    int n = haystack.length();
    int m = needle.length();
    
    if(m == 0) return 0;

    for(int i = 0; i <= n - m; i++) {
        int j = 0;
        while(j < m && haystack[i + j] == needle[j]) {
            j++;
        }
        if(j == m) {
            return i;
        }
    }
    
    return -1;
}

int main() {
    string haystack, needle;
    
    cout << "Enter main string: ";
    getline(cin, haystack);

    cout << "Enter string to find: ";
    getline(cin, needle);

    int index = strStr(haystack, needle);

    cout << "Result: " << index << endl;

    return 0;
}