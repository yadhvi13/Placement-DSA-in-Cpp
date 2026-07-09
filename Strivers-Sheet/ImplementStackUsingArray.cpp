#include <iostream>
using namespace std;

class ArrayStack {
private:
    int arr[100];
    int topIndex;

public:
    // Constructor
    ArrayStack() {
        topIndex = -1;
    }

    // Push element
    void push(int x) {
        if (topIndex == 99) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++topIndex] = x;
    }

    // Pop element
    int pop() {
        if (topIndex == -1) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[topIndex--];
    }

    // Return top element
    int top() {
        if (topIndex == -1) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[topIndex];
    }

    // Check if stack is empty
    bool isEmpty() {
        return topIndex == -1;
    }

    // Display stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is Empty\n";
            return;
        }

        cout << "Stack: ";
        for (int i = topIndex; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ArrayStack st;

    st.push(5);
    st.push(10);
    st.push(15);

    st.display();

    cout << "Top Element: " << st.top() << endl;

    cout << "Popped Element: " << st.pop() << endl;

    st.display();

    cout << "Is Stack Empty? ";
    if (st.isEmpty())
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}