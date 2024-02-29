
/*  
Module date: 100123, Tuesday
Watch date: 300123, Monday
Code write date: 020223, Thursday, 07.00 pm 

Week 05 : Bellman-Ford Algorithm 
sssp path print  

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

run loop till n-1 iteration. 
take a src and run bellmanFord.
run a while loop tracing parent beginning from the destination node. 
push_back the traceback nodes from parent array 
if the traceback node is == src, break 
reverse the vector 
print the vector
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
//priority_queue<pii, vecPii, greater<pii>>q;
vecPii adjList[N];
int visited[N];
int parent[N];
int dist[N];
int n, m;


void printPath(int src, int dest)
{
        if(dist[dest] == INT_INF)
        {
                // in this case, there might be more than one connected components in the 
                // graph and we can not go to source to dest node 
                cout<<"No path from "<<src<<" to "<<dest<<" node"<<endl;
                return;
        }
        int curr_node = dest;
        vec path;
        while(true)
        {
                path.pb(curr_node);
                curr_node = parent[curr_node];
                if(curr_node == src)
                {
                        path.pb(curr_node);   // taking the src node in the path 
                        break;
                }
                        
        }

        reverse(path.begin(), path.end());

        for(int node : path)
        {
                cout<<node<<" ";
        }
        cout<<endl;

        for(int i=1; i<=n; i++)
        {
                cout<<"dist of "<<i<<" is -> "<<dist[i]<<endl;
        }
        cout<<endl;
}

void bellman_ford(int src, int dest)
{
        for(int i=1; i<=n; i++)
        {
                dist[i] = INT_INF;
        }

        dist[src] = 0;

        for(int i=1; i<=n-1; i++)
        {
                for(int node=1; node<=n; node++)
                {
                        for(auto adjNode : adjList[node])
                        {
                                int u = node;
                                int v  = adjNode.f;
                                int w = adjNode.s;
                                
                                // cout<<"NODE: "<<node<<endl;
                                // cout<<" adjnode: "<<adjNode.f<<endl;

                                if(dist[u] + w < dist[v])
                                {
                                        dist[v] = dist[u] + w;
                                        parent[v] = u;
                                }
                        }
                }
        }

        printPath(src, dest);


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

        int src = 1;
        int dest = 5;
        bellman_ford(src, dest);

        return 0;
}