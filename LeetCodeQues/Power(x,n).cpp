#include<iostream>
using namespace std;

// Compute power(x^n) -- leetcode ques-50

// ----- BINARY EXPONENTIATION ------ O(log n)
// binary form ki power nikalenge

double myPow(double x, int n){
    long binaryForm = n;
    // if power negative hai toh
    if(n < 0){
        x = 1/x;
        binaryForm = -binaryForm;

    }
    double ans = 1.0;

   while(binaryForm > 0){
    if(binaryForm % 2 == 1){
        ans = ans*x;
    }
    x = x*x; // square of x
    binaryForm = binaryForm/2;
   }
   return ans;
}


int main(){
    double x;
    int n;

    cin >> x >> n;
    cout << myPow(x, n);
    return 0;
}


