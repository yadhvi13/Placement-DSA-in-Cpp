#include<iostream>
#include<vector>
using namespace std;

void rightrotatearrayDplace(vector<int> &nums, int n, int d){
    d = d%n;
    if(d == 0) return;

    int temp[d];
    for(int i=0; i<d; i++){
        temp[i] = nums[n-d+i];
    }

    for(int i=n-d-1; i>=0; i--){
        nums[i+d] = nums[i];
    }

    for(int i=0; i<d; i++){
        nums[i] = temp[i];
    }
}

int main(){
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements in array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int d;
    cout << "Enter the value of d, by which you want to right shift array: ";
    cin >> d;

    rightrotatearrayDplace(nums, n, d);

    cout << "Array after right rotation: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}