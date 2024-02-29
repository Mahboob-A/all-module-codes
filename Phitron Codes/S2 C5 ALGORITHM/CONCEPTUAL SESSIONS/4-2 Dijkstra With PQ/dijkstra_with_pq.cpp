/*  
Conceptual date: 060123, Friday
Watch date: 230123, Monday, 10.00 am 
Conceptual Session : 4-2 - Dijkstra With PQ 

TC O(E + lob V)
*/
// take container size n / N + 1 always if it is 1 based graph, then only n can not access the n'th index in the array 

#include <bits/stdc++.h>
using namespace std;

#define pi pair<int, int>
const int N = 1e3;
const int INF = 1e4;

vector<pi>adjList[N];
vector<int>visited;
vector<int>dist;
// vector<int>dist(N+1, INF);  or declare in this way 
vector<int>parent;
int n, m, src;


void dijkstra(int src)
{
        priority_queue<pi, vector<pi>, greater<pi>>pq;
        dist[src] = 0;

        // pair.first = the dist 
        // pair.second = the node 
        pq.push({0, src}); 

        while(!pq.empty())
        {
                int parent_dist = pq.top().first;
                int parentNode = pq.top().second;
                pq.pop();

                if(visited[parentNode] == 1)
                        continue;

                visited[parentNode] = 1;

                for(pi edge_entry : adjList[parentNode])
                {
                        int adj_node = edge_entry.first;
                        int edge_cost = edge_entry.second;

                        if(dist[parentNode] + edge_cost  < dist[adj_node])
                        {
                                dist[adj_node] = dist[parentNode] + edge_cost;
                                parent[adj_node] = parentNode;
                                pq.push({dist[adj_node], adj_node});
                        }
                }

        }

} 

void print_path(int dest_node)
{
        if(visited[dest_node] == 0)
        {
                cout<<"There is no path from "<<src<<" to "<<dest_node<<endl;
        }
        else
        {
                int curr_node = dest_node;
                vector<int>path;
                while(curr_node != -1)
                {
                        path.push_back(curr_node);
                        // if(curr_node == src)
                        //         break;
                        curr_node = parent[curr_node];
                }
                reverse(path.begin(), path.end());
                cout<<"From "<<src<<" to "<<dest_node<<" the shortest path is :  "<<endl;
                for(int node : path)
                        cout<<node<<" ";
                cout<<endl<<endl;
        }
}

/*  

9 14 
1 5 2 
1 2 1 
3 2 6 
5 4 3
2 4 9
5 6 4
3 4 7 
3 6 8 
3 7 9 
2 7 4
4 8 8 
6 9 5 
8 9 6 
7 6 3 


*/

int main() {

        cin>>n>>m;
        visited.resize(n+1, 0);
        dist.resize(n+1, INF);    // making all the distance of all nodes infinity 
        parent.resize(n+1, -1);


        for(int i=0; i<m; i++)
        {
                int u, v, w;
                cin>>u>>v>>w;
                adjList[u].push_back({v, w});
                adjList[v].push_back({u, w});
        }

        src = 1;
        dijkstra(src);
        
        // path print 
        print_path(n);

        // 1 based graph 
        for(int i=1; i<=n; i++)
        {
                cout<<"level of "<<i<<" is "<<dist[i]<<endl;
        }
        cout<<endl;


        return 0;
}