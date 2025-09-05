#include <iostream>
#include <string>
using namespace std;

bool ispalindrome( string &str){
    int left = 0;
    int right = str.length() -1;

    while(left < right){
        if(str[left] != str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main(){
   string input;
   cout << "enter the string: ";
   cin >> input;

   if(ispalindrome(input)){
    cout << input << " is a palindrome. " << endl;
   }
   else{
    cout << input << " is not palindrome. "<< endl;
   }
   return 0;
}