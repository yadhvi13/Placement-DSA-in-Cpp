#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

// BRUTE FORCE APPROACH
// int main(){
//     int n = 5;
//     int arr[5] = {1,2,3,4,5};
//     int maxSum = INT_MIN;

//     // for starting point
//     for(int start=0; start<n; start++){
//         // for ending point
//         int currSum = 0;
//         for(int end=start; end<n;end++){
//             currSum = currSum + arr[end];
//             maxSum = max(currSum, maxSum);
//         }
//         cout << "maximum Subarray sum = " << maxSum << endl;
//     }
//     return maxSum;
// }



// KADANE'S ALGORITHM
// -- if currentSum < 0 hai, toh use reset kr dena hai 
// -- bade negative ko answer me add krna hi nhi hai 
// -- currentSum ko reset, maxSum nikalne ke baad hi krna hai hmesa, taki phle pta lg paye ki value negative hai ya nhi, if negative hai tbhi value zero set hogi

int main(){
    int n = 7;
    int arr[7] = {3,-4,5,4,-1,7,-8}

    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i=0; i<n;i++){
        currSum = currSum + arr[i];
        maxSum = max(currSum, maxSum);

        // edge case situation
        if(currSum < 0){
            // reset value of currentSum again
            currSum = 0;
        }
    }
    cout << "maximum Subarray sum = " << maxSum << endl;
    return 0;
}