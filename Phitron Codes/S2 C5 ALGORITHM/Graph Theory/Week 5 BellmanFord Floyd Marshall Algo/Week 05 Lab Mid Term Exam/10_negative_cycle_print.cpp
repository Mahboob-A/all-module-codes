

/*  
Week 05 : lab mid term exam 
exam date: 150123 - 170123 - 100; 170123-220123 - 90; rest 80 marks 
exam writing date: 100223, friday, 03.30 pm 

qs 10 : I will be given a adj matrix of graph. it might have negative cycle. 
If so, I have to print the cycle. 
use bellman ford algo. 
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
#define INT_INF 1e5;
const int N = 110;



vecPii adjList[N];
int visited[N];
int parent[N];
int dist[N];
int matrix[N][N];
int n, m;


void print_cycle(int lastNode)
{
        for(int i=0; i<n-1; i++)
        {
                lastNode = parent[lastNode];
        }

        int beginNode = lastNode;
        int curr_node = lastNode;

        vec path;
        path.pb(curr_node);
        while(true)
        {       
                curr_node = parent[curr_node];
                path.pb(curr_node);
                if(curr_node == beginNode)
                        break;
        }

        reverse(path.begin(), path.end());

        cout<<"YES"<<endl;
        cout<<path.size()<<endl;
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

        int lastNode = -1;
        bool negative_cycle = false;
        for(int i=1; i<=n; i++)
        {       
                for(int node=1; node<=n; node++)
                {
                        for(auto [adjNode, weight] : adjList[node])
                        {
                                if(dist[node] + weight < dist[adjNode])
                                {
                                        dist[adjNode] = dist[node] + weight;
                                        parent[adjNode] = node;
                                        if(i==n)
                                        {
                                                negative_cycle = true;
                                                lastNode = node;
                                        }
                                }
                        }
                }
        }

        if(negative_cycle)
        {
                print_cycle(lastNode);
        }
        else
        {
                cout<<"NO"<<endl;
        }
}



void convertMatrixToListWeighted()
{
        for(int i=1; i<=n; i++)
        {
                for(int j=1; j<=n; j++)
                {
                        if(matrix[i][j] != 0   || matrix[i][j] != 100000)
                        {
                                adjList[i].pb({j, matrix[i][j]});
                        }
                }
        }
}

/*  

//has cycle  input for adj list not matrix 
4 5 
1 2 -1 
2 3 5 
3 1 -6 
2 4 2 
3 4 5 

// has cycle
2
0 -1
-1 0

// this is the style of taking input of adjacency matrix in vector 
for (int i = 1; i <= n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            int w;
            cin >> w;
            if(i == j && w == 0)
                continue;
                vector[i].push_back({j, w});
        }
    }
vector<pair<int, int>> vector


*/


// AC ANSWER 
int main(){

        cin>>n;

        
        for(int i=1; i<=n; i++)
        {
                for(int j=1; j<=n; j++)
                {
                        // cin>>matrix[i][j];
                        int w;
                        cin>>w;
                        // if(i==j && w==0)
                        if(w==100000)
                                continue;
                        adjList[i].pb({j, w});
                }
        }



        // convertMatrixToListWeighted();
        
        // bellman ford 
        findCycle();



        return 0;
}