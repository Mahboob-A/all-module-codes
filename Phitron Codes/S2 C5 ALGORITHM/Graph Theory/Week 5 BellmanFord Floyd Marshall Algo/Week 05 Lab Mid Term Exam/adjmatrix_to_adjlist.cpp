
/*  
100223, week 05, algo gt, 10.30 am friday 
convert adjmatrix into a adjlist 

*/

/*  
A graph is given. Determine does it contain a cycle of negative weight, and if so, print it.

Input
The first line contains the number of vertices n (1 ≤ n ≤ 100). Each of the next n lines contains n numbers - the adjacency matrix of the graph. Weights of the edges do not exceed 10000 by absolute value. If the edge is absent, the corresponding value is 100000.

Output
Print in the first line "YES", if a cycle exists, or "NO" otherwise. In the presence of the cycle output in the second row the number of vertices in it (assuming the same first and last) and the third row - tops included in this series in order of traversal. If several cycles - output any.

Sample 1
Inputcopy	Outputcopy
2
0 -1
-1 0
YES
3
1 2 1

*/

// ac code 

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
vecPii adjListWeighted[N];
int matrix[N][N];
int n, m;


void convertMatrixToListWeighted()
{
        for(int i=1; i<=n; i++)
        {
                for(int j=1; j<=n; j++)
                {
                        if(matrix[i][j] != 0)
                        {
                                adjListWeighted[i].pb({j, matrix[i][j]});
                        }
                }
        }


        // print 
        for(int i=1; i<=n; i++)
        {
                cout<<"i : "<<i<<" -> ";
                for(int j=0; j<adjListWeighted[i].size(); j++)
                {
                        cout<<adjListWeighted[i][j].f<<" "<<adjListWeighted[i][j].s<<"; ";
                }
                cout<<endl;
        }



}


// only handles unweighted matrix 
void convertMatrixToList()
{
        for(int i=1; i<=n; i++)
        {
                for(int j=1; j<=n; j++)
                {
                        // if matrix of i j is 1, then there must be an edge from i to j. 
                        // so push_back j in the i index 
                        if(matrix[i][j] == 1)
                        {
                                adjList[i].pb(j);
                        }
                }
        }

        // print
        for(int i=1; i<=n; i++)
        {
                cout<<"i : "<<i<<" -> ";
                for(int j=0; j<adjList[i].size(); j++)
                {
                        cout<<adjList[i][j]<<" ";
                }
                cout<<endl;
        }
}

/*  

// 0 based indexing 
4 
0 1 0 1 
1 0 1 1 
0 1 0 0 
1 1 0 0 

// 1 based indexing 
4
0 1 1 0 
1 0 1 1 
1 1 0 0 
0 1 0 0 

// 1 based weighted matrix 
4 
0 10 -3 0 
10 0 5 7 
-3 5 0 -4
0 7 -4 0

// 1 based weighted directed matrix 
4 
0 10 -3 0 
0 0 5 0 
0 0 0 -4 
0 7 0 0 

*/

int main(){

        cin>>n;
        // 1 based indexing (if 0 based, begin the all i j loop from 0)
        for(int i=1; i<=n; i++)
        {
                for(int j=1; j<=n; j++)
                {
                        cin>>matrix[i][j];
                }
        }

        // convertMatrixToList();
        convertMatrixToListWeighted();

                


        return 0;
}