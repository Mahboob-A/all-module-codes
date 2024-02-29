/*
Week 03: 
Module date: 311222, Saturday
Watch date: 100123, Tuesday, 07.30 pm 
10 - 3 : Topological sort  - concept 
10 - 4: Topological sort - code with dfs  // can also be done with bfs   
*/

/*
The concept is that we need a stack to do this. 
When ever we fully explore a node i.e all of its adjacent nodes are explored
we will then push it in the stack. And at last we will print the stack. 
We could get any valid sequence that from u -> v i.e from u there is an edge v. 
As we know that we can only perfrom top sort on DAG i.e directed acyclic graph, 
so if it is uncertain that we do not know if the graph is a DAG, then we will have to 
implement the cycle detection with " unvisited, paused, fully explored " technique. 
If we encounter any cylce, we will not proceed any further. 
*/


#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+10;

vector<int>adjList[N];
int visited[N];

stack<int>sorted_nodes_stack;

// only for DAG graph 
void topSort(int src)
{
        visited[src] = 1;
        for(auto adjNode : adjList[src])
        {
                if(visited[adjNode]  == 0)
                        topSort(adjNode);
        }
        sorted_nodes_stack.push(src);
}



int main() {

        int n, m;
        cin >> n >> m;
        for(int i=0; i<m; i++) 
        {
                int u, v;
                cin >> u >> v;
                adjList[u].push_back(v);
        }

        for(int i=1; i<=n; i++)
        {
                if(visited[i]  == 0)
                        topSort(i);
        }

        while(!sorted_nodes_stack.empty())
        {
                cout << sorted_nodes_stack.top()<<  " ";
                sorted_nodes_stack.pop();
        }

        return 0;
}