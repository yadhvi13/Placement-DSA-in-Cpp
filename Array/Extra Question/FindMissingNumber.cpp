#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

// BRUTE FORCE METHODS -- O(n2)

// int findmissingNumber(vector<int>& arr){
//     int n = arr.size();
//     for(int i=0; i<=n; i++){
//         bool found = false;
//         for(int j=0; j<n; j++){
//             if(arr[j] == i){
//                found = true;
//                break;
//             }
//     }
//     if(!found){
//      return i;
//     }
// }
// return -1;
// }

// int main(){
//     int n;
//     cout << "enter the size of an array: ";
//     cin >> n;

//     vector<int> arr(n);
//     cout << "enter the element in an array: ";
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     int missing = findmissingNumber(arr);
//     cout << "the missing number is: " << missing << "\n";
// }


// BETTER APPROACH ---- O(N) + O(N), space-complexity =>>>> O(N);

// int findmissingNumber(vector<int>& arr){
//     int n = arr.size();
//     unordered_map<int, bool> hash;

//     for(int num : arr){
//         hash[num] = true;
//     }

//     for(int i=0; i<=n ; i++){
//         if(hash.find(i) == hash.end()){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter the elements of the array: ";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
// }


// OPTIMAL SOLUTION - O(n), O(1)


int missingnumber(vector<int>&a, int N){
    int xor1 = 0;
    int xor2 = 0;
    int n = N-1;
    for(int i =0; i<n; i++){
        xor2 = xor2 ^ a[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1 ^= N;
    return xor1 ^ xor2;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int missing = missingnumber(a, n + 1);
    cout << "the missing number is: " << missing << "\n";
    return 0;
}

