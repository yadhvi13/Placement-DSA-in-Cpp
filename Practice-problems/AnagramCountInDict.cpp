#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; 
    cin >> n;
    unordered_map<string,int> mp;
    
    // Store frequency of sorted word forms
    for(int i=0;i<n;i++){
        string w;
        cin >> w;
        sort(w.begin(), w.end());
        mp[w]++;
    }

    //for queries
    int q;
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        cout << mp[s] << "\n";
   } 
     for(auto it: mp){
        cout << it.first << "->" << it.second << "\n";
}
return 0;
}
