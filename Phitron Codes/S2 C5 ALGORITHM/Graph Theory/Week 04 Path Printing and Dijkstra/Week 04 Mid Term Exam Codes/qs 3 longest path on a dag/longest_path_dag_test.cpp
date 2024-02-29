


 
 



// longest path in DAG 
// 250123, Tuesday, 07.00 pm 

#include <bits/stdc++.h>
using namespace std;

const int N = 102;
vector<int>adjList[N];
vector<int>visited(N);
stack<int>st;
vector<int>dist(N);
vector<int>indegree(N, 0);
vector<int>parent(N, -1);
int n, m, len, begin1, selected_path;


// dp, find the longesst path sequence 
int findPath(int src)
{
        if(dist[src])
        {
                return dist[src];
        }
        dist[src] = 1;

        for(int adjNode : adjList[src])
        {
                int forward = findPath(adjNode);
                if(dist[src] < forward + 1)
                {
                        dist[src] = dist[adjNode] + 1;
                        parent[src] = adjNode;
                }
        }
        return dist[src];
}

// dfs find longest distance
void processLongestPath2(int src)
{
    visited[src] = 1;
    dist[src] = 0;
 
    for(int adjNode : adjList[src])
    {
        if(!visited[adjNode])
        {
            processLongestPath2(adjNode);
        }
        // use this condition or below condition
        // dist[src] = max(dist[src] , 1 + dist[adjNode]);
 
        // use this condition 
        if(dist[adjNode] + 1 > dist[src])
        {
                dist[src] = dist[adjNode] + 1;
                // parent[adjNode] = src;
        }
    }
}


int main() {

        for(int i=2; i<N; i++)
        {
                for(int j=2; j<N; j++)
                {
                        if(j%i == 0)
                        {
                                adjList[i].push_back(j);
                        }
                }
        }


        for(int i=2; i<N; i++)
        {
                if(visited[i] == 0)
                {
                        processLongestPath2(i);
                }
        }
        
        cout<<*max_element(dist.begin(), dist.end());

        for(int i=2; i<N; i++)
        {
                len = findPath(i);
                if(selected_path < len)
                {
                        begin1 = i;
                        selected_path = len;
                }
        }

        int curr_node = begin1;
        while(parent[curr_node] != -1)
        {
                cout<<curr_node<<"  ";
                if(parent[curr_node] == curr_node) 
                        break;
                curr_node = parent[curr_node];
        }



        return 0;
}