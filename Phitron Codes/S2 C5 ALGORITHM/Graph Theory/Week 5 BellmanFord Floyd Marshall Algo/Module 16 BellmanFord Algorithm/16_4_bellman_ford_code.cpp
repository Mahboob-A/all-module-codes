/*  
Module date: 100123, Tuesday
Watch date: 300123, Monday
Code write date: 020223, Thursday, 10.00 am 

Week 05 : Bellman-Ford Algorithm 
16 - 4: Bellman-Ford Algorithm code 

Complexity: 
TC: 
avarage: O(n * m)
optimal: O(n^2)
worst: O(n^3)

SC: 
O(n)

Iterate over n-1 times on the all over the nodes and relax each node. 
outer loop is O(n) and the inner loop is o(E) as the inner loop will iterate over all the nodes 
and fetch all of its adjacent nodes.

n-1 bar iterate kora hobe. proti iteration e graph er sob node ke select kore tar adjacent nodes 
gulo ke relax kora hobe.
*/




// 020223, Thursday, 10.00 am 

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

void bellmanFord(int src)
{       
        for(int i=1; i<=n; i++) 
        {
                dist[i] = INT_MAX;
        }
        
        dist[src] = 0;
        
        for(int i=0; i<n-1; i++)
        {
                for(int node=1; node<=n; node++)
                {
                        for(pii adjNode : adjList[node])
                        {
                                int u = node;
                                int v = adjNode.first;
                                int w = adjNode.second;

                                if(dist[u] + w < dist[v])
                                {
                                        dist[v] = dist[u] + w;
                                }
                        }
                }
        }
}


/*  
4 4 
1 2 10
2 3 -8
1 3 5
3 4 1

*/

int main(){
	
	cin>>n>>m;
	for(int i=0; i<m; i++)
	{
		int u, v, w;
		cin>>u>>v>>w;
		adjList[u].pb({v, w});
                // in general we only use the algo if the graph is directed 
		adjList[v].pb({u, w}); // we can use undirected graph if it does not contain neg cycle 
	}
        
        int src = 1;
        bellmanFord(src);

        for(int i=1; i<=n; i++)
        {
                cout<<dist[i]<<" ";
        }
        cout<<endl;


	return 0;
}




