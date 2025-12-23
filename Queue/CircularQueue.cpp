#include <bits/stdc++.h>
using namespace std;

class CircularQueue {
    int* arr;
    int front, rear, size;

public:
    CircularQueue(int n) {
        size = n;
        arr = new int[n];
        front = rear = -1;
    }

    bool enqueue(int x) {
        if ((rear + 1) % size == front)
            return false;

        if (front == -1)
            front = 0;

        rear = (rear + 1) % size;
        arr[rear] = x;
        return true;
    }

    bool dequeue() {
        if (front == -1)
            return false;

        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % size;

        return true;
    }

    int Front() {
        if (front == -1) return -1;
        return arr[front];
    }
};

int main() {
    CircularQueue q(3);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    q.enqueue(40);
    cout << q.Front();
    return 0;
}
