#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int getHeight(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(getHeight(root->left), getHeight(root->right));
}

void fill(vector<vector<string>>& res, TreeNode* root, int row, int left, int right) {
    if (!root || left > right) return;

    int mid = (left + right) / 2;
    res[row][mid] = to_string(root->val);

    fill(res, root->left, row + 1, left, mid - 1);
    fill(res, root->right, row + 1, mid + 1, right);
}

vector<vector<string>> printTree(TreeNode* root) {
    int height = getHeight(root);
    int rows = height;
    int cols = (1 << height) - 1;

    vector<vector<string>> res(rows, vector<string>(cols, ""));
    fill(res, root, 0, 0, cols - 1);

    return res;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(4);

    vector<vector<string>> result = printTree(root);

    for (auto& row : result) {
        for (auto& cell : row) {
            if (cell == "") cout << " ";
            else cout << cell;
        }
        cout << endl;
    }

    return 0;
}