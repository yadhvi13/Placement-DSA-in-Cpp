#include<iostream>
using namespace std;

int main(){
string s;
cin >> s;

//pre-compute
// As char in arrays has only lower case letter, that why 26 size of array
// int hash[26] = {0};
// for(int i=0; i<s.size(); i++){
//     hash[s[i] - 'a']++;
// }

int hash[256] = {0};
for(int i=0; i<s.size(); i++){
    hash[s[i]]++;
}

int q;
cin >> q;
while(q--){
    char c;
    cin >> c;
    //fetch the hash
    cout << hash[c-'a'] << endl;
}

    return 0;
}