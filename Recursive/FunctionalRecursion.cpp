#include<iostream>
using namespace std;

int sum(int n){
    if(n == 0) return 0;
    return n + sum(n-1);
}

int main(){
    int n;
    cout << "enter the number: " << endl;
    cin >> n;

    // int result = sum(n);
    // cout << "sum from 1 to " << n << "is: " << result << endl;

    sum(n);
    cout << "The sum is: " << sum(n) << endl;

    return 0;
}