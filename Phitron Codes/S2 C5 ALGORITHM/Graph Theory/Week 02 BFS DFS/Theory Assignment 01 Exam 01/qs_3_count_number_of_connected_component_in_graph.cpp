/*
Algo, GT
Week 02, Exam 01 
Theory Assignment 01 
Exam date: 231222, Thursday
Written date: 311222, Saturday, 12.00 am 

QS 03: Count number of connected component in graph 
*/


//  Count number of connected component in graph

#include <bits/stdc++.h>
using namespace std;

vector<int>adj[100];
int visited[100] = {};

void dfs(int src)
{
        visited[src] = 1;
        for(int i=0; i<adj[src].size(); i++)
        {
                int adjNode = adj[src][i];
                if(!visited[adjNode])
                        dfs(adjNode);
        }
}

int numOfConnectedComponents(int v)
{       
        int count = 0;
        for(int i=1; i<=v; i++)   // traversal will begin from the least node 
        {
                if(visited[i])  // if the node is already visited then skip 
                        continue;
                else
                {
                        dfs(i);       // if not visited, then run bfs so that all the nodes of the component becomes visited 
                        count++;
                }
        }
        return count;
}

/*
5 4 
1 2
1 3
2 3
4 5 


*/

// if we send a source to bfs or dfs, it will visit all the nodes 
// of the component and make all the nodes as true. 
// then in a for loop, iterate all nodes, and if a node is already visited, then skip it, 
// and if a node found that is not visited, then send it as source to bfs or dfs, 
// it will make all the nodes of the component as true. 
// we will just count how many times the the traversal is invoked.

int main() {

        int V, e;
        cin>>V>>e;
        for(int i=0; i<e; i++)
        {
                int u, v;
                cin>>u>>v;
                adj[u].push_back(v);
                adj[v].push_back(u);
        }

        int res = numOfConnectedComponents(V);

        cout<<"Number of connected components are:  "<< res << endl;

        return 0;
}