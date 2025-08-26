#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "enter the size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "enter the elements in array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int num;
    cout << "enter the elem you want to search: ";
    cin >> num; 



    for(int i=0; i<n; i++){
        if(arr[i] == num){
            return i;
        }
        return -1;
    }
}