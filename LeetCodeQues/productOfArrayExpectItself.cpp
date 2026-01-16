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


// ------- OPTIMIZED APPROACH ------- O(n) time and O(n) space
int main(){
    int n;
    int arr[4] = {1,2,3,4};
    vector<int> prefix;
    // left and right product of each element
    prefix[0] = 1;
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1]*arr[i-1];
    }

    // calculate suffix array for elem
    vector<int> suffix;
    // suffix[n-1] = 1;
    for(int i=n-2; i>=0; i--){
        suffix[i] = suffix[i+1] * arr[i+1];
    }

    // calculate ans array
    vector<int> ans;
    for(int i=0; i<n; i++){
        ans[i] = prefix[i] * suffix[i];
    }
return 0;
}

// ------- OPTIMIZED APPROACH ------- O(n) time and O(1) space
class Solution {
public:
vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        // vector<int> prefix(n,1);
        // vector<int> suffix(n,1);

        // prefix in ans
        for(int i=1; i<n; i++){
            ans[i] = ans[i-1]*nums[i-1];
        }

        // suffix -- reverse loop
        int suffix = 1;
        for(int i=n-2; i>=0; i--){
            suffix = suffix * nums[i+1];
            ans[i] = ans[i]*suffix;
        }

        return ans;
    }
};