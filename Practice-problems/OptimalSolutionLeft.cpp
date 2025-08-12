#include<iostream>
#include<algorithm> //for reverse
using namespace std;

void leftrotate(int arr[], int n, int d){
   reverse(arr,arr+d);
   reverse(arr+d, arr+n);
   reverse(arr, arr+n);
}

int main(){
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;

    int arr[n];
    cout << "enter element in array: " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int d;
    cout << "Enter the value by which you want to shift: " << endl;
    cin >> d;
   
    leftrotate(arr,n,d);
    for(int i=0; i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}