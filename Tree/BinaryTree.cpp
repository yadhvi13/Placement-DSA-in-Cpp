#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


// ================= BFS =================
void levelOrder(Node* root) {
    if (!root) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if (temp->left) q.push(temp->left);
        if (temp->right) q.push(temp->right);
    }
}


// ================= DFS =================
void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}


// ================= BASIC =================
int height(Node* root) {
    if (!root) return 0;
    return 1 + max(height(root->left), height(root->right));
}

int countNodes(Node* root) {
    if (!root) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int sumNodes(Node* root) {
    if (!root) return 0;
    return root->data + sumNodes(root->left) + sumNodes(root->right);
}


// ================= DIAMETER =================
int diameter(Node* root, int &height) {
    if (!root) {
        height = 0;
        return 0;
    }

    int lh = 0, rh = 0;

    int leftDia = diameter(root->left, lh);
    int rightDia = diameter(root->right, rh);

    height = 1 + max(lh, rh);

    return max({lh + rh, leftDia, rightDia});
}


// ================= BALANCED TREE =================
int checkHeight(Node* root) {
    if (!root) return 0;

    int left = checkHeight(root->left);
    if (left == -1) return -1;

    int right = checkHeight(root->right);
    if (right == -1) return -1;

    if (abs(left - right) > 1) return -1;

    return 1 + max(left, right);
}

bool isBalanced(Node* root) {
    return checkHeight(root) != -1;
}


// ================= LEFT VIEW =================
void leftView(Node* root) {
    if (!root) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int n = q.size();

        for (int i = 1; i <= n; i++) {
            Node* temp = q.front();
            q.pop();

            if (i == 1)
                cout << temp->data << " ";

            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
    }
}


// ================= RIGHT VIEW =================
void rightView(Node* root) {
    if (!root) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int n = q.size();

        for (int i = 1; i <= n; i++) {
            Node* temp = q.front();
            q.pop();

            if (i == n)
                cout << temp->data << " ";

            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
    }
}


// ================= MAIN =================
int main() {
    /*
            1
           / \
          2   3
         / \   \
        4   5   6
    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    cout << "Level Order: ";
    levelOrder(root);

    cout << "\nInorder: ";
    inorder(root);

    cout << "\nPreorder: ";
    preorder(root);

    cout << "\nPostorder: ";
    postorder(root);

    cout << "\nHeight: " << height(root);
    cout << "\nTotal Nodes: " << countNodes(root);
    cout << "\nSum: " << sumNodes(root);

    int h = 0;
    cout << "\nDiameter: " << diameter(root, h);

    if (isBalanced(root))
        cout << "\nBalanced Tree: YES";
    else
        cout << "\nBalanced Tree: NO";

    cout << "\nLeft View: ";
    leftView(root);

    cout << "\nRight View: ";
    rightView(root);

    return 0;
}