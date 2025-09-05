#include<iostream>
#include<vector>
using namespace std;

void leftrotatearrayDplace(vector<int> &nums, int n, int d){
      d = d%n;

      int temp[d];
      for(int i=0; i<d; i++){
        temp[i] = nums[i];
      }

      for(int i=d; i<n; i++){
        nums[i-d] = nums[i];
      }

      for(int i=n-d; i<n; i++){
        nums[i] = temp[i-(n-d)];
      }
}

int main(){
   int n;
   cout << "enter the size: ";
   cin >> n;

   vector<int> nums(n);
   cout << "enter the elem in array: ";
   for(int i=0; i<n; i++){
    cin >> nums[i];
   }

   int d;
   cout << "enter the value of d, by which you want to left shift array: ";
   cin >> d;
   leftrotatearrayDplace(nums, n, d);
   for(int i=0; i<n; i++){
    cout << nums[i] << " ";
   }
   cout << endl;
   return 0;
}   