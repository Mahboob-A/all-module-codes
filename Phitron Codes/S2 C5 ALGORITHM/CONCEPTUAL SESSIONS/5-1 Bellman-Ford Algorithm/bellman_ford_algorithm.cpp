/*  
Conceptual session: 5-1 
Date: 120123, Thursday
Watch date: 070223, Tuesday, 07.00 pm 

Bellman-Ford algo.
*/



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
//priority_queue<int, vec, greater<int>>q;
vecPii adjList[N];
int visited[N];
int parent[N];
int dist[N];
int n, m;

void bellman_ford(int src)
{
        for(int i=1; i<=n; i++)
        {
                dist[i] = INT_INF;
        }
        dist[src] = 0;

        bool cycle = false;
        for(int i=1; i<=n; i++)  // checking cycle 
        {
                // if the graph does not update in a iteration, 
                // that means the graph if fully updated, so we can break the loop 
                // but the loop will go on continue update if the graph has a cycle. 
                // so, if the graph has cycle, update bool will always be true so it would not break the loop,
                // but once we see the dist is not being updated then the graph does not 
                // have any cycle so break the loop 
                bool update = false;  

                cout<<"i: "<<i<<endl;
                for(int node=1; node<=n; node++)
                {
                        cout<<"Node: "<<node<<endl;
                        for(auto adj : adjList[node])
                        {
                                int weight = adj.second;
                                int adjNode = adj.first;
                                cout<<"      adjNode: "<<adjNode<<endl;
                                if(dist[node] + weight  < dist[adjNode])
                                {
                                        dist[adjNode] = dist[node] + weight;
                                        cout<<"         adjNode dist: "<<dist[adjNode]<<endl;
                                        update = true;
                                        if(i==n)
                                        {
                                                cycle = true;
                                        }
                                }
                        }
                }
                if(!update)
                        break;
        }

        if(cycle)
                cout<<"the graph has cycle"<<endl;
        else
                cout<<"the grpah does not have any cycle"<<endl;
}

// we can also check cycle checking each edge of nodes 
void check_cycle()
{
        for(int node=1; node<=n; node++)
        {
                for(auto adj : adjList[node])
                {
                        // if the graph has a negative cycle, 
                        // then the weight will be in negative, so dist[node] + weight will be less than the dist[node]
                        if(dist[node] + adj.second < dist[node] )
                        {
                                cout<<"the graph has cycle"<<endl;
                                return;
                        }
                }
        }
        cout<<"the grpah does not have any cycle"<<endl;
}

/*  

// no negative cycle
7 10 
1 2 6
1 3 5
1 4 5 
4 3 -2 
3 2 -2 
2 5 -1 
3 5 1 
4 6 -1 
5 7 3 
6 7 3 

// negative cycle 
7 10 
2 1 -10
1 3 5
1 4 5 
4 3 -2 
3 2 -2 
2 5 -1 
3 5 1 
4 6 -1 
5 7 3 
6 7 3

*/

int main(){


        cin>>n>>m;
        for(int i=0; i<m; i++)
        {
                int u, v, w;
                cin>>u>>v>>w;
                adjList[u].pb({v, w});
                // adjList[v].pb({u, w});
        }
        int src = 1;
        bellman_ford(src);

        check_cycle();

        for(int i=1; i<=n; i++)
        {
                cout<<dist[i]<<" ";
        }
        cout<<endl;

        return 0;
}