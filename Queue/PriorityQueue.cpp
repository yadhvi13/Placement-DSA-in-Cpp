#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
};

struct cmp {
    bool operator()(Node a, Node b) {
        return a.val > b.val; // Min heap
    }
};

int main() {
    priority_queue<Node, vector<Node>, cmp> pq;
    pq.push({10});
    pq.push({5});
    pq.push({20});

    while (!pq.empty()) {
        cout << pq.top().val << " ";
        pq.pop();
    }
    return 0;
}
