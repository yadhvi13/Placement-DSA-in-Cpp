#include<iostream>
using namespace std;

void printnum(int i, int sum){
   if(i<1) {
    cout << sum;
    return;
   }
  printnum(i-1, sum+1);
}

int main(){
    int n;
    cin >> n;

    printnum(n,0);
}