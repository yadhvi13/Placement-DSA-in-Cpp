#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Level Order Function
vector<vector<int>> levelOrder(Node* root) {
    vector<vector<int>> ans;

    if (root == NULL) return ans;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; i++) {
            Node* node = q.front();
            q.pop();

            level.push_back(node->data);

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        ans.push_back(level);
    }

    return ans;
}

int main() {
    // Creating tree
    Node* root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

    vector<vector<int>> result = levelOrder(root);

    // Print result
    for (auto level : result) {
        for (int x : level) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}