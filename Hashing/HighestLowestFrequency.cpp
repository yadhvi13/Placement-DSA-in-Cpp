#include<iostream>
#include<map>
#include<climits> // for INT_MAX and INT_MIN
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    //pre-compute
    map<int,int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    int highest = INT_MIN;
    int lowest = INT_MAX;
    int highestElement = 0;
    int lowestElement = 0;

    //lowest and highest frequency elements
    for(auto iterate: mpp){
        if(iterate.second > highest){
            highest = iterate.second;
            highestElement = iterate.first;
        }
        if(iterate.second < lowest){
            lowest = iterate.second;
            lowestElement = iterate.first;
        }
    }

 cout << "Element with highest frequency: " << highestElement << " (Frequency: " << highest << ")" << endl;
   
 cout << "Element with Lowest frequency: " << lowestElement << " (Frequency: " << lowest << ")" << endl;

 return 0;
}
