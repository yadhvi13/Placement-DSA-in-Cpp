#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n<=1) return n;

    int last = fibonacci(n-1);
    int slast = fibonacci(n-2);

    return last + slast;
}

int main(){

    int n ;
    cout << "enter the value of n: " << endl;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}