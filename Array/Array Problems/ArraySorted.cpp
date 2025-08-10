#include<iostream>
using namespace std;

bool checkSortedarray(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i] >= arr[i-1]){
           
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout << "enter the size of array: " <<endl;
    cin >> n;

    int arr[n];
    cout << "Enter the element in array: " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    if(checkSortedarray(arr, n)){
        cout << "yes the array is sorted" << endl;
    }
    else{
        cout << "Array is not sorted";
    }
    return 0;
}