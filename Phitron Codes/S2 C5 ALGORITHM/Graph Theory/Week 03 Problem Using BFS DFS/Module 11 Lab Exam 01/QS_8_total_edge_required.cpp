/*
Module date: 311223
Exam Writing Start Date: 130123, Friday, 10.00 pm
Today date: 170123, 12.00 pm 

Question 01: 
Write code to solve the following problem: https://cses.fi/problemset/task/1666		10


Steps: 

# The understanding 

The problem is to find the number of edges needed to connect all the components of the graph.
if the number of connected components is only one, then we don't need any more edges. 
If the number of connected components are 2, then we need count-1 (i.e 1) edges.
So, we always need extra ( number of connected components - 1) edges to connect all the components

while finding the connected components, if we find any node as not visited, 
before calling bfs or dfs, we will store the node form which the call is being made 
to print the from u -> v is an edge needed to make the graph connected 

1. First find the number of connected components in the graph. 
        1. if connected components are 1 : 
                - print needed edge 0 
        2. else if connected components are > 1 :
                - then -1 form the total connected components 
                - print the value 
                -  for i-0, i<num_of_connected_components, i++
                        print vector[i] << " " << vector[i+1]<<" ";
                                        u            ->         v 

*/


#include <bits/stdc++.h>
using namespace std;

#define pt pair<int, int>

const int N = 2e5 + 10;
vector<int>adjList[N];
int visited[N];

int n, m;


void dfs(int src)
{
        visited[src] = 1;
        for(auto adjNode : adjList[src])
        {
                if(!visited[adjNode])
                        dfs(adjNode);
        }
}


int main() {

        cin>>n>>m;
        
        for(int i=0; i<m; i++)
        {
                int u, v;
                cin>>u>>v;
                adjList[u].push_back(v);
                adjList[v].push_back(u);
        }

        vector<int>ans;
        int num_of_components = 0;
        for(int i=1; i<=n; i++)
        {
                if(visited[i] == 0)
                {
                        num_of_components++;
                        ans.push_back(i);
                        dfs(i);
                }
        }

        if(num_of_components == 1)
        {
                cout<<0<<endl;
        }
        else 
        {
                num_of_components--;
                cout<<num_of_components<<endl;
                for(int i=0; i<num_of_components; i++)
                {
                        cout<<ans[i]<<" "<<ans[i+1]<<endl;
                }
        }


        return 0;
}