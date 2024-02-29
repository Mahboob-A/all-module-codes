

// dag unweighted longest path print from source to dest  
#include <bits/stdc++.h>
using namespace std;
#define N 1002;
#define n 102 
#define m 102 
vector<int> adjList[N];
int src, dest;
int dist[N], path[N];
bool visited[N];

void topsort() 
{
    queue<int> q;
    for (int node = 1; node <= n; node++)
    {
        if (!visited[node]) 
        {
                q.push(node);
        }
    }
        
    while (!q.empty()) 
    {
        int headNode = q.front();
        q.pop();
        for (int node = 0; node < adjList[headNode].size(); node++)
        {
            int adjNode = adjList[headNode][node];
            visited[adjNode] = true;
            q.push(adjNode);
        }
    }
}

void dijkstra(int src) 
{
    memset(dist, 0x3f, sizeof(dist));   // setting to max 
    dist[src] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push({0, src});

    while (!pq.empty()) 
    {
        int headNode = pq.top().second;
        pq.pop();
        for (int node = 0; node < adjList[headNode].size(); node++) 
        {
            int adjNode = adjList[headNode][node];
            if (dist[adjNode] > dist[headNode] + 1) 
            {
                dist[adjNode] = dist[headNode] + 1;
                pq.push({-dist[adjNode], adjNode});
                path[adjNode] = headNode;
            }
        }
    }
}

// dfs find longest distance
void processLongestPath2(int src)
{
    visited[src] = 1;
    dist[src] = 0;
 
    for(int adjNode : adjList[src])
    {
        if(!visited[adjNode])
        {
            processLongestPath2(adjNode);
        }
        // use this condition or below condition
        // dist[src] = max(dist[src] , 1 + dist[adjNode]);
 
        // use this condition 
        if(dist[adjNode] + 1 > dist[src])
        {
                dist[src] = dist[adjNode] + 1;
                // parent[adjNode] = src;
        }
    }
}

int main() {

    cin >> n >> m;
    for (int node = 0; node < m; node++) {
        cin >> headNode >> adjNode;
        adjList[headNode].push_back(adjNode);
    }

        topsort();
    cin >> src >> dest;

        int curr = dest;
        // while(curr!=src)
        // {
        //         path.push_back(curr);
        //             if(curr)
        //         curr = path[curr];
        // }

    dijkstra(src);
    cout << dist[dest] << endl;
    vector<int> res;
    for (int node = dest; node != src; node = path[node])
    {
        res.push_back(node);
    }
    res.push_back(src);

    reverse(res.begin(), res.end());

    for (int node = 0; node < res.size(); node++) 
    {
        cout << res[node] << " ";
    }
    return 0;
}
