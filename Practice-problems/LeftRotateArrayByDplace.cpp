#include<iostream>
using namespace std;   
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int d;
    for(int i=d;i<n;i++){
        arr[i-d] = arr[i];
    }

    //put back temp
    int k;
    int j=0;
    for(int i=n-k; i<n; i++){
       arr[i] = temp[j];
       j++
    }
}
