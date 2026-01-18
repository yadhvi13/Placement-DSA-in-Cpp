// leetcode problem no- 852
// peak index in mountain array

#include<iostream>
#include<vector>
using namespace std;

// telling whether array is mountain or not

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

// returning peak index in mountain array
int mountainArray(vector<int>& array){
    int n = array.size();
    int i=0;

// Step 1: walk up (strictly increasing)
    while(i+1<n && array[i]<array[i+1]){
        i++;
    }
// Peak can't be first or last
    if(i==0 || i==n-1) return false;

    int peak = i;

// Step 2: walk down (strictly decreasing)
    while(i+1<n && array[i]>array[i+1]){
        i++;
    }
// If we reached the end → valid mountain
    if(i==n-1){
        return peak;
    }
    else{
        return -1;
    }
}

int main(){
    vector<int> arr= {0,3,8,9,5,2};
    vector<int> array= {0,3,8,9,5,2};
    cout << "Mountain Array is: " << validMountainArray(arr) << endl;
    cout << "Peak Element of Mountain Array is: " << mountainArray(array) << endl;
    return 0;
}
