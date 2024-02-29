//290123, sunday, 06.00 pm 
// algo, gt, week 4 exam mid term exam lightoj country roads 
// question 07 

/*  
The consept is that we will take the cost = max (dist[u], and edse cost of u - v) 
        - then check if cost < dist[adjno] 
                - dist[adjNode] = cost 
*/

#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define pb push_back
#define f first
#define s second
#define vec vector<int>
#define vii vector<pair<int, int>> 
#define pb push_back 
const int N = 550;
vii adjList[N];
vec dist(N);
vec visited(N, 0);
int n, m, T=0;

void printRes()
{
        cout<<"Case "<<++T<<": "<<endl;
        for(int i=0; i<n; i++)
        {
                if(dist[i] == INT_MAX)
                        cout<<"Impossible"<<endl;
                else
                        cout<<dist[i]<<endl;
        }
}

void dijkstr(int src)
{
        priority_queue<pii, vii, greater<pii>>pq;
        for(int i=0; i<n+1; i++)
                dist[i] = INT_MAX;

        dist[src] = 0;
        pq.push({0, src});

        while(!pq.empty())
        {
                int headNode = pq.top().second;
                int srcToU_cost = pq.top().first;

                pq.pop();

                // we can not mark visited a specific node as true 
                // as there could be multi edge in the graph, and once 
                // we mark visited, the other edge will not be processed 
                // if(visited[headNode] == 1)
                //         continue;

                // visited[headNode] = 1;

                // if cost is already updated 
                if(dist[headNode] < srcToU_cost)
                        continue;
                

                for(pii node_entry : adjList[headNode])
                {
                        int adjNode = node_entry.first;
                        int utov_cost = node_entry.second;

                        // taking the max of dist[u] and cost(u, v)
                        int maxCost = max(srcToU_cost, utov_cost);
                        if(maxCost < dist[adjNode])
                        {
                                dist[adjNode] = maxCost;
                                pq.push({maxCost, adjNode});
                        }
                }
        }
        printRes();
}

void clearContainers()
{
        for(int i=0; i<n; i++)
        {
                // dist[i] = INT_MAX;
                adjList[i].clear();
        }
}

void solve()
{
        cin>>n>>m;
        for(int i=0; i<m; i++)
        {
                int u, v, w;
                cin>>u>>v>>w;
                adjList[u].pb({v, w});
                adjList[v].pb({u, w});
        }
        int destNode;
        cin>>destNode;
        dijkstr(destNode);
        clearContainers();
}

int main(){

        int t;
        cin>>t;
        while(t--)
        {
                solve();
        }
  

        return 0;
}