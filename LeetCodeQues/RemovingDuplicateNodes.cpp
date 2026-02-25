#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

ListNode* deleteDuplicates(ListNode* head) {
    if(head == NULL) return head;

    ListNode* temp = head;

    while(temp->next != NULL) {
        if(temp->val == temp->next->val) {
            temp->next = temp->next->next;
        } else {
            temp = temp->next;
        }
    }

    return head;
}

void printList(ListNode* head) {
    while(head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
}

int main() {
    // Creating linked list: 1->1->2->3->3
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(3);

    head = deleteDuplicates(head);

    printList(head);

    return 0;
}