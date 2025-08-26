#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "enter the size ";
    cin >> n;


    vector <int> arr(n);
    cout << "enter elements in array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

//if j index is 0    
    int j=-1;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
//if index i is non-zero
    for(int i= j+1; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    
    cout << "Array after moving zeros to the end: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}


// time complexity - O(N)
//space complexity - none, not taking extra space