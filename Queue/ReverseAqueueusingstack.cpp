#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseQueue(queue<int>& q) {
    stack<int> s;

    // Step 1: Push all elements into stack
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    // Step 2: Pop from stack and push back to queue
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    reverseQueue(q);

    cout << "Reversed Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
