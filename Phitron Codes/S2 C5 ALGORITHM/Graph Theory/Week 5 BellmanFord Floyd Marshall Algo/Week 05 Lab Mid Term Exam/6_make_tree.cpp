
/*  
Week 05 : lab mid term exam 
exam date: 150123 - 170123 - 100; 170123-220123 - 90; rest 80 marks 
exam writing date: 090223, thursday, 10.00 pm 


qs 06 : I will be given a undirected graph. I have make a tree out of it. 
*/

/*  
int n = adj[at][i];
        if (!visited[n]) {
            edgess.push_back(make_pair(at + 1, n + 1));
            dfs(n);
        }
dfs(0);
    for (int i = 0; i < n - 1; i++) {
        cout << edgess[i].first << " " << edgess[i].second << endl;
    }

*/


/*  
The connected undirected graph without loops and multiple edges is given. You are allowed to remove the edges from it. Obtain a tree from the graph.

Input
The first line contains the number of vertices n (1 ≤ n ≤ 100) and the number of edges m of the graph. The next m pairs of numbers define the edges. It is guaranteed that the graph is connected.

Output
Print n - 1 pairs of numbers - the edges that will be included in a tree. The edges can be displayed in any order.

prb978.gif

Sample 1
Inputcopy	Outputcopy
4 4
1 2
2 3
3 4
4 1
1 2
2 3
3 4

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
#define INT_INF 1e9 
const int N = 110;


vec adjList[N];
vecPii edges;
int visited[N];
int n, m;


/*  
the funda is that 
1---------------2
.                        .
.                        .
.                        .
4---------------3

we will run the dfs from 1. then when we will explore adjacent of 1, we will get 2 as unvisited. 
so in a pair type vector we will push_back {src, adjNode}, so 1 as src will push_back (1, 2)
2 as src push_back(2, 3) 3 as src will push_back(3, 4) and when 4 comes, it will see that all of its adjacent 
nodes are visited, hence the dfs will terminate. 
and we will print the vector. it will contain n-1 edges that will make a tree with out loop.


another problem similar to this : https://site.ada.edu.az/~medv/acm/Docs%20e-olimp/Volume%2010/977_English.htm
check if graph is a tree 

*/
void dfs(int src)
{
        visited[src] = 1;
        for(int node : adjList[src])
        {
                if(visited[node] == 0)
                {
                        edges.pb({src, node});
                        dfs(node);
                }
        }
}
int main(){

        cin>>n>>m;
        for(int i=0; i<m; i++)
        {
                int u, v;
                cin>>u>>v;
                adjList[u].pb(v);
                adjList[v].pb(u);
        }

        dfs(1);

        for(pii edg : edges)
        {
                cout<<edg.f<<" "<<edg.s<<endl;
        }
        cout<<endl;

        return 0;
}

