#include<iostream>
using namespace std;

int secondLargest(int arr[], int n){
    int largest = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    int secondLargest = -1;
    for(int i=0; i<n; i++){
        if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
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

    int result = secondLargest(arr, n);
    cout << "The second largest element is: " << result << endl;
}