#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

string twosum(int n, vector<int> &nums, int target){
      int left =0, right = n-1;
      sort(nums.begin(), nums.end());

      while(left < right){
        int sum = nums[left] + nums[right];
        if(sum == target){
            return  "yes";
        }
        else if(sum < target){
            left ++;
        }
        else{
            right --;
        }
        return "no";
      }

}

int main(){
    int n, target;
    cout << "enter the size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter element in array: ";
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    cout << "enter the target: ";
    cin >> target;

    cout << twosum(n, nums, target) << endl;
    return 0;
}