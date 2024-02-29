/*  
250123, Tuesday, 03.00 pm
check if a directed graph is a dag using kahn's algorihtm of toposort
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
vector<int>adjList[N];
int visited[N], parent[N], indegree[N];
int n = 101;


void find_edge(int x)
{
        for(int i=2; i<N; i++)
        {
                if(i % x == 0)
                {
                        adjList[x].push_back(i);
                }
        }
}


void check_dag(int src)
{
        queue<int>q;
        for(int node=1; node<=n; node++)
        {
                for(int adjNode : adjList[node])
                {
                        indegree[adjNode]++;
                }
        }

        for(int node=1; node<=n; node++)
        {
                if(indegree[node] == 0)
                        q.push(node);
        }

        int nodeCount = 0;
        while(!q.empty())
        {
                int parentNode  = q.front();
                nodeCount++;
                q.pop();

                for(int adjNode : adjList[parentNode])
                {
                        indegree[adjNode]--;
                        if(indegree[adjNode] == 0)
                                q.push(adjNode);
                }
        }
        
        // if(nodeCount == n)
        //         cout<<"The graph is a DAG"<<endl;
        // else 
        //         cout<<"The graph is not a DAG, It has Cycle"<<endl;
        cout<<nodeCount<<endl;
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

        int src = 2;
        check_dag(src);






        return 0;
}