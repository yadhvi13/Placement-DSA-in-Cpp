#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minimumCost(vector<int>& cost) {
    sort(cost.begin(), cost.end(), greater<int>());

    int total = 0;

    for (int i = 0; i < cost.size(); i++) {
        if ((i + 1) % 3 != 0) {
            total += cost[i];
        }
    }

    return total;
}

int main() {
    vector<int> cost = {6, 5, 7, 9, 2, 2};

    cout << "Minimum Cost: " << minimumCost(cost) << endl;

    return 0;
}