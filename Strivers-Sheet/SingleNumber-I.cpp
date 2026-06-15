#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums){
    int XOR=0;
    for(int i=0; i<nums.size(); i++){
        XOR = XOR ^ nums[i];
    }
    return XOR;
}



int main(){
    vector<int> nums = {1,1,2,3,3,4,4};

    cout << "single number present in an array is: " << singleNumber(nums) << endl;
}