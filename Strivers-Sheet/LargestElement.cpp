// QUESTION: Write a C++ program to find the largest element in an array.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of an array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int largest = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "largest element of an array is: " << largest << endl;
}
