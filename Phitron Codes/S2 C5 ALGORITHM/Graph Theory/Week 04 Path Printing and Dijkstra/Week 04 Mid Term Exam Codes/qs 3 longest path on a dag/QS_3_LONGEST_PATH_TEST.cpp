


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
int n, m, newPathLen, begin1, selectedLen;


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



int main() {

        for(int node=2; node<N; node++)
        {
                for(int j=2; j<N; j++)
                {
                        if(j%node == 0)
                        {
                                adjList[node].push_back(j);
                        }
                }
        }


        for(int node=2; node<N; node++)
        {
                newPathLen = findPath(node);
                if(selectedLen < newPathLen)
                {
                        begin1 = node;
                        selectedLen = newPathLen;
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