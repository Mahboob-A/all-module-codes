/*  
Module date: 100123, Tuesday
Watch date: 300123, Monday
Code write date: 030223, Friday, 07.30 pm 

Week 05 : Bellman-Ford Algorithm 
17-5: Negative cycle print 

Complexity: 
TC: 
avarage: O(n * m)
optimal: O(n^2)
worst: O(n^3)

SC: 
O(n)

https://cses.fi/problemset/task/1197
*/

/*  
        In bellman ford algo, if we need to find sssp then we need the source and to print the sssp source 
        we also need to source but if our task is only to find if any graph has negative cycle, we 
        do not need any source and we do not need any source to print the cycle. 

        Steps: 
                - run outer iteration till n times: 
                        - check if any node v is updated in n'th iteration 
                        - if true, store the updated v node in a variable say "last_updated_node"
                        - make "has_cycle" as true

                to print cycle: 
                        - run a loop i = 1 to n-1: 
                                - trace parent of last_updated_node
                        
                        - take a vector "cycle"
                        - copy last_updated_node to a variable say "selected_node"
                        - push_back selected_node in cycle vector 
                        - run a while true: 
                                - trace parent of selected_node (selected_node = parent[selected_node])
                                - check if selected_node == last_updated_node: 
                                        - break 
                                - push_back selected_node in cycle vector 
                        - reverse the vector 
                        - print the cycle vector 
        
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
vector<int>ans;
vector<pii>allSrc;
pii src, destination;
//priority_queue<pii, vecPii, greater<pii>>q;
vecPii adjList[N];
int visited[N];
int parent[N];
int dist[N];
int n, m;

void print_path(int last_updated_node)
{
        int selected_node = last_updated_node;   

        for(int i=0; i<n-1; i++)
        {
                selected_node = parent[selected_node];   // trace back n-1 times to enter into the cycle 
        }

        vec cycle;
        int first_node = selected_node;   // cycle is at first_node

        cycle.pb(selected_node);   // pushing here because as the answer needs to be printed from the starting node of the cycle begin 
        while(true)
        {
                selected_node = parent[selected_node];
                cycle.pb(selected_node);
                if(selected_node == first_node)  // if we encounter the selected_node as the first_node, it means we have taken all the nodes in the cycle 
                        break;
        }
        reverse(cycle.begin(), cycle.end());

        cout<<"YES"<<endl;
        for(int node : cycle)
        {
                cout<<node<<" ";
        }
        cout<<endl;

}

void findCycle_BellmanFord()
{
        for(int i=1; i<=n; i++)
        {
                dist[i] = INT_INF;
        }

        int last_updated_node = -1;
        bool negative_cycle = false;

        for(int i=1; i<=n; i++)
        {
                for(int node = 1; node<=n; node++)
                {
                        for(auto edge_entry : adjList[node])
                        {
                                int adjNode = edge_entry.f;
                                int weight = edge_entry.s;

                                if(dist[node] + weight < dist[adjNode])
                                {
                                        dist[adjNode] = dist[node] + weight;
                                        parent[adjNode] = node;
                                        if(i==n)
                                        {
                                                negative_cycle = true;
                                                last_updated_node = adjNode;
                                        }
                                }
                        }
                }
        }
        // cout<<negative_cycle<<endl;
        if(negative_cycle == true)
        {
                print_path(last_updated_node);
        }
        else
        {
                cout<<"NO"<<endl;
        }


}

/*  
4 5 
1 2 1
2 4 1
3 1 1
4 1 -3 
4 3 -2


*/

int main(){

        cin>>n>>m;
        for(int i=0; i<m; i++)
        {
                int u, v, w;
                cin>>u>>v>>w;
                adjList[u].pb({v, w});
        }


        
        findCycle_BellmanFord();

        return 0;
}
   