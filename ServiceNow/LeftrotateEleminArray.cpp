#include <bits/stdc++.h>
using namespace std;


vector<int> leftRotate(vector<int> a, int d){
     int n = a.size();
     d = d%n;

     vector<int> rotatedArray;
     for(int i=d;i<n;i++){
        rotatedArray.push_back(a[i]);
     }
     for(int i=0;i<n;i++){
        rotatedArray.push_back(a[i]);
     }
     return rotatedArray;
}


int main(){
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> result = leftRotate(a, d);
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}