#include<iostream>
#include<vector>
using namespace std;


vector<int> floorandceil(vector<int> &arr, int n, int target){
    int floorval = -1;
    int ceilval = -1;
    int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] == target){
           floorval = arr[mid];
           ceilval = arr[mid];
           break;
        }
        else if(arr[mid] < target){
            floorval = arr[mid];
            low = mid + 1;
        }
        else{
            ceilval = arr[mid];
            high = mid - 1;
        }
    }
return {floorval,ceilval};
}

int main(){
    int n,  target;
    cout << "enter the size of an array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "enter an element in sorted manner: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Enter target element: ";
    cin >> target;

    vector<int> result = floorandceil(arr, n, target);

    cout << "Floor value: " << result[0] << endl;
    cout << "Ceil value: " << result[1] << endl;

    return 0;
}