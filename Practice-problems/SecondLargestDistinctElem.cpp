#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int firstLargest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i] > firstLargest){
            secondLargest = firstLargest;
            firstLargest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != firstLargest){
            secondLargest = arr[i];
        }
    }
    if(secondLargest == INT_MIN){
        cout << "No second Largest Elem" << endl;
    }
    else{
        cout << secondLargest << endl;
    }
    return 0;
}