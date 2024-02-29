
// 080223, Tuesday, 11.00 am 
// week 05 : bellman_ford 


#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
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

bool bellmanFord(int src)
{       
        for(int i=0; i<=n; i++) 
        {
                dist[i] = INT_MAX;
        }
        
        dist[src] = 0;
        
        bool negative_cycle = false;
        for(int i=0; i<=n; i++)
        {
                for(int node=0; node<=n; node++)
                {
                        for(pii adjNode : adjList[node])
                        {
                                int u = node;
                                int v = adjNode.first;
                                int w = adjNode.second;

                                if(dist[u] + w < dist[v])
                                {
                                        if(i == n)
                                        {
                                                negative_cycle = true;
                                        }
                                        dist[v] = dist[u] + w;
                                }
                        }
                }
        }
        return negative_cycle;
}


/*  
// this is a directed graph but 1-->3 and 3-->1 has both directed edge. 
// this input has neagitve weight but doesnot contain any negative cycle 

4 8 
1 2 3
3 2 5
1 3 2 
3 1 1 
1 4 2 
0 2 4 
4 3 -3
0 1 -1 

// this is a directed graph but 1-->3 and 3-->1 has both directed edge. 
// this input doesnot contains a negative cycle in 1-->3 3--->1 edge 
// this if a single negative edge that is both way directed in any directed graph, if the graph contains any cycle, the graph could end up with a negative cycle 
4 8 
1 2 3
3 2 5
1 3 2 
3 1 1 
1 4 2 
0 2 4 
4 3 -4 
0 1 -1 

*/

int main(){
	
	cin>>n>>m;
	for(int i=0; i<m; i++)
	{
		int u, v, w;
		cin>>u>>v>>w;
		adjList[u].pb({v, w});
                // in general we only use the algo if the graph is directed 
                // we can use undirected graph if it does not contain ANY NEGATIVE WEIGHT 
		// adjList[v].pb({u, w}); 
	}
        
        int src = 0;

        bool has_cycle = bellmanFord(src);
        if(has_cycle)
                cout<<"The graph has negative cycle"<<endl;
        else 
        {
                for(int i=0; i<=n; i++)
                {
                        cout<<"From "<<src<<" to: "<<i<<" : "<<dist[i]<<endl;
                }
                cout<<endl;
        }

	return 0;
}