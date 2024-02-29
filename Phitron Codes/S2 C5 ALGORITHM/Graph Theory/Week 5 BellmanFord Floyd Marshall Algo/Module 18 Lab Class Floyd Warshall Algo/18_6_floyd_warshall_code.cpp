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


#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define INT_INF 1e8
const int N = 1e5+100;
vector<int>ans;
vector<pii>allSrc;
pii src, destination;
//priority_queue<int, vec, greater<int>>q;

int dist[N][N];
int n, m;


/*  

4 5
1 3 -2
3 4 2
4 2 -1
2 1 4 
2 3 3


*/


/*  
in Floyd Warshall algorithm, as we are only working with the dist matrix itself, we do not need to 
store the graph in any other container. we will directly take input in the dist matrix the graph
and process the dist matrix 
so we only need  a dist matrix for Floyd Warshall algorithm

*/
int main(){
	
	cin>>n>>m;
	
        for(int i=1; i<=n; i++)    // setting all values to INF 
        {
                for(int j=1; j<=n; j++)
                {
                        dist[i][j] = INT_INF;
                }
        }

        for(int i=1; i<=n; i++)  // setting the same node dist as 0 
        {
                dist[i][i] = 0;
        }
 
        for(int i=0; i<m; i++)   // taking input 
        {
                int u, v, w;
                cin>>u>>v>>w;
                dist[u][v] = w;
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
                for(int j=1; j<=n; j++)
                {
                        cout<<dist[i][j]<<" ";
                }
                cout<<endl;
        }


	return 0;
}
