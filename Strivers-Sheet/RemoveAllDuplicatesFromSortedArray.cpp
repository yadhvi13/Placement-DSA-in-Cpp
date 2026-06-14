#include<iostream>
using namespace std;

int removeDuplicate(int arr[], int n){
    int i=0;
    for(int j=1; j<n; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
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

    int result = removeDuplicate(arr, n);
   cout << "unique elements of an array are: ";
    for(int i=0; i<result; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}