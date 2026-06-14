#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i]>= arr[i-1]){
            
        }
        else{
            return false;
        }
    }
    return true;
}


int main(){
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of an array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int result = isSorted(arr, n);
    cout << "Is the array sorted? " << result << endl;
}