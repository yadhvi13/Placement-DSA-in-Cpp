#include<iostream>
#include<vector>
using namespace std;


int search(vector<int> &nums,int low, int high, int target){
       if(low > high){
        return -1;
       }

       int mid = (low+high)/2;
       if(nums[mid] == target){
        return mid;
       }
       else if(target > nums[mid]){
        return search(nums, mid+1, high, target);
       }
       else{
        return search(nums, mid-1, high, target);
       }
}

int bs(vector<int> &nums, int target){
    return search(nums, 0, nums.size()-1, target);
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

    int result = bs(nums, target);

    if(result != -1){
        cout << "Element found at index " << result << endl;
    }
     else
        cout << "Element not found" << endl;

    return 0;
}