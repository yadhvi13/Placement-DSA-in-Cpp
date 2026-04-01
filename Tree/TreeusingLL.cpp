#include<iostream>
#include<queue> 
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left = right = nullptr;

    }
};

Node* insert(Node* root, int value){
    if(root == nullptr){
        return new Node(value);
    }
    if(value < root->data){
        root->left = insert(root->left, value);
    }
    else{
        root->right = insert(root->right, value);
    }
    return root;
}


void inorder(Node* root){
    if(root != nullptr){
        inorder(root->left);
        cout << root->data << " -> ";
        inorder(root->right);
    }
}


void preorder(Node* root){
    if(root != nullptr){
        cout << root->data << " -> ";
        preorder(root->left);
        preorder(root->right);
    }
}


void postorder(Node* root){
    if(root != nullptr){
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " -> ";
    }
}

void BFS(Node* root){
    if(root == nullptr) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* current = q.front();
        q.pop();

        cout << current->data << " -> ";

        if(current->left != nullptr){
            q.push(current->left);
        }
        if(current->right != nullptr){
            q.push(current->right);
        }
    }
}

int main(){
    Node* root = nullptr;

    root = insert(root,50);
    insert(root,30);
    insert(root,70);
    insert(root,20);
    insert(root,40);
    insert(root,60);
    insert(root,80);

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;

    cout << "BFS (Level Order): ";
    BFS(root);
    cout << endl;

         return 0;
}