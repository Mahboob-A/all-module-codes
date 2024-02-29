/*  
Week 04 : Dijkstra
Conceptul session : 4 - 1 - Disjoint Set (Union Find) and Path Print 

Mod date: 040123, Wednesday
Watch date: 220123, Sunday, 08.00 am  

Part 02: Path Print Using BFS 

Key Concept: 

whenever we see the term path print, maintaining an container of parent is obviviois. 
we need to maintain an array or vector of parents and we will traverse from the 
destination to source node via the parent container fetching parent of current node. 
and lastly, as the output is from destination to source, we will reverse the container 
to get the path from source to destination.

*/

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

vector<int> bfs(int src, int dest)
{
        queue<int>q;
        q.push(src);
        level[src] = 0;
        visited[src] = 1;


        while(!q.empty())
        {
                int parentNode = q.front();
                if(parentNode == dest)
                {
                        vector<int> path = find_path(dest);
                        return path;
                }
                q.pop();

                for(int adjNode : adjList[parentNode])
                {
                        if(visited[adjNode] == 0)
                        {
                                level[adjNode] = level[parentNode] + 1;
                                parent[adjNode] = parentNode;
                                visited[adjNode] = 1;
                                q.push(adjNode);
                        }
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
        level.resize(n+1, 0);   
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
        
        vector<int> path = bfs(src, dest);
        
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