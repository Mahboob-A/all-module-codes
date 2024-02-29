

/*  
Week 05 : lab mid term exam 
exam date: 150123 - 170123 - 100; 170123-220123 - 90; rest 80 marks 
exam writing date: 100223, friday, 08.00 pm 

qs 10 : I will be given a adj matrix of graph. it might have negative cycle. 
If so, I have to print the cycle. 
use bellman ford algo. 



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

// trying the problem using adjacency matrix 
// works, but gives timeout at 97th // see the code with adjlist as ac 
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
#define INT_INF 1e5   // as the problem quoted the inf is 100000 
const int N = 110;

int parent[N];
int dist[N];
int matrix[N][N];
int n, m;


// trying the problem using adjacency matrix 
void print_cycle(int lastNode)
{
        // cout<<"print_cycle lastNode : "<<lastNode<<endl;
        for(int i=0; i<n-1; i++)
        {
                lastNode = parent[lastNode];
        }

        int beginNode = lastNode;
        int curr_node = lastNode;

        vector<int>path;
        path.pb(curr_node);
        while(1)
        {
                curr_node = parent[curr_node];
                path.pb(curr_node);
                if(curr_node == beginNode)
                        break;
        }
        cout<<"YES"<<endl;
        cout<<path.size()<<endl;

        reverse(path.begin(), path.end());

        for(int node : path)
        {
                cout<<node<<" ";
        }
        cout<<endl;
}

void findCycle()
{
        for(int i=1; i<=n; i++)
        {
                dist[i] = INT_INF;
        }


        bool negativeCycle = false;
        int lastNode = -1;
        for(int iteration = 1; iteration<=n-1; iteration++)   // if  iteration <= n then check in the relaxing if iteration == n, then cycle is true 
        {
                for(int i=1; i<=n; i++)   // i 
                {
                        for(int j=1; j<=n; j++)   // j 
                        {
                                if(matrix[i][j] != INT_INF)
                                {
                                        if(dist[j] > dist[i] + matrix[i][j])
                                        {
                                                dist[j] = dist[i] + matrix[i][j];
                                                parent[j] = i;
                                                // if(iteration == n)
                                                // {
                                                //         negativeCycle = true;
                                                //         // lastNode = j;
                                                // }
                                        }
                                }
                        }
                }
        }

        // chekcing cycle 
        for(int i=1; i<=n; i++)
        {
                for(int j=1; j<=n; j++)
                {
                        if(matrix[i][j] != INT_INF)
                        {
                                if(dist[j] > dist[i] + matrix[i][j])  // chekcing the col node in respect of row or previous node(i) of j 
                                {
                                        negativeCycle = true;
                                        lastNode = j;
                                        // cout<<"last node: "<<lastNode<<" j "<<j<<endl;
                                }       
                        }
                }
        }

        if(negativeCycle)
        {
                print_cycle(lastNode);
        }
        else 
        {
                cout<<"NO"<<endl;
        }


}

/*  


// has cycle
2
0 -1
-1 0


*/

int main(){


        cin>>n;
        for(int i=1; i<=n; i++)
        {
                for(int j=1; j<=n; j++)
                {
                        int w;
                        cin>>w;
                        if(w == 100000)
                        {
                                matrix[i][j] = INT_INF;   // INT_INF is also 100000 
                        }
                        else 
                        {
                                matrix[i][j] = w;
                        }
                }
        }

        // bellman ford 
        findCycle();


        return 0;
}