#include <iostream>
#include <cmath>
using namespace std;

// Tree Node Definition
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    int totalTilt = 0;

    int dfs(TreeNode* root) {
        if (!root) return 0;

        int leftSum = dfs(root->left);
        int rightSum = dfs(root->right);

        // Calculate tilt
        totalTilt += abs(leftSum - rightSum);

        // Return subtree sum
        return root->val + leftSum + rightSum;
    }

    int findTilt(TreeNode* root) {
        dfs(root);
        return totalTilt;
    }
};

int main() {

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    Solution sol;
    int result = sol.findTilt(root);

    cout << "Total Tilt: " << result << endl;

    return 0;
}