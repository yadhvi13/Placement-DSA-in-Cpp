#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>a(n), lis;
    for(int &x:a) cin>>x;

    for(int x:a){
        auto it = lower_bound(lis.begin(), lis.end(), x);
        if(it == lis.end()) lis.push_back(x);
        else *it = x;
    }

    cout << lis.size();
}
