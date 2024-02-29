/*
Module date: 311223
Exam Writing Start Date: 130123, Friday, 10.00 pm
Today date: 140123, 09.00 am 

Question 01: 
Write code to solve cycle detection in a directed graph using BFS.			15

Steps: 

Kahn's algorithm of toposort using bfs 
we can use Kahn's algorithm of topoSort using bfs to know if is it dag or not. if dag then we can make the topoSort, else it is not a dag,
i.e the directed graph has cycle. 
just after the popping the front, push it in another queue - this queue will store the topoSort // to store the topoSort
we are trying to implement topoSort using Kahn's algorithm using bfs. and we are taking a nodeCount varialbe,
if nodeCount is equal to number of nodes, then it is a DAG and it doesnot have any cycle, but if nodeCount != n, it has cycle 
for checking cycle, we can also run a loop till nodes, and check if indegree[node] != 0, then we can say, there's a cycle 

*/




#include <bits/stdc++.h>
using namespace std;

#define pt pair<int, int>

const int N = 1100;
vector<int>adjList[N];
int indegree[N];

int n, m;

bool has_cycle(int src)
{
        queue<int>q;
        
        // find indegree of each node /incoming degree to a node/ 
        for(int node=0; node<n; node++)
        {
                for(int adjNode : adjList[node])
                {
                        indegree[adjNode]++;
                }
        }

        // find the nodes that has indegree of 0. there's always a node in acyclic digraph with  indegree 0. 
        // in acyclic digraph, there's only one indegree to any node, there can have multiple outdegree, but, to be acyclic, it should have only one indegree 
        // if the there's no node that has indegree of 0, then it is acyclic graph, and it will directly return true below 
        for(int node=0; node<n; node++)
        {
                if(indegree[node] == 0)
                        q.push(node);
        }

        // run while loop and decrease indegree of the node that is popped from the queue 
        // nodeCount and number of edges will always equal if it's a DAG, else nodeCount == 0 || nodeCount < n.
        int nodeCount = 0;  
        while(!q.empty())
        {
                int parentNode = q.front();
                nodeCount++;
                q.pop();


                for(int adjNode : adjList[parentNode])
                {
                        indegree[adjNode]--;    
                        if(indegree[adjNode] == 0)  // if indegree of adjNode becomes 0, then it only had one indegree 
                                q.push(adjNode);
                }
        }

        if(nodeCount == n)   // if nodeCount and number of edges are same then no cycle 
                return false;
        return true;
}

/*
no cycle 

5 6
0 1
0 2
1 3
3 2
3 4
2 4

has cycle

5 6
0 1
2 0
1 3
3 2
3 4
2 4

3 3 
0 1 
1 2
2 0


3 3 
1 2
2 3
3 1

4 4 
0 1
1 2 
2 3
3 1


*/

int main() {

        cin>>n>>m;
        
        for(int i=0; i<m; i++)
        {
                int u, v;
                cin>>u>>v;
                adjList[u].push_back(v);
        }

        bool cycle = has_cycle(0);
        if(cycle)
                cout<<"Graph has cycle"<<endl;
        else 
                cout<<"Graph has no cycle"<<endl;

        return 0;
}