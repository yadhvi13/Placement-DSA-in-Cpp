#include<iostream>
using namespace std;

int main(){
    int size;
    int arr[size];
    cout << "enter the elements inside Array: " << endl;

    int ans =0;
    for(int i=0; i< size; i++){
        ans = ans ^ arr[i];
    }
    for(int i=1; i<size; i++){
        ans = ans ^ i;
    }
    return ans;
}