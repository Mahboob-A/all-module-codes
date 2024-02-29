/*  
Mod date: 030123, Tuesday
Practice Date: 240123, Tuesday, 08.00 am 

Link: https://docs.google.com/document/d/1Dle7J84c41qr5w4dPBWazLmIyEaQuQETyClcUc-86F4/edit
QS 1 : Path print with dfs 
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3;
vector<int>adjList[N];
vector<int>visited(N, 0);
vector<int>parent(N, -1);
vector<int>dist(N, INT_MAX);
int n, m, source;

void dfs(int src)
{
        visited[src] = 1;
        for(int adjNode : adjList[src])
        {
                if(dist[src] + 1 <= dist[adjNode])
                {
                        dist[adjNode] = dist[src] + 1;
                        parent[adjNode] = src;
                }
                if(visited[adjNode] == 0)
                {
                        dfs(adjNode);
                }
        }
} 

void path_print(int dest_node)
{
        int curr_node = dest_node;
        vector<int>path;
        while(curr_node != -1)
        {
                path.push_back(curr_node);
                curr_node = parent[curr_node];
        }
        reverse(path.begin(), path.end());

        for(int node : path)
                cout<<node<<" ";
        cout<<endl;
}

/*  
6 6 
1 2
1 3
2 4
3 4
3 5
3 6


7 9 
1 2
1 4
2 3
2 4
2 5
2 7
3 6
5 6
7 6

*/

int main() {

        cin>>n>>m;
        for(int i=0; i<m; i++)
        {
                int u, v;
                cin>>u>>v;
                adjList[u].push_back(v);
                adjList[v].push_back(u);
        }

        source = 1;
        dist[source] = 0;
        dfs(source);
        path_print(n);

        for(int i=1; i<=n; i++)  
        {
                cout<<"Distance of "<<i<<" is "<<dist[i]<<endl;
        }
        cout<<endl;


        return 0;
}