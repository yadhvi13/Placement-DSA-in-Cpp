#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotateleft(vector<int> &arr, int n, int d){
    d = d%n;
    if(d == 0) return;

    reverse(arr.begin(), arr.begin()+d);
    reverse(arr.begin()+d, arr.end());
    reverse(arr.begin(), arr.end());
}

int main(){
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements in array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int d;
    cout << "Enter the value of d, by which you want to left shift array: ";
    cin >> d;

    rotateleft(arr, n, d);

    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}