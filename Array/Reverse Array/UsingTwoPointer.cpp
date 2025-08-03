#include<iostream>
using namespace std;

void twopointer(int l, int r, int arr[]){
  if(l >=r) return;
  swap(arr[l] , arr[r]);
  twopointer(l+1, r-1, arr);
}

int main(){
    int n=5;
    int arr[5] = {1,2,3,4,5};

    twopointer(0, n-1, arr);
    cout << "reversed array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}