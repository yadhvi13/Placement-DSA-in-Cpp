#include<iostream>
using namespace std;

long long powerFunc(long long x, int n, int m){
    long long ans = 1;
    for(int i=1; i<=n; i++){
        ans *= x;
        if(ans > m)
            return m+1;
    }
    return ans;
}

int nthRoot(int n, int m){
    int low =1 ;
    int high = m;

    while(low <= high){
        int mid = low + (high - low)/2;
        long long midPower = powerFunc(mid,n,m);

        if(midPower == m){
            return mid;
        }
        else if(midPower < m){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
     return -1;
}

int main(){
    int n = 3;
    int m = 27;
    cout << nthRoot(n,m) << endl;

    return 0;
}