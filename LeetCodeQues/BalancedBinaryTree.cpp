#include <iostream>
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

// Solution Class
class Solution {
public:
    int height(TreeNode* root) {
        if (!root) return 0;

        int left = height(root->left);
        if (left == -1) return -1;

        int right = height(root->right);
        if (right == -1) return -1;

        if (abs(left - right) > 1) return -1;

        return max(left, right) + 1;
    }

    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }
};

// Driver Code (MAIN FUNCTION)
int main() {
    /*
        Example Tree:
              3
             / \
            9   20
               /  \
              15   7
    */

    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    Solution obj;

    if (obj.isBalanced(root))
        cout << "Balanced Tree";
    else
        cout << "Not Balanced";

    return 0;
}