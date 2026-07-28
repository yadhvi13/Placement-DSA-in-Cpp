#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;

        while (left < right) {

            int width = right - left;
            int currHeight = min(height[left], height[right]);
            int area = width * currHeight;

            maxWater = max(maxWater, area);

            // Move the pointer with the smaller height
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxWater;
    }
};

int main() {

    Solution obj;

    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout << "Maximum Water = " << obj.maxArea(height);

    return 0;
}