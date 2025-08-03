#include<iostream>
using namespace std;

void singlepointer(int i, int n, int arr[]){
   if(i >= n/2) return;
   swap(arr[i], arr[n-i-1]);
   singlepointer(i+1, n, arr);

}

int main(){
   int n = 6;
   int arr[] = {1,3,5,7,9,11};

   singlepointer(0,n,arr);
   cout << "reversed array: " ;
   for(int i=0; i<n; i++){
    cout << arr[i] << " ";
   }
   cout <<endl;

   return 0;
}