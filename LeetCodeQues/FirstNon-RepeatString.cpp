#include <iostream>
#include <string>
#include <vector>
using namespace std;

string firstNonRepeating(string &s){
    string ans;
    int n = s.size();
    
    vector<int> freq(26, 0);

    for (int i = 0; i < n; i++){
        
        freq[s[i]-'a']++;
        bool found = false;
        
        for (int j = 0; j <= i; j++){
            if (freq[s[j]-'a'] == 1){
                ans.push_back(s[j]);
                found = true;
                break;
            }
        }
        
        
        if (!found){
            ans.push_back('#');
        }
    }

    return ans;
}

int main() {
    string s = "aabc";
    string ans = firstNonRepeating(s);
    cout << ans << endl;
    return 0;
}