
// all pair shortest path in unweighted graph using bfs (either directed or undirected)
// 070223, Tuesday, 07.00 pm 

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int MAXN = 1005;
vector<int> adj[MAXN];
int dist[MAXN][MAXN];
bool visited[MAXN];

void bfs(int start) 
{
    queue<int> q;
    q.push(start);
    visited[start] = true;
    dist[start][start] = 0;

    while (!q.empty()) 
    {
        int u = q.front();
        q.pop();
        for (int i = 0; i < adj[u].size(); i++) 
        {
            int v = adj[u][i];
            if (!visited[v]) 
            {
                q.push(v);
                visited[v] = true;
                dist[start][v] = dist[start][u] + 1;
            }
        }
    }
}


/*  

4 5
1 3 -2
3 4 2
4 2 -1
2 1 4 
2 3 3


4 5
1 3 
3 4
4 2 
2 1
2 3 

*/

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) 
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        // adj[y].push_back(x);   // this code will work for both directed or undirected and unweighted grpah 
    }  

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++)
        {
            dist[i][j] = 1e9;
        }
    }

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            visited[j] = false;
        }
        bfs(i);
    }

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            cout << i << " to " << j << " : " << dist[i][j] << endl;
        }
    }

    return 0;
}
