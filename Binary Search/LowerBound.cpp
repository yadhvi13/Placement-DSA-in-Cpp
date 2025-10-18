#include<iostream>
#include<vector>
using namespace std;


int lowerBound(vector<int> &nums, int n, int x){
      int low = 0;
      int high = n-1;
      int ans = n;
      while(low <=high){
        int mid = (low + high)/2;
        //maybe an answer
        if(nums[mid] >= x){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid + 1;
        }
      }
      return ans;
}


int main(){
    int n;
    cout << "new codes";
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

    int result = lowerBound(nums, n, target);

    if(result == n){
        cout << "Lower bound does not exist (element greater than all elements)" << endl;
    }
     else
         cout << "Lower bound index: " << result << " (Element: " << nums[result] << ")" << endl;

    return 0;
}