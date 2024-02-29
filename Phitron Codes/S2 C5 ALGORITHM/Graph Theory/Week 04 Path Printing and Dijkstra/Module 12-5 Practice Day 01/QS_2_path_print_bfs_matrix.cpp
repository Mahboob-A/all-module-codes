/*  
Mod date: 030123, Tuesday
Practice Date: 240123, Tuesday, 09.30 am 

Link: https://docs.google.com/document/d/1Dle7J84c41qr5w4dPBWazLmIyEaQuQETyClcUc-86F4/edit
QS 2 : Path print with bfs
*/



#include <bits/stdc++.h>
using namespace std;

/*
// if the graph is weighted, then instead of 1, we will write the weight in [i][j] = weight of node
TC of adjacency matrix = O(n^2)
SC of adjacency matrix = O(n^2)

*/
#define pi pair<int, int>
int matrix[5][5] = {0};
const int N = 10;
// creating a 2d vector with fixed size of rows and cols 
vector<vector<int>>adjMatrix(N+1, vector<int>(N+1, 0));
int visited[N][N], parent[N][N], level[N][N];


void bfs(pi source)
{
        queue<pi>q;
        visited[source.first][source.second] = 1;
        level[source.first][source.second] = 0;
        q.push(source);

        while(!q.empty())
        {
                pi frontNode = q.front();
                q.pop();

                for(int i=1; i<=n; i++)
                {
                        for(int j=1; j<=n; j++)
                        {
                                if(visited[i][j] == 0)
                                {
                                        visited[i][j] = 1;
                                        level[i][j] = level[frontNode.first][frontNode.second];
                                        parent[i][j] = frontNode;
                                        q.push({i, j});
                                }
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


        int n, m;
        cin>>n>>m;

        // input of adjmatrix 
        for(int i=0; i<m; i++)
        {
                int u, v;
                cin>>u>>v;
                adjMatrix[u][v] = 1;
                adjMatrix[v][u] = 1;
        }

        pair<int, int> source = {1, 1};
        bfs(source);



        cout<<endl;
        for(int i=1; i<=n; i++)
        {
                for(int j=1; j<=n; j++)
                {
                        cout<<level[i][j]<<" ";
                }
                cout<<endl;
        }
        cout<<endl;

        

        /*

        int nodes = 5;

        int matrix[nodes][nodes];

        // for (int i = 0; i < nodes; i++)
        // {
        //         for (int j = 0; j < nodes; j++)
        //         {
        //                 matrix[i][j] = i * j;
        //         }

        // }
           
        for (int i = 0; i < 5; i++)
        {
                for (int j = 0; j < 5; j++)
                {
                        cout << matrix[i][j] << " ";
                }
                cout << endl;
        }

        */
     

        return 0;
}
