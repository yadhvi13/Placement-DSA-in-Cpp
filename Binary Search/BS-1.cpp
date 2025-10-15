#include<iostream>
#include<vector>
using namespace std;


int search(vector<int> &nums, int target){
       int n = nums.size();
       int low = 0;
       int high = n-1;

       while(low <= high){
        int mid = (low + high) /2;
        if(nums[mid] == target){
            return mid;
        }
        else if(target > nums[mid]){
            low = mid + 1 ;
        }
        else{
            high = mid - 1;
        }
       }
       return -1;
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

    int result = search(nums, target);
    if(result != -1){
        cout << "Element found at index: " << result << endl;
    }
    else{
        cout << "Element not found in the array." << endl;
    }
    return 0;
}