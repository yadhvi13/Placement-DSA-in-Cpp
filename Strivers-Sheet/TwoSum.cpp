#include<iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    int n = nums.size();

    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        int a = target - nums[i];

        if(mp.find(a) != mp.end()){
            return {mp[a], i};
        }
        mp[nums[i]] = i;
    }
    return {};
}

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = twoSum(nums, target);

    cout << "Indices: ";
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}