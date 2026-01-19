#include <bits/stdc++.h>
using namespace std;


void help(stack<int>&s, int n){
    stack<int>temp;
    
    while(s.size()>0 && s.top()>n){
        temp.push(s.top()); s.pop();
    }
    
    s.push(n); 
    
    while(!temp.empty()){
        s.push(temp.top()); temp.pop();
    }
    
}


void sort(stack<int>&s){
    if(s.size()==0){
        return;
    }
    
    int temp=s.top();
    
    s.pop();
    sort(s);
    
    if(s.empty())s.push(temp);
    else{
        if(temp>=s.top())s.push(temp);
        else help(s,temp);
    }
    
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
    
    
    
    while(s.size()>0){
        cout<<s.top()<<" ";
        s.pop();
    }
    
    cout<<endl;
    
}