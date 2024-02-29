/*  
Week 05 : lab mid term exam 
exam date: 150123 - 170123 - 100; 170123-220123 - 90; rest 80 marks 
exam writing date: 090223, thursday, 07.30 am 
 
question 01: a matrix will be given of undirected graph. I have to output the number of edges.  
*/

/*  

In the galaxy of "Milky Way" on the planet "Neptune" there are n cities, some of them are connected by roads. Emperor "Maximus" of Galaxy "Milky Way" has decided to make an inventory of roads on the planet "Neptune". But as it turned out he was not good at math, so he asks you to count the number of roads.

Input
The first line contains the number n (0 ≤ n ≤ 100). Each of the next n lines contains n numbers, each of which is one or zero. Moreover, if the position (i, j) of square matrix is one, then the i-th and j-th city are connected by road, and if zero, it is not connected.

Output
Print the number of roads on "Neptune" planet.

prb992.gif

Sample 1
Inputcopy	Outputcopy
5
0 1 0 0 0 
1 0 1 1 0 
0 1 0 0 0 
0 1 0 0 0 
0 0 0 0 0

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
vector<int>ans;
vector<pii>allSrc;
pii src, destination;
//priority_queue<int, vec, greater<int>>q;
int visited[N];
int parent[N];
int dist[N];
int n, m;
int matrix[N][N];

// vec<vec> adjMatrix(N, vec(N));
// vector<vector<int>> adjMatrix(n, vector<int>(n));

int main(){
	
	cin>>n;
        
        int count=0;
	for(int i=0; i<n; i++)
        {
                for(int j=0; j<n; j++)
                {
                        cin>>matrix[i][j];
                        if(matrix[i][j] == 1)
                        {
                                count++;
                        }
                }
        }

        // for(int i=0; i<n; i++)
        // {
        //         for(int j=0; j<n; j++)
        //         {
        //                 if(matrix[i][j] == 1)
        //                 {
        //                         count++;
        //                 }
        //         }
        // }
	
        cout<<count/2<<endl;

	return 0;
}
