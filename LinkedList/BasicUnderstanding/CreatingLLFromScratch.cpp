#include<iostream>
using namespace std;

// creating class
class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int val){
        data = val;
        next = NULL;
    }
};

// for single linked List creating class
class List{
    Node* head;
    Node* tail;

public: 
List(){
    head = tail = NULL; 
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

void push_back(int val){
    // creating a new Node
    Node* newNode = new Node(val);
    // if linkedlist is already empty then it will point to only one node
    if(head == NULL){
        head = tail = newNode;
    }
    else{
        // if element is already exist in linkeList
        tail->next = newNode;
        tail=newNode;
    }
}

void pop_front(){
    // if LL is empty or not
    if(head == NULL){
        cout << "LL is empty \n";
        return;
    }

    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;

}

void pop_back(){
    // if LL is empty or not
    if(head == NULL){
        cout << "LL is empty\n";
        return ;
    }

    // temp referring to head
    Node* temp = head;
    // for prev node of tail
    while(temp->next != tail){
        temp = temp->next;
    }
    temp->next = NULL;
    delete tail;
    tail = temp;
}

// printing function for linkedList
void printLL(){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << "->" ;
        temp=temp->next;
    }
    cout << "NULL" << endl;
}
};

int main(){
    List LL;
    // pushing value in LL
    LL.push_front(1);
    LL.push_front(2);
    LL.push_front(4);

    LL.push_back(6); 
    
    LL.pop_front();
    LL.pop_back();

    // calling printing function
    LL.printLL();
    
    return 0;
}