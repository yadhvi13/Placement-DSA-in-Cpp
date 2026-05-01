#include <iostream>
using namespace std;

// Linked List
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Binary Tree
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool dfs(ListNode* head, TreeNode* root) {
        if (!head) return true;
        if (!root) return false;
        if (head->val != root->val) return false;

        return dfs(head->next, root->left) || 
               dfs(head->next, root->right);
    }

    bool isSubPath(ListNode* head, TreeNode* root) {
        if (!root) return false;

        return dfs(head, root) ||
               isSubPath(head, root->left) ||
               isSubPath(head, root->right);
    }
};

int main() {
    // Create linked list: 4 -> 2 -> 8
    ListNode* head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(8);

    
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(4);
    root->right = new TreeNode(4);
    root->left->left = new TreeNode(2);
    root->left->left->left = new TreeNode(1);
    root->right->left = new TreeNode(2);
    root->right->left->left = new TreeNode(6);
    root->right->right = new TreeNode(2);

    Solution sol;
    bool result = sol.isSubPath(head, root);

    if (result)
        cout << "Linked list is a subpath in tree\n";
    else
        cout << "Not a subpath\n";

    return 0;
}