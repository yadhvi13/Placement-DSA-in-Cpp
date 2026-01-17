#include<iostream>
// #include<vector>
using namespace std;

void bubblesort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[5] = {3,1,6,4,0};
    int n;

    // calling function
    bubblesort(arr, n);

    for(int i=0; i<n; i++){ 
        cout << arr[i] << " "; 
    }
}