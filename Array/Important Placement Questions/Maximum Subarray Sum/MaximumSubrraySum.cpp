#include<vector>
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

long long MaximumSubarray(int n, vector<int> &nums){
     long long sum = 0;
     long long maxi = LLONG_MIN;

     for(int i=0; i<n; i++){
        sum = sum + nums[i];
        if(sum > maxi){
            maxi = sum;
        }
        if(sum < 0){
            sum = 0;
        }
     }
     return maxi;
}

int main(){
    int n;
    cout << "enter the size: " << endl;
    cin >> n;

    vector<int> nums(n);
    cout << "enter" << n << " elements: ";
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    cout << MaximumSubarray(n, nums) << endl;
    return 0;

}