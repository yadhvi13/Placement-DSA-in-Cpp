#include<iostream>
#include <string>
#include<algorithm>
using namespace std;

bool checkString(string s1, string s2){
   if(s1.length() != s2.length()){
    return false;
   }
   sort(s1.begin(), s1.end());
   sort(s2.begin(), s2.end());
   return (s1 == s2); //return comparison result
}

int main(){
    string s1,s2;
    cin >> s1 >> s2;

    if(checkString(s1,s2)){
        cout << "yes";
    }
    else{
        cout << "No";
    }
    return 0;
}