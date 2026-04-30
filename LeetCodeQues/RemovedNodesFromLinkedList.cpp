#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Reverse linked list
ListNode* reverse(ListNode* head) {
    ListNode* prev = NULL;
    while (head) {
        ListNode* nextNode = head->next;
        head->next = prev;
        prev = head;
        head = nextNode;
    }
    return prev;
}

ListNode* removeNodes(ListNode* head) {
    head = reverse(head);

    int maxVal = head->val;
    ListNode* curr = head;

    while (curr && curr->next) {
        if (curr->next->val < maxVal) {
            curr->next = curr->next->next;
        } else {
            curr = curr->next;
            maxVal = curr->val;
        }
    }

    return reverse(head);
}