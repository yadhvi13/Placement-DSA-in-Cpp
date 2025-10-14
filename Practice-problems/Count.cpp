#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;

    int freq[26] = {0};

    for(char ch: s){
        freq[ch-'a']++;
    }

    for(int i=0; i<26; i++){
        if(freq[i] > 0){
            cout << char('a'+ i) << "-" << freq[i] << " ";
        }
    }
    return 0;
}

// #include <iostream>
// #include <map>
// #include <string>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;

    
//     map<char, int> mp;

//     // Count frequency of each character
//     for (char c : s) {
//         mp[c]++;
//     }

//     // Print each character and its count
//     for (const auto &it : mp) {
//         cout << it.first << " " << it.second << endl;
//     }

//     return 0;
// }
