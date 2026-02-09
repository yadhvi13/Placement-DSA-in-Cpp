#include <iostream>
#include <queue>
using namespace std;

void reverseQueue(queue<int>& q) {
    // Base case
    if (q.empty())
        return;

    // Step 1: Remove front element
    int x = q.front();
    q.pop();

    // Step 2: Reverse remaining queue
    reverseQueue(q);

    // Step 3: Insert element at rear
    q.push(x);
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
