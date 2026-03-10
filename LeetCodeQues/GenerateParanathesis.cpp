#include <iostream>
#include <vector>
using namespace std;

void generate(int open, int close, int n, string str, vector<string>& result) {

    // Base case
    if(str.length() == 2*n){
        result.push_back(str);
        return;
    }

    // Add opening bracket
    if(open < n){
        generate(open + 1, close, n, str + "(", result);
    }

    // Add closing bracket
    if(close < open){
        generate(open, close + 1, n, str + ")", result);
    }
}

vector<string> generateParenthesis(int n) {

    vector<string> result;
    generate(0,0,n,"",result);
    return result;
}

int main(){

    int n = 3;

    vector<string> ans = generateParenthesis(n);

    for(string s : ans){
        cout << s << endl;
    }

    return 0;
}