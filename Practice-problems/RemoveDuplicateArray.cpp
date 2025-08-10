#include <iostream>
#include <set>
#include <vector>
using namespace std;

// int main(){
//     int n;
//     cout << "enter the size: ";
//     cin >> n;

//     vector<int> arr(n);
//     cout << "enter the array elements: ";
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     set<int> uniqueSet(arr.begin(), arr.end());

//     cout << "array after removing: " ;
//     for(auto it: uniqueSet){
//         cout << it << " ";
//     }
//     cout << endl;
//     return 0;
// }

// space - O(N)
//Time complexity - N log N + N;

//------------ Better approach


//-----OPTIMAL SOlution------ (TWO POINTERS)

int removeDuplicate(vector<int> &arr, int n){
    int i=0;
    for(int j=1; j<n; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
   int n;
   cin >> n;

   vector<int> arr(n);
   cout << "enter the elem in array: ";
   for(int i=0; i<n; i++){
    cin >> arr[i];
   }

 int newsize = removeDuplicate(arr,n);
   for(int i=0; i< newsize; i++){
    cout << arr[i] << " ";
   }
   cout << endl;
   return 0;
}
