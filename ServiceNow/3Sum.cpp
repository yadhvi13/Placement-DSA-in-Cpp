#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<vector <int>> triplet(int n, vector<int> &nums){
    // vector<vector<int>> ans;
    // storing vector triplets in form of set

//BRUTE FORCE APPROACH 

    // set<vector<int>> st;
    // for(int i=0; i<n;i++){
    //     for(int j=i+1;i<n;j++){
    //         for(int k=j+1;k<n;k++){
    //             if(nums[i]+nums[j]+nums[k] == 0){
    //                 // it is to make sure that eveytime element is unique
    //                vector<int> temp = {nums[i], nums[j], nums[k]};
    //                sort(temp.begin(), temp.end());
    //                st.insert(temp);
    //             }
    //         }
    //     }
    // }
    // vector<vector<int>> ans(st.begin(), st.end());
    // return ans;
}