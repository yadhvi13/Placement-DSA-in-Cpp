#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        string result = "1";

        for(int i = 2; i <= n; i++) {
            string temp = "";
            int count = 1;

            for(int j = 1; j < result.length(); j++) {
                if(result[j] == result[j-1]) {
                    count++;
                } else {
                    temp += to_string(count);
                    temp += result[j-1];
                    count = 1;
                }
            }

            temp += to_string(count);
            temp += result.back();

            result = temp;
        }

        return result;
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;
    cout << obj.countAndSay(n);
    return 0;
}