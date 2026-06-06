#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int minTimeToVisitAllPoints(vector<vector<int>>& points) {
    int time = 0;

    for (int i = 1; i < points.size(); i++) {
        int x1 = points[i - 1][0];
        int y1 = points[i - 1][1];
        int x2 = points[i][0];
        int y2 = points[i][1];

        time += max(abs(x2 - x1), abs(y2 - y1));
    }

    return time;
}

int main() {
    vector<vector<int>> points = {{1, 1}, {3, 4}, {-1, 0}};

    cout << minTimeToVisitAllPoints(points) << endl;

    return 0;
}