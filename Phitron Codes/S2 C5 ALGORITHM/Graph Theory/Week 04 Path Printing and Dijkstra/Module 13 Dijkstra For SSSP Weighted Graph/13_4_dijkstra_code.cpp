/*
Watch date: 190123, Thursday, 08.30 am 
Module date: 040123, Wednesday
13-4 Dijkstra in Code

If the graph is unweighted, we use bfs to find sssp.
and if the graph is weighted, we use Dijkstra to find sssp.
it does not matter whether the graph is directed or undirected.
*/

#include <bits/stdc++.h>
using namespace std;

const int INF = 1e4;     //  to make the initial distance of nodes to infinity 
const int N = 1e3 + 5;
vector<pair<int, int>>adjList[N];
int visited[N];
int distance1[N];   // if only distance name is given, it gives an error that distance is ambiguous
int n, m;

void dijkstra(int src)
{
        // Step 01: Make distance of all nodes to infinity, begin loop based on 0 based or 1 based nodes 
        for(int i=1; i<=n; i++)
        {
                distance1[i] = INF;
        }

        // Step 02: make distance of src node to 0 
        distance1[src] = 0;

        // Step 03: Run throuth all nodes 
        for(int i=0; i<n; i++)
        {
                // Step 04: take a selected node and initialize it with -1 
                int selected_node = -1;

                // Step 05: run throuth all the nodes based on 0 or 1 based nodes and find unvisited and minimum distance[node]
                for(int j=1; j<=n; j++)
                {
                        // filtaring out the visited nodes. only unvisited nodes will be taken in consideration 
                        if(visited[j] == 1) continue;
                        if(selected_node == -1  || distance1[selected_node] > distance1[j])    // or distance[j] < distance[selected_node]
                        {
                                selected_node = j;
                        }
                }
                // Step 06: visit the selected node 
                visited[selected_node] = 1;

                // Step 07: explore all the adjacent nodes of the selected node 
                for(auto[adjNode, edge_cost] : adjList[selected_node])   // from c++17 we can extract pair value like this way 
                {
                        // Step 08: apply dijkstra if condition 
                        // if(distance[u] + c(u, v)  < distance[v])
                        //      - distance[v] = distance[u] + c(u, v)
                        // int adjNode = node_entry.first;
                        // int edge_cost = node_entry.second;
                        if(distance1[selected_node] + edge_cost < distance1[adjNode])
                        {
                                distance1[adjNode] = distance1[selected_node] + edge_cost;
                        }
                }
        } 


}


/*  

5 5 
1 2 6 
1 3 4
2 3 3 
2 5 5
3 4 2


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

        // printing the distance of all nodes 
        for(int i=1; i<=n; i++)
        {
                cout << "Distance of " << i << " is " << distance1[i]<<endl;
        }
        cout<<endl;
 
        return 0;
}