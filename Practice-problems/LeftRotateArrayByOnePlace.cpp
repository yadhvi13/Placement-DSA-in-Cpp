#include<iostream>
using namespace std;

void leftrotate(int arr[], int n, int d){
    //reduce d to lesser than n
    d = d % n;

    //store everything to the temp
    int temp[d];
    for(int i=0; i<d;i++){
        temp[i] = arr[i];
    }

    //shifting
    for(int i=d; i<n; i++){
        arr[i-d] = arr[i];
    }

    //replacing everything back to the array
    for(int i=n-d; i<n;i++){
        arr[i] = temp[i - (n-d)];
    }
}

int main(){
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;

    int arr[n];
    cout << "enter element in array: " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int d;
    cout << "Enter the value by which you want to shift: " << endl;
    cin >> d;
    leftrotate(arr,n,d);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

//time complexity = O(d) + O(n-d) + O(d) ===> O(N+d)
//extra space => O(d) --> because this is where in temp we are storing the array