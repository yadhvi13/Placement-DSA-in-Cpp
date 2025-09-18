#include<vector>
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int majorElement(int n, vector<int> v){
    int count = 0;
    int element;
    for(int i=0; i < v.size(); i++){
        if(count == 0){
            // check for new element section
            count = 1;
            element=v[i];
        }
        else if(v[i] == element){
            count ++;
        }
        else{
            count --;
        }
    }
    return element;
}

int main(){
    int n;
    cout << "enter the size of an array: ";
    cin >> n;

    vector<int> v(n);
    cout << "enter the element in an array: ";
    for(int i=0; i<n; i++){
        cin >> v[i];
    } 
    cout << majorElement(n,v) << endl;
    return 0;
}