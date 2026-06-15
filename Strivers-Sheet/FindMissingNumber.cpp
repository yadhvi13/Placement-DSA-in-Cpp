#include <iostream>
#include <vector>
using namespace std;


int missingNumber(vector<int>& nums){
    int n = nums.size();

    int hash[n+1] = {0};
    for(int i=0; i<n; i++){
        hash[nums[i]] = 1;
    }
    for(int i=0; i<n; i++){
        if(hash[i] == 0){
            return i;
        }
    }
    return -1;
}


int main() {
    vector<int> nums = {1,3,4,5,6};

    cout << "Missing Number: " << missingNumber(nums) << endl;

    return 0;
}