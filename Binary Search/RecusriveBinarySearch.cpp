#include<iostream>
#include<vector>
using namespace std;

int recursiveBS(vector<int> arr, int target, int start, int end){
    if(start <= end){
        int mid = start+(end-start)/2;

        if(target > arr[mid]){
            return recursiveBS(arr,target,mid+1,end);
        }
        else if(target < arr[mid]){
            return recursiveBS(arr,target,start,mid-1);
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr={-1,0,3,4,5,8};
    int target = 3;

    cout << recursiveBS(arr,target);
    return 0;
}