#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    unordered_map<int,int> mp;

    //count frequency of each element
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    //iteration
    for(auto it: mp){
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}