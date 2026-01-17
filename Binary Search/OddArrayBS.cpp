#include<iostream>
#include<vector>
using namespace std;

int binarySearchOdd(vector<int> &array, int target){
    int n = array.size();
    int start = 0;
    int end = n-1;

    while(start<=end){
        int mid = (start+end)/2;
        if(target > array[mid]){
            start = mid+1;
        }
        else if(target < array[mid]){
            end = mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> array = {-1,0,3,5,9,12};
    int target = 0;

    cout << binarySearchOdd(array, target) << endl;
    return 0;

}