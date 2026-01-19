#include<iostream>
using namespace std;

// creating node class
class Node {
public :
     int data;
     Node* next; 

    //  constructor
     Node(int val){
        data = val;
        next = NULL; 
     }
};

// creating one single link list class
class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = tail = NULL;
    }
 
    void push_front(int val){
        Node* newNode = new Node(val); // dynamic
        if(head == NULL){ //if LL is empty
            head = tail = newNode;
            return;
        }
        else{  // newNode ke next pointer 
            newNode->next = head;
            head = newNode;
        }
    }
// Printing LINKED LIST
void printLL(){
    Node* temp = head;

    while(temp != NULL){
    cout << temp->data << "->"; //printing out value of data in temp
    temp = temp->next; //increasing temp to next
    }
    cout << "NULL" << endl; //printing the next line 
  }
};


int main(){
    List LL;
// pushing value in LL 
    LL.push_front(1);
    LL.push_front(2);
    LL.push_front(3);

    // calling print linkedlist function
    LL.printLL();

    return 0;
}