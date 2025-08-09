#include<iostream>
#include<vector>
using namespace std;

int largestElement(vector<int> &nums) {
          int largest = nums[0];
          for(int i=0; i<nums.size(); i++){
            if(nums[i]> largest){
                largest = nums[i];
            }
          }
          return largest;
    }

int main() {
    vector<int> arr = {1, 5, 3, 9, 2};
    cout << "Largest Element: " << largestElement(arr) << endl;
    return 0;
}