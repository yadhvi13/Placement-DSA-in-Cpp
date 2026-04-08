#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Definition of TreeNode
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
    void dfs(TreeNode* root, string path, vector<string>& result) {
        if (!root) return;

        // Build path
        if (path == "")
            path = to_string(root->val);
        else
            path += "->" + to_string(root->val);

        // Leaf node
        if (!root->left && !root->right) {
            result.push_back(path);
            return;
        }

        dfs(root->left, path, result);
        dfs(root->right, path, result);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        dfs(root, "", result);
        return result;
    }
};

int main() {

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);

    Solution sol;
    vector<string> paths = sol.binaryTreePaths(root);

    // Print result
    for (string path : paths) {
        cout << path << endl;
    }

    return 0;
}