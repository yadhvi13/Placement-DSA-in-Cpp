#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
private:
    ListNode* head;

public:
    Solution(ListNode* head) {
        this->head = head;
    }
    
    int getRandom() {
        int result = head->val;
        ListNode* curr = head->next;
        int i = 2;

        while (curr != NULL) {
            if (rand() % i == 0) {
                result = curr->val;
            }
            curr = curr->next;
            i++;
        }
        return result;
    }
};

int main() {
    // Create linked list: 1 -> 2 -> 3
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);

    Solution obj(head);

    // Print random values
    for(int i = 0; i < 10; i++) {
        cout << obj.getRandom() << endl;
    }

    return 0;
}