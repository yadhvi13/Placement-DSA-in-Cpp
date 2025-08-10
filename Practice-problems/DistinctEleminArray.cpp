#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int q;
    cin >> q;

    while(q--){
        int l,r;
        cin >> l >> r;
        l--;
        r--;
        unordered_set<int> st;
        for(int i=l; i<=r; i++){
            st.insert(arr[i]);
        }
         cout << st.size() << "\n";
    }
    return 0;
}