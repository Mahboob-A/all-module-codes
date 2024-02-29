


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
#define INT_INF 1e8
const int N = 1e5+100;


vector<vector<int>>adjList;
int dist[N];
int n, m;

bool bellman_ford(int src)
{
        for(int i=1; i<=n; i++)
                dist[i] = INT_MAX;
        
        dist[src] = 0;

        for(int i=0; i<n-1; i++)
        {
                for(int j=0; j<m; j++)
                {
                        int u = adjList[j][0];
                        int v = adjList[j][1];
                        int w = adjList[j][2];

                        if(dist[u] != INT_MAX && dist[u] + w < dist[v])
                        {
                                dist[v] = min(dist[v], dist[u] + w);
                        }
                }
        }

        bool cycle = false;
        for(int i=0; i<m; i++)
        {
                int u = adjList[i][0];
                int v = adjList[i][1];
                int w = adjList[i][2];

                if(dist[u] != INT_MAX && dist[u] + w < dist[v])
                {
                        cycle =true;
                }
        }

        return cycle;
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
                adjList.pb({u, v, w});
        }

        int src = 1;
        bool negative_cycle = bellman_ford(src);

        if(negative_cycle)
                cout<<"The grpah has negative cycle"<<endl;
        else 
        {
                for(int i=1; i<=n; i++)
                {
                        cout<<"from "<<src<<" i : "<<dist[i]<<endl;
                }
                cout<<endl;
        }

        return 0;
}