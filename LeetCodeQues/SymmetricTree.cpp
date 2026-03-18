#include <iostream>
#include <queue>
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
    bool isMirror(TreeNode* left, TreeNode* right) {
        if(left == NULL && right == NULL)
            return true;
        
        if(left == NULL || right == NULL)
            return false;
        
        if(left->val != right->val)
            return false;
        
        return isMirror(left->left, right->right) &&
               isMirror(left->right, right->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return isMirror(root->left, root->right);
    }
};

int main() {
    /*
        Creating this tree:
        
              1
             / \
            2   2
           / \ / \
          3  4 4  3
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(2);

    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);

    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    Solution obj;

    if(obj.isSymmetric(root))
        cout << "Tree is Symmetric" << endl;
    else
        cout << "Tree is NOT Symmetric" << endl;

    return 0;
}