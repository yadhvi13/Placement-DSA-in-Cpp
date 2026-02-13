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

// Reverse linked list
Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;

    while (curr != NULL) {
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    return prev;
}

// Check palindrome
bool isPalindrome(Node* head) {

    if (head == NULL || head->next == NULL)
        return true;

    Node* slow = head;
    Node* fast = head;

    // Find middle
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse second half
    Node* secondHalf = reverseList(slow);

    Node* firstHalf = head;

    // Compare
    while (secondHalf != NULL) {
        if (firstHalf->data != secondHalf->data)
            return false;

        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }

    return true;
}

// Print list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    // Example: 1 -> 2 -> 2 -> 1
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);

    cout << "Linked List: ";
    printList(head);

    if (isPalindrome(head))
        cout << "It is a Palindrome" << endl;
    else
        cout << "Not a Palindrome" << endl;

    return 0;
}
