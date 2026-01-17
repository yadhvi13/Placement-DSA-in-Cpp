#include<iostream>
#include<vector>
using namespace std;


int binarySearch(vector<int> &arr, int target){
    int n = arr.size();
    int start = 0;
    int end = n-1;
    while(start <= end){
        int mid = (start+end)/2;
        if(target > arr[mid]){
            start = mid+1;
        }
        else if(target < arr[mid]){
            end = mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {-1,0,3,4,5,9,12};
    int target = 4;

    cout << binarySearch(arr,target);

    return 0;
}