#include <iostream>
using namespace std;

// TreeNode structure
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = right = NULL;
    }
};

// Function to check path sum
bool hasPathSum(TreeNode* root, int targetSum) {
    if (root == NULL) return false;

    if (root->left == NULL && root->right == NULL) {
        return targetSum == root->val;
    }

    int remaining = targetSum - root->val;

    return hasPathSum(root->left, remaining) ||
           hasPathSum(root->right, remaining);
}

int main() {
    /*
            5
           / \
          4   8
         /   / \
        11  13  4
       /  \       \
      7    2       1
    */

    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->right->right->right = new TreeNode(1);

    int target = 22;

    if (hasPathSum(root, target))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}