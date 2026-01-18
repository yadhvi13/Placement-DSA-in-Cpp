// leetcode question no - 540
// single element in sorted array

#include<iostream>
#include<vector>
using namespace std;

int singleElementInArray(vector<int>& array){
    int n = array.size();
    int start = 0;
    int end = n-1;
    int mid;

    // if element in array is single only
    if(n == 1) return array[0];

    // edge cases
    // if unique element found in ist place
    if(mid == 0 && array[0]!= array[1]) return array[mid];

    // if unique element found in last place
    if(array[mid] == n-1 && array[n-1]!=array[n-2]) return array[mid];

    while(start < end){
         mid = start+(end-start)/2;

        if(array[mid-1]!= array[mid] && array[mid]!=array[mid+1]){
            return array[mid];
        }

        if(mid%2 == 0) { //if the array is even from left and right side
            if(array[mid-1] == array[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }

        else{ // if the array is odd from left and right side
            if(array[mid-1] == array[mid]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }    
        }
    }
return -1;
}

int main(){
    vector<int> array={1,1,2,3,3,4,4,8,8};
    cout << singleElementInArray(array);
    return 0;
}