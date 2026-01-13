#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// ------- BRUTE FORCE-------

// int main(){
//     int n=5;
//     int arr[5] = {1,2,2,1,1};

//     for(int i=0; i<n; i++){
//         int freq = 0;

//         for(int elem=0; elem <n; elem++){
//             if(arr[elem] == arr[i]){
//                 freq++;
//             }
//         }
//         if(freq > n/2){
//             cout << "majority element is = " << arr[i] << endl;
//             return 0;    
//         }
//     }
//     cout << "No majority element found" << endl;
//     return 0;
// }


// ------ OPTIMISED APPROACH --------
// ----- using sorted array


int majorityElem(vector<int>& nums){
    int n = nums.size();

    // sort array
    sort(nums.begin(), nums.end());

    // frequency count
    int freq = 1 , ans = nums[0];
    for(int i=1; i<n; i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }
        else{
            freq = 1;
            ans = nums[i];
        }

        if(freq > n/2){
            return ans;
        }
    }
    return ans;  // majority element always exists
}

int main(){
    int n;
    cout << "enter the value of n: " ;
    cin >> n;

    vector<int> nums(n);
    cout << "enter the elements: ";
    for(int i=0; i<n;i++){
        cin >> nums[i];
    }

    cout << "majority element: " << majorityElem(nums) << endl;
return 0;
}