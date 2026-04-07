#include <iostream>
using namespace std;

// Tree Node
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

// Solution
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root) return NULL;

        // swap
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};

// Inorder traversal to check result
void inorder(TreeNode* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

// MAIN
int main() {
    /*
        Original:
              4
             / \
            2   7
           / \ / \
          1  3 6  9
    */

    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);

    Solution obj;

    cout << "Before Invert (Inorder): ";
    inorder(root);
    cout << endl;

    obj.invertTree(root);

    cout << "After Invert (Inorder): ";
    inorder(root);

    return 0;
}