/*
Mod date: 251222, Sunday
Watch date: 040122, Wednesday, 10.00 am 
Week 03 : Problem solving using dfs and bfs 
Module 08: Problem solving using dfs and bfs

8-2 : Single Source Shortest Path (SSSP)

Single Source Shortest Path is the shortst edge count from the source node to the destination node. 
for  this, we use an extra array to store the levels. we just perfrom a bfs on the graph as the level of node 
is the shortest path from the source node to the destination node. 

we will only assigning level to a node if it has not given any level then the level of the node = 
level of parent node + 1 
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3;

vector<int>adj[N];
bool visited[N] = {false};
int level[N] = {};

void calculateShortestPath(int src)
{
        queue<int>q;
        q.push(src);
        visited[src] = true;
        level[src] = 0;

        while(!q.empty())
        {
                int parent = q.front();
                q.pop();
                cout<< parent << " ";

                for(int i=0; i<adj[parent].size(); i++)
                {
                        int adjNode = adj[parent][i];
                        if(level[adjNode] == 0)
                                level[adjNode] = level[parent] + 1;

                        if(visited[adjNode] == false)
                        {
                                visited[adjNode] = true;
                                //level[adjNode] = level[parent] + 1; // we can also set level here as if the node is not visited, 
                                // it means the node is not visited, so, we can set it level here aslo. 

                                q.push(adjNode);
                        }
                }
        }
}


int main() {

        int V, E, u, v;
        cout<<"Enter Graph:  "<<endl<<endl;
        cin>> V >> E;

        for(int i = 0; i<E; i++)
        {
                cin>>u>>v;
                adj[u].push_back(v);
                adj[v].push_back(u);
        }
        calculateShortestPath(0);
        cout<<endl<<level[4]<<endl;
        
        
        return 0;

}

