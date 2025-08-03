#include<iostream>
using namespace std;

int fact(int n){
   if(n == 0) return 1;
   return n* fact(n-1);
}

int main(){
    int n;
    cout << "enter the number: ";

    cin >> n;
    fact(n);
    cout << "The sum is: " << fact(n) << endl;

}