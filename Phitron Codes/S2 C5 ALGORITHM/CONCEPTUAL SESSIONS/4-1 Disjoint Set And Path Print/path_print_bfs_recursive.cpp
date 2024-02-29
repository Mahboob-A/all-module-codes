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

// we can also take a global vector to store the path instead of passing a vector with reference to the find_path_rec function. 
vector<int>path2;
void find_path_rec(int dest, vector<int>&path)
{
        if(parent[dest] == -1)
        {
                path.push_back(dest);
                return;
        }
        find_path_rec(parent[dest], path);
        path.push_back(dest);    // as this is recursive func, push_back will be done form source to dest from here, no need to reverse the vectro 
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
                        vector<int>path;
                        find_path_rec(dest, path);
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

        visited.resize(n+1, 0);   
        level.resize(n+1, 0);   
        parent.resize(n+1, -1);   

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