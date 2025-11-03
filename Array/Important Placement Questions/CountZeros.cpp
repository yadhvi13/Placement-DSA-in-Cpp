#include<iostream>
using namespace std;

int countzeros(int arr[], int n){
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == 1){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return n - low;
}

int main(){
    int arr[] = {1,1,1,0,0,0,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "count of zeros is: " << countzeros(arr,n);
    return 0;
}