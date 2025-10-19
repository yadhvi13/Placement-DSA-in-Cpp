#include<iostream>
#include<vector>
using namespace std;

int upperBound(vector<int>& arr, int target, int n){
    int low = 0;
    int high = n-1;
    int ans = n;

    while(low <= high){
        int mid = (low+high)/2;

        if(arr[mid] > target){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout << "enter the size of an array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "enter an element in sorted manner: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int target;
    cout << "enter the element to search: ";
    cin >> target;

    int result = upperBound(arr, target, n);

    if(result == n){
        cout << "upper bound does not exist (element greater than all elements)" << endl;
    }
     else
         cout << "upper bound index: " << result << " (Element: " << arr[result] << ")" << endl;

    return 0;
}