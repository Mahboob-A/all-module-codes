/*  
Week 04 : Dijkstra
Conceptul session : 4 - 1 - Disjoint Set (Union Find) and Path Print 

Mod date: 040123, Wednesday
Watch date: 220123, Sunday, 10.00 am  

Part 03: Path Print Using DFS

Key Concept: 

we will check if the level of level[src] + 1 <= level[adjNode] 
then we will update the level of adjNode to level[adjNode] = level[src] + 1;
and here we will update the parent of adjNode to src 
and then we will check if the node is not visited, then call recursively. 

As we are at first checking if the level is less than, then we have to make 
all the levels of all nodes to INT_MAX 

*/


// level print dfs 

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3;
vector<int>adjList[N];
vector<int>visited;
vector<int>level;
vector<int>parent;
// int n, m;

// finding path iterative 
vector<int> find_path(int dest)
{
        int curr_node = dest;
        vector<int>path;
        while(curr_node != -1)
        {       
                path.push_back(curr_node);
                curr_node = parent[curr_node];
        }
        reverse(path.begin(), path.end());
        return path;
}


// I want the dfs func to be like the bfs one. when we find the dest node, we will just call func to find the path instead of finding levels 
// of all nodes || this is not done : fix this 
vector<int> dfs(int src, int dest)
{
        visited[src] = 1;

       
        for(int adjNode : adjList[src])
        {
                if(level[src] + 1 <= level[adjNode])
                {
                        level[adjNode] = level[src] + 1;
                        parent[adjNode] = src;
                }
                if(visited[adjNode] == 0)
                {
                         if(src == dest)
                        {
                                vector<int>path = find_path(dest);
                                return path;
                        }
                        dfs(adjNode, dest);
                }
        }
        
}

/*  
6 7 
1 2
1 3
2 3
2 4
3 5
5 4
4 6


6 7
1 2
1 6
2 3
2 4
3 4
4 6
4 5

6 8
1 0
1 2
0 2
2 3
3 4
0 5
5 6
6 4



*/

int main() {

        int n, m;
        cin>>n>>m;
        // as I have received the value of nodes, I will resize the container so that I can 
        // directly access the indexes within the size of nodes 
        visited.resize(n+1, 0);   // initially everyone is not visited 
        level.resize(n+1, INT_MAX);     // as I am at fist checking if level of parent is less than adjNode, thus make 
        // all levels as max 
        parent.resize(n+1, -1);   // giving -1 so that I can check if I have reached to the source node 

        for(int i=0; i<m; i++)
        {
                int u, v;
                cin>>u>>v;
                adjList[u].push_back(v);
                adjList[v].push_back(u);
        }

        int src, dest;
        cin>>src>>dest;
        
        level[src] = 0;
        vector<int>path = dfs(src, dest);
        // vector<int>path = find_path(dest);
        
        cout<<"From "<<src<<" to "<<dest<<" the shortest path is: "<<endl;
        for(int node : path)
                cout<<node<<" ";
        cout<<endl<<endl;

        for(int i=1; i<level.size(); i++)  // as i<level because I have resized with n + 1
        {
                cout<<"Distance of "<<i<<" is "<<level[i]<<endl;
        }
        cout<<endl;


        return 0;
}