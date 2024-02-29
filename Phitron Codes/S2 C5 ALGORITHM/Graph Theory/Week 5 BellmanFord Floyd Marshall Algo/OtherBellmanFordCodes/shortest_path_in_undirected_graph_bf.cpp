

// find shortest path in a undirected, unweighted graph using bellman - ford  
/*  

This code implements the Bellman-Ford algorithm to find the shortest distances from a single source vertex (0 in this example) 
to all other vertices in the graph. In an unweighted graph, each edge has a weight of 1, and the algorithm is updated accordingly. 
The addEdge function adds an edge to the graph, represented by an adjacency list. 
The bellmanFord function implements the main algorithm, initializing the distances to INT_MAX, 
and updating the distances in V - 1 iterations. The code also checks for negative weight cycles and returns false if one is detected.

##Web Dev
what does this condition do : if (dist[u] != INT_MAX && dist[u] + 1 < dist[v])
                return false;

The condition if (dist[u] != INT_MAX && dist[u] + 1 < dist[v]) return false; is used to detect negative weight cycles in the graph.

In the Bellman-Ford algorithm, the dist array stores the shortest distances from the source vertex to all other vertices in the graph. 
If during the V - 1 iterations of the algorithm, we find a vertex v such that dist[u] + 1 < dist[v], 
where u is a vertex that is adjacent to v, then it means that a shorter path to v has been found through vertex u.

However, if such a condition continues to be satisfied even after V - 1 iterations, 
it means that there is a negative weight cycle in the graph. A negative weight cycle is a cycle in the graph where the sum of the weights of 
the edges in the cycle is negative. In an unweighted graph, all edges have a weight of 1, so a negative weight cycle is not possible.

Therefore, the condition if (dist[u] != INT_MAX && dist[u] + 1 < dist[v]) return false; is used to detect a negative weight cycle by 
checking if a shorter path to v has been found after V - 1 iterations. If it has, then the function returns false, indicating that the graph 
contains a negative weight cycle.

##Web Dev
how can a unweighted graph contain a negative cycle?? if not they why should check for the existence of negative cycle in the graph?

A unweighted graph, by definition, does not contain negative edge weights. So, it cannot contain a negative cycle. In an unweighted graph, 
all edges have a weight of 1, so the sum of the weights of the edges in any cycle is always positive.

However, the code for the Bellman-Ford algorithm checks for the existence of a negative cycle even in an unweighted graph, 
because the algorithm itself is designed to handle graphs with both positive and negative edge weights. The check for negative cycles is 
included in the code because it is an essential part of the algorithm. The condition if (dist[u] != INT_MAX && dist[u] + 1 < dist[v]) 
return false; is used to detect negative weight cycles in the graph.

Therefore, even though a negative weight cycle is not possible in an unweighted graph, it is still necessary to include the check in the code 
to ensure that the algorithm works correctly and to ensure compatibility with graphs that may contain negative edge weights.

*/


#include <iostream>
#include <vector>
#include <climits>

using namespace std;

const int MAX = 1e4 + 5;

vector<int> adj[MAX]; // Adjacency list to store the graph
int dist[MAX]; // Array to store the shortest distances

// Utility function to add an edge to the graph
void addEdge(int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

// Bellman-Ford algorithm to find the shortest distances
bool bellmanFord(int src, int V) {
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX;

    dist[src] = 0;

    for (int i = 0; i < V - 1; i++) {
        for (int u = 0; u < V; u++) {
            for (int v : adj[u]) {
                if (dist[u] != INT_MAX && dist[u] + 1 < dist[v])
                    dist[v] = dist[u] + 1;
            }
        }
    }

    for (int u = 0; u < V; u++) {
        for (int v : adj[u]) {
            if (dist[u] != INT_MAX && dist[u] + 1 < dist[v])
                return false;
        }
    }

    return true;
}

int main() {
    int V = 5;
    addEdge(0, 1);
    addEdge(0, 4);
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 3);
    addEdge(3, 4);

    if (bellmanFord(0, V)) {
        for (int i = 0; i < V; i++)
            cout << "Distance from source to vertex " << i << " is " << dist[i] << endl;
    } else {
        cout << "Graph contains negative weight cycle." << endl;
    }

    return 0;
}
