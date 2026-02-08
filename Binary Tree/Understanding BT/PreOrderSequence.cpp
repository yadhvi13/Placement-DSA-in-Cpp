#include<iostream>
#include<vector>
using namespace std;

// node structure
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    // constructor
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

static int idx = -1;
Node* buildTree(vector<int> preorder){
    idx++;

    if(preorder[idx] == -1) return NULL;

    // creating root node
    Node* root = new Node(preorder[idx]);

    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

int main(){

// root,left,right
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preorder);
    cout << root->data << endl;
    cout << root->left->data << endl;
    cout << root->right->data << endl;
    return 0;

}
