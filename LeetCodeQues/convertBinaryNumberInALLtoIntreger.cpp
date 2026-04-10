#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

int getDecimalValue(ListNode* head) {
    int result = 0;
    
    while (head != nullptr) {
        result = result * 2 + head->val;
        head = head->next;
    }
    
    return result;
}

int main() {
    // Example: 1 -> 0 -> 1 (binary 101 = 5)
    ListNode* head = new ListNode(1);
    head->next = new ListNode(0);
    head->next->next = new ListNode(1);

    cout << getDecimalValue(head) << endl; // Output: 5

    return 0;
}