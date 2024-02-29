






/*  
Week 07 : Knapsack 
Module 26: Lab Class 07 
Mod date: 310123, Tuesday
Watch date: 080523, Monday, 12.00 pm 

26-5: Longest Path In A DAG  || Tabulation 
*/


#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define ll long long 
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define INT_INF 1e9 
const int N = 1e5+100;
vector<int>v_ans;
vector<pii>allSrc;
pii src, destination;
//priority_queue<pii, vecPii, greater<pii>>q;
vecPii adjList[N];
int visited[N];
int parent[N];
int dist[N];


vector<int>parentList[N];
int dp[N];

int longestPathDAG(int root, int node)
{
        // 1. base case 
        if(node == root)
        {       
                return 0; // as root node has level 0 
        }

        // 2. if ans is already calculated, return the answer 
        if(dp[node] != -1)
                return dp[node];

        // 3. Calculate the answer from smaller sub - problems 
        // loop over all the parents of node and take the maximum of their cost 
        int ans = 0;
        for(int parent_node : parentList[node])
        {
                int parent_dist = longestPathDAG(root, parent_node);
                ans = max(ans, parent_dist);
        }

        dp[node] = ans + 1;     // add + 1 to ans as it is unweighted graph 
        return dp[node]; 
         
}

/*

4 4

1 3 
3 4 
1 4
4 2

1 2


7 8 

1 4
1 3
3 6
3 5
5 4
5 7 
4 2
7 2

1 2

*/

int main(){

        cout<<"Input number of nodes and number of edges : "<<endl;
        int n, m;
        cin >>n >> m;

        // we will take input as reverse. In adjList we used to store the parent -- > to child edge. 
        // now we will store child -- > to parent edge || any nore v  will hold all of its parents 
        cout<<"Input the graph : "<<endl;
        for(int i=1; i<=m; i++)
        {
                int u, v;       // There is edge between (u -- > v) || v is child and u is parent so push u in V's list 
                cin >> u >> v;
                parentList[v].pb(u);
        }

        for(int i=1; i<=n; i++)
        {
                dp[i] = - 1;
        }

        cout<<"Input the root node and target node : "<<endl;
        int root, target_node; 
        cin >> root >> target_node;

        cout << endl;

        int ans = longestPathDAG(root, target_node);
        cout << "The longest distance from root node "<<root<<" to target node "<<target_node<<" is : "<< ans << endl<<endl;
        
        

        return 0;
}


// Shortest Path in a DAG using topo sort 

/*
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;
const int INF = 0x3f3f3f3f;

vector<pair<int, int>> adj[MAXN];
int dist[MAXN];
bool visited[MAXN];
stack<int> topoSort;

void dfs(int u) {
    visited[u] = true;
    for(auto it : adj[u]) {
        int v = it.first;
        if(!visited[v]) {
            dfs(v);
        }
    }
    topoSort.push(u);
}

void shortestPathDAG(int source, int n) {
    // Perform topological sort to get the vertices in order
    for(int i=1; i<=n; i++) {
        if(!visited[i]) {
            dfs(i);
        }
    }

    // Initialize all distances to infinity except the source
    for(int i=1; i<=n; i++) {
        dist[i] = INF;
    }
    dist[source] = 0;

    // Compute shortest path from source to all other vertices
    while(!topoSort.empty()) {
        int u = topoSort.top();
        topoSort.pop();
        if(dist[u] != INF) {
            for(auto it : adj[u]) {
                int v = it.first;
                int w = it.second;
                if(dist[u] + w < dist[v]) {
                    dist[v] = dist[u] + w;
                }
            }
        }
    }
}

int main() {
    int n, m, source;
    cin >> n >> m >> source;
    for(int i=1; i<=m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back(make_pair(v, w));
    }

    shortestPathDAG(source, n);

    // Print shortest distances from source to all vertices
    for(int i=1; i<=n; i++) {
        cout << "Shortest distance from source to " << i << " is " << dist[i] << endl;
    }
    return 0;
}


*/

/*
#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100005;
const int INF = 0x3f3f3f3f;

vector<pair<int, int>> adj[MAXN];
int dist[MAXN];

void shortestPathDAG(int source, int n) {
    // Initialize all distances to infinity except the source
    for(int i=1; i<=n; i++) {
        dist[i] = INF;
    }
    dist[source] = 0;

    // Perform topological sort using DFS
    stack<int> topo_order;
    bool visited[n+1] = {false};
    for(int i=1; i<=n; i++) {
        if(!visited[i]) {
            dfs(i, visited, topo_order);
        }
    }

    // Compute shortest path from source to all other vertices
    while(!topo_order.empty()) {
        int u = topo_order.top();
        topo_order.pop();
        for(auto it : adj[u]) {
            int v = it.first;
            int w = it.second;
            if(dist[u] != INF && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
            }
        }
    }
}

void dfs(int u, bool visited[], stack<int>& topo_order) {
    visited[u] = true;
    for(auto it : adj[u]) {
        int v = it.first;
        if(!visited[v]) {
            dfs(v, visited, topo_order);
        }
    }
    topo_order.push(u);
}

int main() {
    int n, m, source;
    cin >> n >> m >> source;
    for(int i=1; i<=m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back(make_pair(v, w));
    }

    shortestPathDAG(source, n);

    // Print shortest distances from source to all vertices
    for(int i=1; i<=n; i++) {
        cout << "Shortest distance from source to " << i << " is " << dist[i] << endl;
    }
    return 0;
}

*/