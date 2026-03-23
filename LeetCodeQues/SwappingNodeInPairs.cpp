#include <iostream>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to swap nodes in pairs
ListNode* swapPairs(ListNode* head) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;

    ListNode* prev = dummy;

    while (prev->next && prev->next->next) {
        ListNode* first = prev->next;
        ListNode* second = prev->next->next;

        // Swapping
        first->next = second->next;
        second->next = first;
        prev->next = second;

        // Move forward
        prev = first;
    }

    return dummy->next;
}

// Function to insert nodes
ListNode* insert(ListNode* head, int val) {
    if (!head) return new ListNode(val);
    
    ListNode* temp = head;
    while (temp->next) temp = temp->next;
    
    temp->next = new ListNode(val);
    return head;
}

// Function to print list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    ListNode* head = NULL;

    // Example: 1 2 3 4
    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);

    cout << "Original List: ";
    printList(head);

    head = swapPairs(head);

    cout << "After Swapping: ";
    printList(head);

    return 0;
}