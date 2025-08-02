#include<iostream>
using namespace std;

void printnum(int i, int n){
    if(i > n ){
        // cout << "Invalid count";
        return;
    }
    else{
        printnum(i+1, n);
        cout << i << endl;
    }
}

int main(){
    int n;
    cout << "enter the value of n: " << endl;
    cin >> n;

    printnum(1, n);
    return 0;
}

