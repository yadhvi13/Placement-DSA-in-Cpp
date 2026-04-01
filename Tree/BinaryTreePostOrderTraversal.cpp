#include <iostream>
#include <vector>
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

// Postorder Function
void postorder(Node* root, vector<int>& ans) {
    if (root == NULL) return;

    postorder(root->left, ans);   // Left
    postorder(root->right, ans);  // Right
    ans.push_back(root->data);    // Root
}

int main() {
    // Creating tree manually
    Node* root = new Node(1);
    root->right = new Node(2);
    root->right->left = new Node(3);

    vector<int> ans;
    postorder(root, ans);

    // Print result
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}