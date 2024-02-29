/*  
Mod date: 030123, Tuesday
Practice Date: 240123, Tuesday, 09.30 am 

Link: https://docs.google.com/document/d/1Dle7J84c41qr5w4dPBWazLmIyEaQuQETyClcUc-86F4/edit
QS 2 : Path print with bfs
*/


#include <bits/stdc++.h>
using namespace std;

const int N = 1e3;
vector<vector<int>>adjMatrix(N, vector<int>(N, 0));
vector<vector<int>>visited(N, 0);
vector<vector<int>>parent(N, -1);
vector<vector<int>>dist(N);
int n, m;

void path_print(int dest_node)
{
        int curr_node = dest_node;
        vector<int>path;
        while(curr_node != -1)
        {
                path.push_back(curr_node);
                curr_node = parent[curr_node];
        }
        reverse(path.begin(), path.end());

        for(int node : path)
                cout<<node<<" ";
        cout<<endl;
}

vector<int>path;
void path_print_rec(int dest_node)
{
        if(parent[dest_node] == -1)
        {
                path.push_back(dest_node);
                return;
        }
        path_print_rec(parent[dest_node]);
        path.push_back(dest_node);

        for(int node : path)
        {
                cout<<node<<" ";
        }
        cout<<endl;
}

void bfs(int src, int dest_node)
{
        queue<int>q;
        dist[src] = 0;
        visited[src] = 1;
        q.push(src);

        while(!q.empty())
        {
                int frontNode = q.front();
                if(frontNode == dest_node)
                {
                        // path_print(dest_node);
                        path_print_rec(dest_node);
                        // return;
                }
                q.pop();
                for(auto adjNode : adjList[frontNode])
                {
                        if(visited[adjNode] == 0)
                        {
                                dist[adjNode] = dist[frontNode] + 1;
                                parent[adjNode] = frontNode;
                                visited[adjNode] = 1;
                                q.push(adjNode);
                        }
                }
        }


} 



/*  
6 6 
1 2
1 3
2 4
3 4
3 5
3 6


7 9 
1 2
1 4
2 3
2 4
2 5
2 7
3 6
5 6
7 6



*/

int main() {

        cin>>n>>m;
        for(int i=0; i<m; i++)
        {
                for(int j=0; j<m; j++)
                {

                }
        }

        int source = 1, dest_node = 7;
        bfs(source, dest_node);

        for(int i=1; i<=n; i++)  
        {
                cout<<"Distance of "<<i<<" is "<<dist[i]<<endl;
        }
        cout<<endl;


        return 0;
}