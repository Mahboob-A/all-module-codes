


// #include <bits/stdc++.h>
// using namespace std;

// const int N = 102;
// vector<int>adjList[N];
// vector<int>visited(N);
// stack<int>st;
// vector<int>dist(N);
// vector<int>indegree(N, 0);
// vector<int>parent(N, -1);
// int n, m, len, begin1, selected_path;

// using namespace std;

// path print on DAG in weighted graph 

#include <bits/stdc++.h>
#define N 100005
using namespace std;


vector<pair<int, int>> adjList[N];
int dist[N];
int n, m;

void dijkstra(int source) {
    for (int i = 1; i <= n; i++) dist[i] = -1e9;
    dist[source] = 0;
    priority_queue<pair<int, int>> q;
    q.push({0, source});
    while (!q.empty()) {
        int u = q.top().second;
        q.pop();
        for (auto v : adjList[u]) {
            int to = v.first, w = v.second;
            if (dist[to] < dist[u] + w) {
                dist[to] = dist[u] + w;
                q.push({-dist[to], to});
            }
        }
    }
}

vector<int> path;
void printPath(int u) {
    if (u == -1) return;
    path.push_back(u);
    int maxNext = -1;
    for (auto v : adjList[u]) {
        int to = v.first, w = v.second;
        if (dist[to] == dist[u] + w && (maxNext == -1 || to > maxNext)) {
            maxNext = to;
        }
    }
    printPath(maxNext);
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adjList[u].push_back({v, w});
    }

    
    int source = -1;
    for (int i = 1; i <= n; i++) {
        dijkstra(i);
        int dest = i;
        for (int j = 1; j <= n; j++) {
            if (dist[j] > dist[dest]) dest = j;
        }
        if (dist[dest] > dist[source]) {
            source = dest;
        }
    }
    dijkstra(source);
    int dest = source;
    for (int i = 1; i <= n; i++) {
        if (dist[i] > dist[dest]) dest = i;
    }
    cout << "Longest path distance: " << dist[dest] << endl;
    cout << "Longest path: ";
    path.clear();
    printPath(dest);
    reverse(path.begin(), path.end());
    for (int i : path) cout << i << " ";
    cout << endl;
    return 0;
}

