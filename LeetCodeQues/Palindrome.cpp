#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int left = 0;
    int right = s.size()-1;

    while(left < right){
        if(s[left] != s[right]){
            cout << "Not a palindrome" << endl;
            return 0;
        }
        else{
            left++;
            right--;
        }
    }
    cout << "Is a palindrome" << endl;
    return 0;
}