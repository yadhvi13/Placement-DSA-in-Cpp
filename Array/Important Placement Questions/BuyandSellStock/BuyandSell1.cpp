#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int buysell(vector<int> &nums){
     int n = nums.size();
     int maxprofit = 0;
     int minprice = INT_MAX;
     for(int i=0; i<n; i++){
        minprice = min(minprice, nums[i]);
        maxprofit = max(maxprofit, nums[i]-minprice);
     }
     return maxprofit;

}
    
int main(){
    int n;
    cout << "enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter the elem in array: ";
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    cout << buysell(nums) << endl;
    return 0;
}