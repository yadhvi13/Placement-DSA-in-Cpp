#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> separateDigits(vector<int>& nums) {
    vector<int> result;

    for (int num : nums) {
        string s = to_string(num);

        for (char ch : s) {
            result.push_back(ch - '0');
        }
    }

    return result;
}

int main() {
    vector<int> nums = {13, 25, 83, 77};

    vector<int> ans = separateDigits(nums);

    for (int digit : ans) {
        cout << digit << " ";
    }

    return 0;
}