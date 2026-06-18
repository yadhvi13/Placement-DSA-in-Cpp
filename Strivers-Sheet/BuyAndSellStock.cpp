#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int stockBuySell(vector<int> arr, int n) {
    int mini = arr[0];
    int maxProfit = 0;

    for (int i = 0; i < n; i++) {
        int cost = arr[i] - mini;
        maxProfit = max(maxProfit, cost);

        mini = min(mini, arr[i]);
    }

    return maxProfit;
}

int main() {
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    int n = arr.size();

    cout << stockBuySell(arr, n);

    return 0;
}