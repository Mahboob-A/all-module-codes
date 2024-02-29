

// all pair shortest path in unweighted graph || code does not work, fix it
// here we might take bfs 

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+100;

int dist[N][N];
int n, m;


/*  

4 5
1 3 -2
3 4 2
4 2 -1
2 1 4 
2 3 3


4 5
1 3 
3 4
4 2 
2 1
2 3 

*/
int main(){
	
	cin>>n>>m;
	
        for(int i=1; i<=n; i++)    // setting all values to INF 
        {
                for(int j=1; j<=n; j++)
                {
                        dist[i][j] = INT_MAX;
                }
        }

        for(int i=1; i<=n; i++)  // setting the same node dist as 0 
        {
                dist[i][i] = 0;
        }
 
        for(int i=0; i<m; i++)   // taking input 
        {
                int u, v, w;
                cin>>u>>v;
                dist[u][v] = 1;   // as the grpah is unweighted, assgning 1 to its dist 
        }
 
        for(int k=1; k<=n; k++)   // taking k as the intermediate node 
        {
                for(int u=1; u<=n; u++)   // selecting n node in respect of one k node 
                {
                        for(int v=1; v<=n; v++)  // running n * n in respect of n iteration of i nodes 
                        {
                                // curr dist is  the minimum of previous dist of (u, v) and the dist 
                                // using the intermediate node from u to k and from k to v 
                                dist[u][v] = min(dist[u][v], dist[u][k] + dist[k][v]);  
                        }
                }
        }

        // output the dist of all nodes 
        for(int i=1; i<=n; i++)
        {
                // cout<<"i: "<<i;
                for(int j=1; j<=n; j++)
                {
                        // cout<<"j: "<<j;
                        cout<<dist[i][j]<<" ";
                }
                cout<<endl;
        }


	return 0;
}
