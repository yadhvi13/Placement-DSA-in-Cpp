#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool validate(TreeNode* node, long minVal, long maxVal) {
    if (!node) return true;

    if (node->val <= minVal || node->val >= maxVal)
        return false;

    return validate(node->left, minVal, node->val) &&
           validate(node->right, node->val, maxVal);
}

bool isValidBST(TreeNode* root) {
    return validate(root, LONG_MIN, LONG_MAX);
}

int main() {
    /*
        Example Tree:
              2
             / \
            1   3
    */

    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);

    if (isValidBST(root))
        cout << "Valid BST\n";
    else
        cout << "Not a BST\n";

    return 0;
}