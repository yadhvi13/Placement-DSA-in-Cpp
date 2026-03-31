#include <iostream>
#include <queue>
using namespace std;

// Definition of TreeNode
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = right = NULL;
    }
};

// Function to find min depth (BFS)
int minDepth(TreeNode* root) {
    if (root == NULL) return 0;

    queue<pair<TreeNode*, int>> q;
    q.push({root, 1});

    while (!q.empty()) {
        auto front = q.front();
        q.pop();

        TreeNode* node = front.first;
        int depth = front.second;

        if (node->left == NULL && node->right == NULL)
            return depth;

        if (node->left)
            q.push({node->left, depth + 1});

        if (node->right)
            q.push({node->right, depth + 1});
    }

    return 0;
}

int main() {
    // Example tree:
    //      1
    //     / \
    //    2   3
    //   /
    //  4

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);

    cout << "Minimum Depth: " << minDepth(root) << endl;

    return 0;
}