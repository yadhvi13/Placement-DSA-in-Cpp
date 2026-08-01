#include<iostream>
using namespace std;

class node{
    public:
      int data;
      node * left;
      node * right;

    //   constructor for new node 
       node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
       }
};

// function for create tree
node* buildTree(node* root){
   cout << "Enter the data: " << endl;
   int data;
   cin >> data;
   root = new node(data);

   if(data == -1){
    return NULL;
   }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

// Level Order Traversal
void levelOrderTraversal(node* root){
    
}

int main(){

    node* root = NULL;

    // creating a Tree
    root = buildTree(root);

    return 0;
}