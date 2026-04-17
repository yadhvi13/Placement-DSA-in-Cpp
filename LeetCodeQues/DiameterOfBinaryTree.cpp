#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = right = NULL;
    }
};

int diameter = 0;

int height(TreeNode* root) {
    if (!root) return 0;

    int left = height(root->left);
    int right = height(root->right);

    diameter = max(diameter, left + right);

    return 1 + max(left, right);
}

int diameterOfBinaryTree(TreeNode* root) {
    height(root);
    return diameter;
}

int main() {
    /*
            1
           / \
          2   3
         / \
        4   5
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Diameter: " << diameterOfBinaryTree(root);

    return 0;
}