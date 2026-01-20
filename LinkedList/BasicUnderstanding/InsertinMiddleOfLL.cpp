#include<iostream>
using namespace std;

// creating a class for NODE
class Node{
    public:
    int data;
    Node* next;

    // calling constructor
    Node(int val){
        data = val;
        next = NULL;
    }
};
// creating single LINKED LIST for all Nodes
class List{
    Node* head;
    Node* tail;

public:
    List(){
            head = NULL;
            tail = NULL;
    }

void push_front(int val){
    Node* newNode = new Node(val);
        if(head == NULL){
            // head = tail = newNode;
            head = newNode;
            tail = newNode;
            return;
        }
        // if linkedList me already element exist krte hai
        else{
            newNode->next = head;
            head = newNode;
        }
    }



// for printing the LINKED LIST
void printLinkedList(){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp= temp->next;
    }
    cout << "NULL" << endl;
}  

// void insert in Middle of LINKED LIST
void insert(int val, int pos){
    if(pos<0){
        cout << "Invalid Position\n";
        return;
    }

    if(pos==0){
        push_front(val);
        return;
    }

    // creating new Node temp
    Node* temp = head;
    for(int i=0; i<pos-1; i++){
        temp= temp->next;
    }
    
    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
}
};




int main(){
    List LL;

    LL.push_front(3);
    LL.push_front(2);
    LL.push_front(1);
    LL.insert(4,1);

    LL.printLinkedList();


    return 0;
}