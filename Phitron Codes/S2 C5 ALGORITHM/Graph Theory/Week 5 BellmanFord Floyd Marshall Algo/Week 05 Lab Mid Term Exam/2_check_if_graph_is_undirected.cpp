

/*  
Week 05 : lab mid term exam 
exam date: 150123 - 170123 - 100; 170123-220123 - 90; rest 80 marks 
exam writing date: 090223, thursday, 07.30 am 


qs 02: a adj matrix will be given of n size. I have to check whether the adjMatrix is trully undirected graph  
*/

/*  

For a given square matrix n x n of zeros and ones determine whether it can be the adjacency matrix of a simple undirected graph. The simple graph does not contain self loops and multiple edges.

Input
The first line contains the value of n (1 ≤ n ≤ 100). Each of the next n lines contains n numbers, describing the adjacency matrix.

Output
Print YES, if the graph is simple undirected and NO otherwise.

Sample 1
Inputcopy	Outputcopy
3
0 1 1
1 0 1
1 1 0
YES
Sample 2
Inputcopy	Outputcopy
3
0 1 1
1 0 1
0 1 0
NO

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
const int N = 500;



int main(){
	
        int n, m;
	cin>>n;
        int matrix[n+2][n+2];

        if(n<1)
        {
                cout<<"NO"<<endl;
                return 0;
        }

	for(int i=1; i<=n; i++)
        {
                for(int j=1; j<=n; j++)
                {
                        cin>>matrix[i][j];
                }
        }

        bool is_undirected = true;
	for(int i=1; i<=n; i++)
        {
                for(int j=1; j<=n; j++)
                {
                        // if matrix of ij != ji then this is not undirected 
                        if(matrix[i][j] != matrix[j][i])
                        {
                                is_undirected = false;
                        }
                        // checking self loop 
                        else if(i == j && matrix[i][j] == 1)
                        {
                                is_undirected = false;
                        }
                }
        }

        if(is_undirected)
                cout<<"YES"<<endl;
        else
                cout<<"NO"<<endl;


	return 0;
}
