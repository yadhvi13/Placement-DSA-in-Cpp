#include <iostream>
#include <vector>
#include <deque>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    
    deque<int> dq;      
    vector<int> result;

    for(int i = 0; i < nums.size(); i++) {

        //1️. Remove indxes out of current window
        if(!dq.empty() && dq.front() == i - k) {
            dq.pop_front();
        }

        // 2. Remove smaller elements from back
        while(!dq.empty() && nums[dq.back()] < nums[i]) {
            dq.pop_back();
        }

        // 3️. Push current index
        dq.push_back(i);

        // 4️. Store result when window is ready
        if(i >= k - 1) {
            result.push_back(nums[dq.front()]);
        }
    }

    return result;
}

int main() {
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;

    vector<int> ans = maxSlidingWindow(nums, k);

    for(int x : ans)
        cout << x << " ";

    return 0;
}