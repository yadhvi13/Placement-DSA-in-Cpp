#include<iostream>
#include<vector>
using namespace std;

int lowerBound(vector<int>& nums, int n, int target){
     int low = 0;
     int high = n-1;
     int ans = n;
     while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid] >= target){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid + 1;
        }
     }
     return ans;
}

int upperBound(vector<int>& nums, int n, int target){
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid] > target){
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

    vector<int> nums(n);
    cout << "enter an element in sorted manner: ";
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    int target;
    cout << "enter the element to search: ";
    cin >> target;

    int lb = lowerBound(nums,n, target);
    int ub = upperBound(nums,n , target);

    if(lb == n ||nums[lb] != target){
        cout << "element not found: [-1,-1]" << endl;
    }
     else
    //   cout << "first and last position of element: [" << lb << ", " << ub - 1 << "]" << endl;
      cout << "count of element is: " << ub - lb << endl;
    return 0;
}
