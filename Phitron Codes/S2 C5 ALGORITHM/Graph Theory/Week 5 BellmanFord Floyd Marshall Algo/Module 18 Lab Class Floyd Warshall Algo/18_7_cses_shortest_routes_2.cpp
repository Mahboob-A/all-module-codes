/*  
Week 05 : Bellman-Ford and Floyd-Warshall algorithm
curr_week : week 08 
date: 130123, Friday
watch date: 060223, Monday, 07.00 pm 

Floyd-Warshall algo is all pair shortest path problem. It finds shortest path of all nodes in a single run. 
TC: O(n^3)
SC: O(n^2)

pseudocode: 

input: a weighted graph in which negative weight is allowed in adjacency matrix 
output: a matrix of shortest path of all nodes 

- create a n*n matrix of distance "d" 
        - d[i][j] = w as u----->v has direct edge and weight is w 
        - d[i][i] = 0 as there is no distance between the same node 
        - d[i][j] = INF as there are no direct edge between u------v 

- for k = 1 to n : 
        - for i = 1 to n : 
                - for j = 1 to n : 
                        - d[i][j] = min(  d[i][j], d[i][k] + d[k][j]  )

                        [or: 
                                - if d[i][j] > d[i][k] + d[k][j]
                                        - d[i][j] = d[i][k] + d[k][j] ]

- output "d" matrix 
*/


/*  
https://cses.fi/problemset/task/1672

the problem tells a graph will be given and q queries. 
for each query, two int will be given and the shortest path from them should be printed. 

*/

#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
#define LONG_INF 1e18 
#define INT_INF 1e9
const int N = 1e3+100;
vector<int>ans;
vector<pii>allSrc;
pii src, destination;
//priority_queue<int, vec, greater<int>>q;

long long dist[N][N];
int n, m, q;


/*  

4 5
1 3 -2
3 4 2
4 2 -1
2 1 4 
2 3 3


*/
int main(){
	
	cin>>n>>m>>q;
	
        for(int i=1; i<=n; i++)    // setting all values to INF 
        {
                for(int j=1; j<=n; j++)
                {
                        dist[i][j] = LONG_INF;
                }
        }

        for(int i=1; i<=n; i++)  // setting the same node dist as 0 
        {
                dist[i][i] = 0;
        }
        
        /*  
        1 2 4
        1 2 5
        1 2 3

        there might be multi edge, so we have to take the short dist of thet edge 
        and as the graph is undirected, we have to take input both way taking the min dist of u ---> v 
        
        */
        for(int i=0; i<m; i++)   // taking input 
        {
                int u, v;
                long long w;
                cin>>u>>v>>w;
                dist[u][v] = min(dist[u][v], w);
                dist[v][u] = min(dist[v][u], w);
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

        /*
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
        */

        // printing the dist of q queries shortest dist from u to v 
        for(int i=0; i<q; i++)
        {
                int u, v;
                cin>>u>>v;
                if(dist[u][v] == LONG_INF)
                {
                        cout<<-1<<endl;
                }
                else
                {
                        cout<<dist[u][v]<<endl;
                }
        }

	return 0;
}