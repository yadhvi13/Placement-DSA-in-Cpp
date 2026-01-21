#include <bits/stdc++.h>
using namespace std;

// creating a single node
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// creating linked list
class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
            return;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }


// detect cycle in LINKED LIST
bool isCycle(){
    Node* slow = head;
    Node* fast = head;

    while(fast!= NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) return true;
    }
    return false;
}

Node* detectCycle(){
    Node* slow = head;
    Node* fast = head;

    while(fast!= NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            break;
        }
    }

    // no cycle
    if (fast == NULL || fast->next == NULL)
            return NULL;


    slow = head;
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

    // Printing LINKED LIST
    void printLL() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    List LL;   // ✅ correct object creation

    LL.push_front(3);
    LL.push_front(2);
    LL.push_front(1);

    if(LL.isCycle()){
        cout << "cycle detected \n";
    }
    else{
        cout << "no cycle\n";
    }
     
    Node* start = LL.detectCycle();
    if (start)
        cout << "Cycle starts at node with value: " << start->data << endl;
    else
        cout << "No cycle start node\n";
        
    LL.printLL();
    return 0;
}
