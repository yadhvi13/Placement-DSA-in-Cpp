#include <bits/stdc++.h>
using namespace std;

class Queue {
    int* arr;
    int front, rear, size;

public:
    Queue(int n) {
        size = n;
        arr = new int[n];
        front = rear = 0;
    }

    void push(int x) {
        if (rear == size) {
            cout << "Queue Overflow\n";
            return;
        }
        arr[rear++] = x;
    }

    void pop() {
        if (front == rear) {
            cout << "Queue Underflow\n";
            return;
        }
        front++;
    }

    int getFront() {
        if (front == rear) return -1;
        return arr[front];
    }
};

int main() {
    Queue q(5);
    q.push(10);
    q.push(20);
    q.pop();
    cout << q.getFront();
    return 0;
}
