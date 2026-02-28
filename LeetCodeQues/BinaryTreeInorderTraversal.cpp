#include <iostream>
#include <vector>
#include <stack>
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

// Inorder Traversal (Iterative)
vector<int> inorderTraversal(TreeNode* root) {
    vector<int> result;
    stack<TreeNode*> st;
    TreeNode* curr = root;

    while (curr != NULL || !st.empty()) {

        // Go to leftmost node
        while (curr != NULL) {
            st.push(curr);
            curr = curr->left;
        }

        curr = st.top();
        st.pop();

        result.push_back(curr->val);

        curr = curr->right;
    }

    return result;
}

int main() {
    /*
        Creating tree manually:

              1
               \
                2
               /
              3
    */

    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    vector<int> result = inorderTraversal(root);

    cout << "Inorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}