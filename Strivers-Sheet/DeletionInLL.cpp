#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};



// Display Linked List
void print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* removeshead(Node* head){
    if(head == NULL){
        return head;
    }

    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

Node* removeTail(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* temp = head;

    while(temp->next->next != NULL){
        temp = temp->next; 
    }
    free(temp->next);

    temp->next = NULL;

    return head;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    // Creating the linked list manually
    Node* head = new Node(1, nullptr);
    head->next = new Node(2, nullptr);
    head->next->next = new Node(3, nullptr);
    head->next->next->next = new Node(4, nullptr);
    head->next->next->next->next = new Node(5, nullptr);

    print(head);   



    head = removeshead(head);
    // print(head);

    head = removeTail(head);
    print(head);

    return 0;

}