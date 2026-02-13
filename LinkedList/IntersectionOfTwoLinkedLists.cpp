#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to find intersection node
Node* getIntersectionNode(Node* headA, Node* headB) {

    if (headA == NULL || headB == NULL)
        return NULL;

    Node* p1 = headA;
    Node* p2 = headB;

    while (p1 != p2) {

        p1 = (p1 == NULL) ? headB : p1->next;
        p2 = (p2 == NULL) ? headA : p2->next;
    }

    return p1;   // Either intersection node or NULL
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    // Creating common intersection part: 8 -> 4 -> 5
    Node* common = new Node(8);
    common->next = new Node(4);
    common->next->next = new Node(5);

    // List A: 4 -> 1 -> 8 -> 4 -> 5
    Node* headA = new Node(4);
    headA->next = new Node(1);
    headA->next->next = common;

    // List B: 5 -> 6 -> 1 -> 8 -> 4 -> 5
    Node* headB = new Node(5);
    headB->next = new Node(6);
    headB->next->next = new Node(1);
    headB->next->next->next = common;

    cout << "List A: ";
    printList(headA);

    cout << "List B: ";
    printList(headB);

    Node* intersection = getIntersectionNode(headA, headB);

    if (intersection != NULL)
        cout << "Intersection at node with value: " << intersection->data << endl;
    else
        cout << "No intersection found" << endl;

    return 0;
}
