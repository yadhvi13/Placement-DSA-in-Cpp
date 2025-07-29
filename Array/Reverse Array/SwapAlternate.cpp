#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

void swapAlternate(int arr[], int size){
      for(int i=0; i< size; i=i+2){
        swap(arr[i], arr[i+1]);
      }
}

int main(){

    int arr[6] = {1,5,3,7,8,6};
    swapAlternate(arr,6);
    printArray(arr,6);

    cout << endl;

    return 0;
}