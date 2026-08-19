#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, int> rows;

        // Store reserved seats for each row
        for (auto seat : reservedSeats) {
            int row = seat[0];
            int col = seat[1];

            rows[row] |= (1 << col);
        }

        // Seats 2,3,4,5
        int left = (1 << 2) | (1 << 3) | (1 << 4) | (1 << 5);

        // Seats 4,5,6,7
        int middle = (1 << 4) | (1 << 5) | (1 << 6) | (1 << 7);

        // Seats 6,7,8,9
        int right = (1 << 6) | (1 << 7) | (1 << 8) | (1 << 9);

        // Rows having no reserved seats can accommodate 2 families
        int ans = (n - rows.size()) * 2;

        // Check rows containing reserved seats
        for (auto it : rows) {
            int mask = it.second;

            bool canLeft = (mask & left) == 0;
            bool canMiddle = (mask & middle) == 0;
            bool canRight = (mask & right) == 0;

            if (canLeft && canRight) {
                ans += 2;
            }
            else if (canLeft || canMiddle || canRight) {
                ans += 1;
            }
        }

        return ans;
    }
};

int main() {

    int n = 3;

    vector<vector<int>> reservedSeats = {
        {1, 2},
        {1, 3},
        {1, 8},
        {2, 6}
    };

    Solution obj;

    int result = obj.maxNumberOfFamilies(n, reservedSeats);

    cout << "Maximum number of families: " << result << endl;

    return 0;
}