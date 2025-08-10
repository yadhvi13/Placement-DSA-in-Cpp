#include<iostream>
#include<climits>
// #include<vector>
using namespace std;


int secondlargest(int arr[],int n){
   int largest = arr[0];
   int slargest = INT_MIN;

   for(int i=1; i<n; i++){
    if(arr[i] > largest){
        slargest = largest;
        largest = arr[i];
    }
    else{
        if(arr[i] < largest && arr[i] > slargest){
           slargest = arr[i];
        }
    }
    return slargest;
}
}

int secondSmallest(int arr[], int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for(int i=1; i<n; i++){
        if(arr[i] < smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < ssmallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

int main(){
    // vector<int> arr(n);
    int n;
    cout << "enter the size of an array: " ;
    cin >> n;

    int arr[n];
    cout << "Enter an elements in an array: " << endl;
    for(int i=0; i<n ; i++){
        cin >> arr[i];
    }
    int slargest = secondlargest(arr,n);
    int ssmallest = secondSmallest(arr,n);

    cout << "the largest elem in array is: " << slargest << " " << endl;
    cout << "the second largest elem in array is: " << ssmallest << " " << endl;
    return 0;
}