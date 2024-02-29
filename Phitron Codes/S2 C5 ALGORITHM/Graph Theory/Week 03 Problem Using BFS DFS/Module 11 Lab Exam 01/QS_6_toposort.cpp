/*
Module date: 311223
Exam Writing Start Date: 130123, Friday, 10.00 pm
Today date: 170123, 10:00 am 

Write code to solve the topological sorting problem https://cses.fi/problemset/task/1679/ using BFS. 												10
You can find the pseudocode for implementing topsort using BFS in this link: https://ideone.com/6L967A

Can you give an intuitive description of why this algorithm works?

Steps: 


*/


// Kahn's algorithm of toposort using bfs 
// we can use Kahn's algorithm of topoSort using bfs 

#include <bits/stdc++.h>
using namespace std;

#define pt pair<int, int>

const int N = 2e5+10;
vector<int>adjList[N];
int indegree[N];
queue<int>ans;    // for bfs we can take queue or vector and for dfs we need to take stack 
int n, m; 

bool topoSort()
{
        queue<int>q;
        
        // find indegree of each node /incoming degree to a node/ 
        for(int node=1; node<=n; node++)
        {
                for(int adjNode : adjList[node])
                {
                        indegree[adjNode]++;
                }
        }

        // find the nodes that has indegree of 0. there's always a node in acyclic digraph with  indegree 0. 
        // in acyclic digraph, there's only one indegree to any node, there can have multiple outdegree, but, to be acyclic, it should have only one indegree 
        // if the there's no node that has indegree of 0, then it is acyclic graph, and it will directly return true below 
        for(int node=1; node<=n; node++)
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
                ans.push(parentNode);
                nodeCount++;
                q.pop();

                for(int adjNode : adjList[parentNode])
                {
                        indegree[adjNode]--;    
                        if(indegree[adjNode] == 0)  // if indegree of adjNode becomes 0, then it only had one indegree 
                                q.push(adjNode);
                }
        }

        bool is_possible = true;
        for(int i=1; i<=n; i++)
        { 
                if(indegree[i] != 0)  // if indegree of any node is not 0, then the topological sort is not possible, i.e it is a cyclic graph 
                {
                        is_possible = false;  // now it is a cyclic grpah, then toposort is not possible
                        break;
                }
        }
        return is_possible;

        // another method to detect if possible, if nodeCount is equal to number of nodes, then it is possible to implement toposort, else not 
        // possible
//         if(nodeCount == n) // yes, toposort is possible
//                 return true;
//         return false;          // not possible, there's must be cycle 
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


7 8 
1 2
2 5
2 3
2 4
6 4
6 2
7 2
7 5

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



*/

int main() {

        cin>>n>>m;
        
        for(int i=0; i<m; i++)
        {
                int u, v;
                cin>>u>>v;
                adjList[u].push_back(v);
        }

        bool is_possible = topoSort();
        if(is_possible)
        {
                while(!ans.empty())   // we could also take vector to store the topo order 
                {
                        cout<<ans.front()<<" ";
                        ans.pop();
                }
                cout<<endl;
        }
        else 
                cout<<"IMPOSSIBLE"<<endl;

        return 0;
}