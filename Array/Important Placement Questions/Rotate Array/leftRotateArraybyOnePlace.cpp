#include<iostream>
#include<vector>
using namespace std;

void leftrotatearray(vector<int> &nums){
     int n = nums.size();
     int temp = nums[0];
     for(int i=1; i<n; i++){
       nums[i-1] = nums[i];
     }
     nums[n-1] = temp;
}

int main(){
    int n;
    cout << "enter the size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter the elem in array: ";
    for(int i=0; i<n;i++){
        cin >> nums[i];
    }

    leftrotatearray(nums);

    cout << "array after left rotation by one place: ";
    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
    
}