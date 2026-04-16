#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int> res;
        res.push_back(1);

        while (res.size() < n) {
            vector<int> temp;

            // Odd numbers
            for (int x : res) {
                if (2 * x - 1 <= n)
                    temp.push_back(2 * x - 1);
            }

            // Even numbers
            for (int x : res) {
                if (2 * x <= n)
                    temp.push_back(2 * x);
            }

            res = temp;
        }

        return res;
    }
};

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    Solution obj;
    vector<int> result = obj.beautifulArray(n);

    cout << "Beautiful Array: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}