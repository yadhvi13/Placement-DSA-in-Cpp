// Return pair in sorted array with target sum;
#include<iostream>
#include<vector>
using namespace std;


// ------ BRUTE FORCE METHOD -------

// vector<int> pairSum(vector<int> arr, int target){
//     vector<int> ans;
//     int n = arr.size();

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i] + arr[j] == target){
//                 // returing index in vector
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }



// --------- OPTIMISED FORCE -------
vector<int> pairSum(vector<int> arr, int target){
    vector<int> ans;
    int n = arr.size();
    int i=0;
    int j=n-1;
    int pairsum;

    while(i<j){
        pairsum = arr[i]+arr[j];
        if(pairsum > target){
            j--;
        }
        else if(pairsum < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
return ans;
}

int main(){
    vector<int> arr = {2,7,11,15};
    int target = 26;

    vector<int> ans = pairSum(arr,target);
    cout << ans[0] << ", " << ans[1] << endl;
    return 0;
}