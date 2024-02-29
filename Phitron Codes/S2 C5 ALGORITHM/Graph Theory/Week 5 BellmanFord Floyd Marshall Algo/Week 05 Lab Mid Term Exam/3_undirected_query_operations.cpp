
/*  
Week 05 : lab mid term exam 
exam date: 150123 - 170123 - 100; 170123-220123 - 90; rest 80 marks 
exam writing date: 090223, thursday, 07.30 am 


qs 03: given a undirected graph, I will be given some query to solve, like add edges and print adjacent nodes of u 
*/

/*  
Create an undirected graph that supports the next operations:

AddEdge(u, v) - add to the graph an edge between the vertices (u, v);
Vertex(u) - print the list of vertices, adjacent with the vertex u.
There is no loops and multiple edges in the graph.

Input
The first line contains the number of vertices in a graph n (1 ≤ n ≤ 105). The next line contains the number of operations k (0 ≤ k ≤ 106). Each next line describes the operation in format: "1 <number> <number>" or "2 <number>", representing respectively the operation AddEdge(u, v) and Vertex(u).

It is guaranteed that the total amount of numbers to be printed during all operations Vertex, does not exceed 2 * 105.

Output
For each operation Vertex print in a separate line the list of adjacent vertices for a given vertex. The vertices in a list can be printed in any order. If some vertex hasn't adjacent vertices, print the empty line.

prb2472.gif

Sample 1
Inputcopy	Outputcopy
4
4
1 1 2
1 2 3
2 4
2 2
1 3

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
const int N = 1e5+100;

vec adjList[N];
int n, k;

void printAdj(int u)
{
        // if(adjList[u].size() == 0)
        // {
        //         printf("\n");
        //         return;
        // }

        for(int node : adjList[u])
        {
                printf("%d ", node);
        }
}

int main(){

        scanf("%d%d", &n, &k);

        for(int i=0; i<k; i++)
        {
                int op; 
                scanf("%d", &op);
                if(op == 1)
                {
                        int u, v;
                        scanf("%d%d", &u, &v);
                        adjList[u].pb(v);
                        adjList[v].pb(u);
                }
                else if(op == 2)
                {
                        int u;
                        scanf("%d", &u);
                        printAdj(u);
                }
        }



        return 0;
}