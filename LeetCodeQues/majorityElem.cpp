#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=5;
    int arr[5] = {1,2,2,1,1};

    for(int i=0; i<n; i++){
        int freq = 0;

        for(int elem=0; elem <n; elem++){
            if(arr[elem] == arr[i]){
                freq++;
            }
        }
        if(freq > n/2){
            cout << "majority element is = " << arr[i] << endl;
            return 0;    
        }
    }
    cout << "No majority element found" << endl;
    return 0;
}
