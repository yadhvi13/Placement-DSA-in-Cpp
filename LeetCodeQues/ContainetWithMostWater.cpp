#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

// return max amount of water that can be contained
// container ko bnane ke liye 2 lines chhiye left and right

// --------- BRUTE FORCE APPROACH ---------
//  but this approach will give TLE for large inputs
//  O(n^2) time complexity

int main(){
    int n;
    int arr[9] = {1,8,6,2,5,4,8,3,7};

    int maxArea = 0;

    // i = left boundary
    // j = right boundary
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int width = j-i;
            int height = min(arr[i], arr[j]);
            int area = width * height;
            maxArea = max(maxArea, area);
        }
    }
    return maxArea;
}


//  ------- OPTIMIZED APPROACH ---------
// mimium height will decide the water level
// we will use 2 pointers left and right
// we will move the pointer which has the smaller height
// two pointer Approach
 
int main(){
    int n;
    int arr[9] = {1,8,6,2,5,4,8,3,7};
    int maxArea = 0;

    int lp = 0;
    int rp = n-1;
    while(lp < rp){
        int w = rp-lp;
        int h = min(arr[lp], arr[rp]);
        int currArea = w * h;
        maxArea = max(maxArea, currArea);

        if(arr[lp] < arr[rp]){
            lp++;
        }
        else{
            rp--;
        }
    }
return maxArea;
}