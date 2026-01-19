#include <bits/stdc++.h>
using namespace std;


void mid(stack<int>&s,stack<int>&temp){
    if(s.size()<temp.size()){
        return;
    }
    
    temp.push(s.top()); s.pop();
    mid(s,temp);
    return;
}

int main() {
	// your code goes here
    int n;
    cin>>n;
    stack<int>s,temp;
    while(n--){
        int x; cin>>x;
        s.push(x);
    }
    
    mid(s,temp);
    
    temp.pop();
    
    while(temp.size()>0){
        s.push(temp.top()); temp.pop();
    }
    
    while(s.size()>0){
        cout<<s.top()<<" ";
        s.pop();
    }
    
    cout<<endl;
    
    
}
