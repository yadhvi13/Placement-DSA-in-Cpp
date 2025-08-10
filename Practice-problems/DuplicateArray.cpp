#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size;
    // cout << "enter the elements inside Array: " << endl;
    // cin >> size;
    int arr[6] = {1,2,3,4,5,2};

    int arr[size];
    cout << "Enter " << size << "elements(from 1 to n with one missing): " << endl;
    // for(int i=0; i< size; i++){
    //     cin >> arr[i];
    // }

    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];
    }

    for(int i=1; i<= size+1; i++){
        ans = ans ^ i;
    }

    cout << "duplicate number is: " << ans << endl;
    return 0;
}