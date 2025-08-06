#include<iostream>
using namespace std;
//declaring globally
int hashh[1000000] = {0};

int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
//pre-compute , need hash
// int hash[13] = {0};

for(int i=0; i<n; i++){
    hashh[arr[i]] += 1;
}


    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
//fetch method
cout << hashh [number] << endl;
    }
    return 0;
}