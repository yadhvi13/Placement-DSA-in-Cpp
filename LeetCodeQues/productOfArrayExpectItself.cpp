#include<iostream>
#include<vector>
using namespace std;
// Product of Array Except Itself -- leetcode ques-238
// not using division operator

// ------ BRUTE FORCE APPROACH ------- O(n^2)  TLE
int main(){
    int n;
    int arr[4] = {1,2,3,4};

    vector<int> ans;
    for(int i=0; i<n; i++){
        int product = 1;
        for(int j=0; j<n; j++){
            if(i != j){
                product = product*arr[j];
            }
        }
        ans[i] = product;
    }
return 0;
}


