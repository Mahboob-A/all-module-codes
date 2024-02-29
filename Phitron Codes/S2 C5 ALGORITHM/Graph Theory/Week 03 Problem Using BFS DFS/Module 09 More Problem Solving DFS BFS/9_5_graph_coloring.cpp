
/*
Mod date: 291222, Thursday
Watch date: 070122, Saturday
Week 03 : Problem solving using dfs and bfs 
Module 09: More Problem solving using dfs and bfs

9-5: Graph Coloring Algorithm / Problem: 
CSES Building Teams problem.  

- no two adjacent node can have same color 
- The task is to make any node color with 1 and make its adjacent node with color 2 
if we can color the grpah with two color, then the graph is bipartite graph else the graph is not bipartite 
graph then we will return false 
*/
/*
link: https://cses.fi/problemset/task/1668

Constraints
1≤n≤105
1≤m≤2⋅105
1≤a,b≤n
Example

Input:
5 3
1 2
1 3
4 5

Output:
1 2 2 1 2
(print any valid o/p)  

*/

#include <bits/stdc++.h>
using namespace std;

const int N =  2e5 + 5;
int visited[N] = {0};
#define pb push_back 

vector<int>adj_list[N];
int color[N] = {0};

bool dfs(int src)
{
        visited[src] = 1;
        for(int adj_node : adj_list[src])
        {
                // if the node is not visited then assign color 
                if(visited[adj_node] == 0)
                {
                        
                        // if color of source is 1, then its adjacent node's color will be 2 
                        // and if color of src is 2 then the color if adjacent node will be 1 
                        if(color[src] == 1)
                                color[adj_node] = 2;
                        else
                                color[adj_node] = 1;

                        // if the adjacent node is failed to assign different color to its own adjacent nodes 
                        // with different colors, then return false 
                        bool is_colorable = dfs(adj_node);
                        if(!is_colorable)
                                return false;
                }
                else
                {
                        // if the adjacent node is already visited, then check is color of src 
                        // and color of adj_node is same, if true return false (this false will be returned 
                        // to the if(visited[adjacent] == 0) condition)
                        if(color[src]  ==  color[adj_node])
                                return false;
                }
        }
        // here the bfs is completed. If the bfs is completed and it did not return any false statement 
        // then return true, i.e it is possible to bi color the grpah 
        return true;
}

int main() {


        int n, m;
        cin>> n >> m;

        for(int i=0; i<m; i++)
        {
                int u, v;
                cin>> u >> v;
                adj_list[u].pb(v);
                adj_list[v].pb(u);
        }

        // as the graph may contain many conncected components, 
        // so we will make any node as course if the node is not visited
        // and we will make the first node's color as 1 
        
        bool is_colorable = true;
        for(int i=1; i<=n; i++)
        {
                if(visited[i]  == 0)
                {
                        color[i] = 1;
                        bool result = dfs(i);
                        if(!result)
                        {
                                is_colorable = false;
                                break;
                        }
                }
        }

        if(!is_colorable)
                cout<< "IMPOSSIBLE"<<endl;
        else 
        {
                for(int i=1; i<=n; i++)
                {
                        cout<<color[i]<<" ";
                }
        }


        return 0;
}