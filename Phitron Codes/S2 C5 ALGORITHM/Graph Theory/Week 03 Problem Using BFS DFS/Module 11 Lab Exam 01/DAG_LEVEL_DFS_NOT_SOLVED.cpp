
// DAG DFS NOT SOLVED PATH PRINT 
// 220123, SUNDAY, 05.00 PM 

#include<bits/stdc++.h>
using namespace std;
 
 
const int N = 1e5;
int visited[N];
int level[N];
 
 
vector<int> adjList[N];
 
 
// void dfs(int src, int dist)
// {
//     visited[src] = 1;
    
//     // if(level[])
//     // level[src] = dist;
    
//     for(int adj_node: adj_list[src])
//     {
//         if(level[src] + 1 <= level[adj_node])
//         {
//             level[adj_node] = level[src] + 1;
//         }
//         if(visited[adj_node] == 0)
//         {
//             dfs(adj_node, dist+1);
//         }
//     }
// }


// void dfs(int src)
// {
//     visited[src] = 1;

//     for(int adj_node: adj_list[src])
//     {
//         if(visited[adj_node]==0)
//         {
//             level[adj_node] = level[src] + 1;
//             dfs(adj_node);
//         }
//     }
// }

// void dfs(int src)
// {
//         visited[src] = 1;
//         for(int adjNode : adjList[src])
//         {
//                 if(level[src] + 1 <= level[adjNode])
//                 {
//                         level[adjNode] = level[src] + 1;
//                         // parent[adjNode] = src;
//                 }
//                 if(visited[adjNode] == 0)
//                 {
//                         dfs(adjNode);
//                 }
//         }
// }

int level[N];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int cur_v = q.front();
        q.pop();
        cout << cur_v << endl;
        for (int child : g[cur_v])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = 1;
                level[child] = level[cur_v] + 1;
            }
        }
    }
}

/*

8 10 
1 2 
2 3 
2 4
3 5 
5 4 
4 6 
6 8 
8 7 
1 8 
4 7 

4 4 
1 2 
2 3 
2 4 
1 3 

*/
 
 
int main(){
    int nodes, edges;
    cin >> nodes >> edges;
 
 
    for(int i = 0; i < edges; i++){
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
    }
 
 
    int src = 1;
    // level[src] = 0;
 
    dfs(src);
 
 
    for(int i = 1; i <=nodes; i++){
        cout << "node " << i << " -> distance from source: " << level[i] << endl;
    }
}