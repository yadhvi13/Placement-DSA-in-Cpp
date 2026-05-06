#include <bits/stdc++.h>
using namespace std;

int networkDelayTime(vector<vector<int>>& times, int n, int k) {

    vector<pair<int,int>> adj[n + 1];

    for(auto &it : times) {
        int u = it[0];
        int v = it[1];
        int w = it[2];

        adj[u].push_back({v, w});
    }

    priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
    > pq;

    vector<int> dist(n + 1, INT_MAX);

    dist[k] = 0;
    pq.push({0, k});

    while(!pq.empty()) {

        auto top = pq.top();
        pq.pop();

        int d = top.first;
        int node = top.second;

        if(d > dist[node]) continue;

        for(auto &neighbor : adj[node]) {

            int nextNode = neighbor.first;
            int wt = neighbor.second;

            if(dist[node] + wt < dist[nextNode]) {

                dist[nextNode] = dist[node] + wt;
                pq.push({dist[nextNode], nextNode});
            }
        }
    }

    int ans = 0;

    for(int i = 1; i <= n; i++) {

        if(dist[i] == INT_MAX)
            return -1;

        ans = max(ans, dist[i]);
    }

    return ans;
}

int main() {

    vector<vector<int>> times = {
        {2,1,1},
        {2,3,1},
        {3,4,1}
    };

    int n = 4;
    int k = 2;

    cout << networkDelayTime(times, n, k);

    return 0;
}