
/*  
Module date: 100123, Tuesday
Watch date: 300123, Monday
Code write date: 020223, Thursday, 07.00 pm 

Week 05 : Bellman-Ford Algorithm 
find connected components in directed negative weighted graph

Complexity: 
TC: 
avarage: O(n * m)
optimal: O(n^2)
worst: O(n^3)

SC: 
O(n)

I am trying to find connected components in a directed negative weighted graph 
if the graph is undirected positive weighted, I can use disjoint set union or simple bfs or dfs to find connected components
as the graph is directed, I cannot use disjoint set as disjoint set cannot be applied in directed graph. 


*/
// I am trying to find the connected components using Bellman ford. 
// for this I can check if the dist is INT_INF then send the node to algo and count++ 


#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define INT_INF 1e9 
const int N = 1e5+100;
vector<int>ans;
vector<pii>allSrc;
pii src, destination;
//priority_queue<pii, vecPii, greater<pii>>q;
vecPii adjList[N];
int visited[N];
int parent[N];
int dist[N];
int n, m;

void connected_components_bellmanFord()
{
        for(int i=1; i<=n; i++)
        {
                dist[i] = INT_INF;
        }

        // dist[src] = 0;

        bool negative_cycle = false;
        for(int i=1; i<=n; i++)
        {
                for(int node=1; node<=n; node++)
                {
                        for(auto adjNode : adjList[node])
                        {
                                if(dist[node] + adjNode.s < dist[adjNode.f])
                                {
                                        dist[adjNode.f] = dist[node] + adjNode.s;
                                        if(i==n)
                                        {
                                                negative_cycle = true;
                                        }
                                }
                        }
                }
        }

        if(negative_cycle)
                cout<<"yes"<<endl;
        else 
                cout<<"no"<<endl;

}


void dfs(int src)
{
        visited[src] = 1;
        for(auto adjNode : adjList[src])
        {
                if(visited[adjNode.f] == 0)
                {
                        dfs(adjNode.f);
                }
        }
}

/*  

7 8 
1 2 2
2 3 4
3 6 3
2 4 2
3 5 -1
4 5 -1
1 7 6 
7 5 -2


// two connected components negative cycle from node 8 to 10 

10 11
1 2 2
2 3 4
3 6 3
2 4 2
3 5 -1
4 5 -1
1 7 6 
7 5 -2
8 9 2
9 10 -3
10 8 -5

// two connected components negative cycle 2 3 5 4 2 

10 11
1 2 2
2 3 4
3 6 3
3 5 -1
5 4 -1
4 2 -10
1 7 6 
7 5 -2
8 9 2
9 10 -3
8 10 -5

// two connected components without any cycle 

10 10 
1 2 2
2 3 4
3 6 3
2 4 2
3 5 -1
4 5 -1
1 7 6 
7 5 -2
8 9 2
8 10 3 

*/


int main(){

        cin>>n>>m;
        for(int i=0; i<m; i++)
        {
                int u, v, w;
                cin>>u>>v>>w;
                adjList[u].pb({v, w});
        }

        int count = 0;
        for(int i=1; i<=n; i++)
        {
                if(visited[i] == 0)
                {
                        count++;
                        dfs(i);
                }
        }

        cout<<count<<endl;
        // connected_components_bellmanFord();

        return 0;
}
