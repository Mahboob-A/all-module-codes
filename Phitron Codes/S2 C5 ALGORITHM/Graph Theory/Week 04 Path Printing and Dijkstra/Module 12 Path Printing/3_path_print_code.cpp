/*
Message Route: https://cses.fi/problemset/task/1667 

Week 04

Module 12
12-3 Path Printing in Code
Mod date: 020123, Monday 
Watch date: 170123, Tuesday, 08.00 pm 

we will traverse the graph.
and when we will find any node that is unvisited, 
we will make the node by which we have found the unvisited adjNode as its parent node 
like - parent[adjNode] = headNode 


while printing the path, we have to traverse from the destination node to src node.
we will access the parent node of selected node, and we will push the parent node, and 
again we will access the parent node of the selected node until we find the src node. 

we need to traverse from the dest_node to src becuse if we want to traverse 
from src node to dest_node, we do not know from which node we have gone to the dest_node node
as we might have multiple node of the parent node. 
that's why, if we try to visit from dest to src path, as we know from which node we have come 
to dest node as we have parent array, so we will access the parent array from dest node to src node
and at last we will reverse the container. 

*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

vector<int>adjList[N];
int visited[N], level[N], parent[N];
queue<int>q;
int n, m;

// path Printing using bfs 
void bfs(int src)
{
        q.push(src);
        visited[src] = 1;
        level[src] = 1;
        parent[src] = -1;   // just a value as parent of src, as src would not have any parent node 

        while(!q.empty())
        {
                int head = q.front();
                q.pop();

                for(auto adjNode : adjList[head])
                {
                        if(visited[adjNode] == 0)   // if the node is not visited
                        {
                                visited[adjNode] = 1;
                                level[adjNode] = level[head] + 1;
                                parent[adjNode] = head;   // make head as parent of adjNode
                                q.push(adjNode);
                        }
                }
        }
} 

// path Printing using dfs 
// path printing with dfs code is not working fix it. ******** 
void dfs(int src)
{
        visited[src] = 1;
       
        for(auto adjNode : adjList[src])
        {
                if(visited[adjNode] == 0)
                {
                        level[adjNode] = level[src] + 1;
                        parent[adjNode] = src;
                        dfs(adjNode);
                }
        }
}

int main() {
        
        cin >> n >> m;
        for(int i=0; i<m; i++)
        {
                int u, v;
                cin>>u>>v;
                adjList[u].push_back(v);
                adjList[v].push_back(u);
        }

        int src = 1;
        level[src] = 1; // only for if using dfs  
        dfs(src);

        // bfs(src);

        vector<int>path;
        int dest_node = n;

        // if destination node is not visited, then we can not find any path to it. 
        if(visited[dest_node] == 0)
        {
                cout<<"IMPOSSIBLE"<<endl;
                return 0;
        }

        cout << level[dest_node] << endl;

        // initially the curr_node node is the destination node 
        int curr_node = n;
        while(1)
        {
                // pushing the curr_node node in the vector
                path.push_back(curr_node);
                // if curr_node is the scr, we have reached the src node, now we do not need to 
                // access curr_node's parent as src does not have any valid parent
                if(curr_node == src)  
                        break;
                // once the push_back in vector is done, then access the parent of the initial curr_node 
                // and assign the value to curr_node variable, it will then again push_back in the vector
                // and again check the parnt of that curr_node and assign it to the curr_node variable
                // this process will go on until we find the curr_node as the src and then we will break the loop. 
                curr_node = parent[curr_node];
        }

        // as we have got the path from destination to source, 
        // now we will reverse it, hence wil will get source to destination path 
        reverse(path.begin(), path.end());

        // print the path 
        for(auto node : path)
        {
                cout << node << " ";
        }
        cout << endl;

        return 0;
}