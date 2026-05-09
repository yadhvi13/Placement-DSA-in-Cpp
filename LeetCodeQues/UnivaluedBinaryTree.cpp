#include <iostream>
using namespace std;

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

bool check(TreeNode* root, int val) {
    if (root == NULL)
        return true;

    if (root->val != val)
        return false;

    return check(root->left, val) && check(root->right, val);
}

bool isUnivalTree(TreeNode* root) {
    return check(root, root->val);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(1);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(1);

    if (isUnivalTree(root))
        cout << "True";
    else
        cout << "False";

    return 0;
}