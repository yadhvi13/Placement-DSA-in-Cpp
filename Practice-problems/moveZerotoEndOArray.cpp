#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the size: ";
    cin >> n;
    
    vector <int> arr(n);
    cout << "enter elements in array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    vector <int> temp;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }

       // Copy non-zero elements back to arr
    int nz = temp.size();
    for(int i=0; i<nz; i++){
        arr[i] = temp[i];
    }
    
    // Fill the rest with zeros
    for(int i=nz; i<n; i++){
        arr[i] = 0;
    }

    cout << "Array after moving zeros to the end: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}