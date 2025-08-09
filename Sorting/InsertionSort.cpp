#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        int j=1;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
        }
    }
}

int main(){
    int n;
    cout << "Enter number of element: " ;
    cin >> n;

    int arr[n];
    cout << "Enter the Elements in Array: " ;
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    //function calling
    insertion_sort(arr,n);

    cout << "sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}