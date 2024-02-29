

/*
This is Algo final exam - Week 08 - Theory Final Exam. 
Exam date : 090223, Thursday  
Exam written date : 150523, Monday, 07.30 am 

Question 03 : Simulate Dijkstra’s algorithm on the following graph. The source node is B		10

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
        // 1. make the dist array to inf 
        for(int i=1; i<=n; i++)
        {
                dist[i] = INF;
        }

        // 2. dist of srcNode to 0 
        dist[src] = 0;

        // 3. take a min or max pq   || max pq is taken 
        priority_queue<pair<long long, int>>pq;

        // 4. push the src with 0 cost in the pq 
        pq.push({0, src});

        // 5. run loop until pq is not empty 
        while(!pq.empty())
        {
                // 5.1 take the head 
                int parentNode = pq.top().second;
                pq.pop();
                
                // 5.2 if parentNode is visited, then continue else make it visited 
                if(visited[parentNode] == 1)
                        continue;
                visited[parentNode] = 1;

                // 5.3 explore all the adjacent nodes of parentNode
                for(pair<int, int>node_entry : adjList[parentNode])
                {
                        int adjNode = node_entry.first;
                        int edge_cost = node_entry.second;
                        if(dist[parentNode] + edge_cost < dist[adjNode])
                        {
                                dist[adjNode] = dist[parentNode] + edge_cost;
                                parent[adjNode] = parentNode;
                                pq.push({-dist[adjNode], adjNode});
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


5 7 
1 2 1 
1 3 1 
1 4 1
1 5 1 
2 3 1 
3 4 1 
4 5 1 


*/


int main(){

        cin>>n>>m;
        for(int i=0; i<m; i++)
        {
                int u, v, w;
                cin>>u>>v>>w;
                adjList[u].push_back({v, w});
                adjList[v].push_back({u, w});
        }

        int src = 3;

        dijkstra(src);

        for(int i=1; i<=n; i++)
        {
                cout<<"Node : "<<i<<" || Distance : "<<dist[i]<<endl;
        }
        cout << endl;

        // print path below 
        int curr_node = n;
        if(dist[n] == 0 || dist[n] == INF)
        {
                cout<<-1<<endl;
                return 0;
        }

        vector<int>path;
        
        while(1)
        {
                path.push_back(curr_node);
                if(curr_node == src) 
                        break;
                curr_node = parent[curr_node];
        }

        reverse(path.begin(), path.end());

        for(auto v : path)
        {
                cout<<v<<" ";
        }
        cout<<endl;


        return 0;
}