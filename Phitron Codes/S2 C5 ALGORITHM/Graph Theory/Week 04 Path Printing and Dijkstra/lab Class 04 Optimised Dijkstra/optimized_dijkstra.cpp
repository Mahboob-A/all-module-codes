/*  
Week 04 : Dijkstra
Module date: 060123, Friday
Lab class 04 - Optimized Dijkstra
210123, Saturday, 03.30 pm 
14-4: Solving on Codeforces


PRIORITY QUEUE: 
        - If I have declared an normal priority queue (max pq), and I want it to behave like minimum pq,
        then when I am pushing element to the priority queue, if I push it with - (minus) / negative value, 
        then it will behave like min pq, ie minimum value will be at the top 

Optimized Dijkstra: 
        - in this optimized dijkstra, we will use min pq to get min distanced node. 
        For this the TC of this algo will be o(m log n). We know m or E can go to V^2 in worst 
        cases, so this algo also might go o(V^2 log n) if the grpah is dense. So, we will use
        this algo for sparce grpah i.e node == edges or edges < nodes cases. 

        - in the pair of pq, we will push {distance, node} in this way because for pair type value in pq. 
        at first the first element of pair type is compared and we want to compare between the distance of nodes.

        - if we need to store parents or need to print the path of the shortest path, then we need to maintain 
        the parent array. We will make the head node as the parent of the adjacent node when the 
        head node can relax the adjacent node.  

        - Everything else will be same 

INFINITY: 
        - The infinity will be always greater than  number of nodes * max edge cost 
*/

#include <bits/stdc++.h>
using namespace std;

#define pi pair<long long, int>
const int N = 1e5 + 100;
const long long INF = 1e18;

vector<pair<int, int>>adjList[N];
int visited[N], parent[N];
long long dist[N];
// min pq 
// priority_queue<pair<long long, int>>pq;   // taking a pq || the first of pair will be edge cost and second is edge 
// priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>>pq;
// priority_queue<pi, vector<pi>, greater<pi>>pq;
int n, m;

void dijkstra(int src)
{
        for(int i=1; i<=n; i++)
                dist[i] = INF;    // makig the dist to infinity

        dist[src] = 0;

        priority_queue<pair<long long, int>>pq; // using a normal pq and when I am pushing below, I am pushing the negative value 
        // so that it behave like a min pq || if min pq is used, then remove the minus in the below while pushing 
        pq.push({0, src});

        while(!pq.empty())
        {
                pair<long long, int> head = pq.top();   // as pq holds pair type value 
                pq.pop();

                int selected_node = head.second;   // the first element of pair in pq is the dist of the node 
                if(visited[selected_node] == 1)
                {
                        continue;
                }
                visited[selected_node] = 1;
                
                for(pair<int, int> node_enrty : adjList[selected_node])   
                {
                        int adjNode = node_enrty.first;
                        int edge_cost = node_enrty.second;

                        // we will only set a node is parent of other node if it can relax the node 
                        if(dist[selected_node] + edge_cost < dist[adjNode])      
                        {
                                dist[adjNode] = dist[selected_node] + edge_cost;   // relaxing the node 
                                parent[adjNode] = selected_node;   // making selected_node node as parent of adjNode
                                pq.push({  -dist[adjNode], adjNode  });   // pushing the distance of adjNode and the node itself in the queue 
                                // if it could relacx other node 
                                // pushing in the pq with -1 * dist[adjNode] : it will behave like minimum pq 
                        }
                }

        }
}

/*  
5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1

5 7
2 1 6 
2 3 1 
1 3 2 
1 4 2 
3 4 1 
4 5 5
1 5 5 



*/

int main() {
        cin>>n>>m;
        for(int i=0; i<m; i++)
        {
                int u, v, w;
                cin>>u>>v>>w;
                adjList[u].push_back({v, w});
                adjList[v].push_back({u, w});
        }

        int src = 1;

        dijkstra(src);

        for(int i=1; i<=n; i++)
        {
                cout<<"i -> "<<i<<" || dist : "<<dist[i]<<endl;
        }
        cout<<endl<<endl;

        int curr_node = n;
        vector<int>path;
        
        if(dist[n] == 0)
        {
                // cout<<"NOT VISITED"
                cout<<-1<<endl;
                return 0;
        }

        // printing path 
        while(1)
        {
                path.push_back(curr_node);
                if(curr_node == src) break;
                curr_node = parent[curr_node];
        }

        reverse(path.begin(), path.end());

        for(int node : path)
                cout<<node<<" ";
        
        cout<<endl;



        return 0;
}


























