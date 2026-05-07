#include <iostream>
#include <vector>
using namespace std;

bool containsPattern(vector<int>& arr, int m, int k) {
    int n = arr.size();

    for (int i = 0; i <= n - (m * k); i++) {
        bool found = true;

        for (int j = 0; j < m * (k - 1); j++) {
            if (arr[i + j] != arr[i + j + m]) {
                found = false;
                break;
            }
        }

        if (found)
            return true;
    }

    return false;
}

int main() {
    vector<int> arr = {1, 2, 4, 4, 4, 4};

    int m = 1;
    int k = 3;

    bool ans = containsPattern(arr, m, k);

    if (ans)
        cout << "true";
    else
        cout << "false";

    return 0;
}