#include<iostream>
using namespace std;

int leftRotateArrayByKplaces(int arr[], int k, int n){

    k = k % n;

    while(k--){
        int temp = arr[0];
        for(int i=1; i<n; i++){
            arr[i-1] = arr[i];
        }
        arr[n-1] = temp;
    }
}

int rightRotateArrayByKplaces(int arr[], int k, int n){
    k = k % n;

    while(k--){
        int temp = arr[n-1];
        for(int i=n-1; i>0; i--){
            arr[i] = arr[i-1];
        }
        arr[0] = temp;
    }
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
    
    int k;
    cout << "Enter the number of places to rotate: ";
    cin >> k;

    // LEFT ROTATION
    leftRotateArrayByKplaces(arr, k, n);
    cout << "Left rotated array is: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    // RIGHT ROTATION
    rightRotateArrayByKplaces(arr, k, n);
    cout << "Right rotated array is: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;


}