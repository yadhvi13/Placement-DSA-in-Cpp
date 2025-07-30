#include<iostream>
using namespace std;

int main(){

    int arr[5] = {1,2,3,2,1};
    int ans = 0;
    int size = 5;

    for(int i=0; i<size; i++){
       ans = ans^arr[i];
    }
    cout << "The remaining Element in Array which is not repeating is: " << ans << endl;

    return 0;
}
