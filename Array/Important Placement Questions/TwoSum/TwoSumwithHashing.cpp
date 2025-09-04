#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

string twosum(int n, vector<int> arr, int target){
    unordered_map<int, int> mpp;
    for(int i=0; i<n; i++){
        int a = arr[i];
        int more = target - a;
        if(mpp.find(more) != mpp.end()){
            // return "yes";
            return "yes";
        }
        mpp[a] = i;
    }
    return "NO";
}

int main(){
    int n, target;
    cout << "enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "enter target: ";
    cin >> target;

    cout << twosum(n, arr, target) << endl;
    return 0;
}
