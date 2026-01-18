// leetcode problem no- 852
// peak index in mountain array

#include<iostream>
#include<vector>
using namespace std;

bool validMountainArray(vector<int> &arr){
    int n = arr.size();

    int i=0; 
    // walking up in increasing order
    while(i+1<n && arr[i]<arr[i+1]){
        i++;
    }

    // ist and last element shouldnt be peak
    if(i==0 || i==n-1) return false;

    // walking down in decreasing order
    while(i+1<n && arr[i]> arr[i+1]){
        i++;
    }
    return i==n-1;
} 

int main(){
    vector<int> arr= {0,3,8,9,5,2};
    cout << validMountainArray(arr);

    return 0;
}
