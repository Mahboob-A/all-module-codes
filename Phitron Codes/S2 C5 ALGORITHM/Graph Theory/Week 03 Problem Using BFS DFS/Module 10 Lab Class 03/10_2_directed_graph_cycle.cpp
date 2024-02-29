/*
Week 03: 
Module date: 311222, Saturday
Watch date: 100123, Tuesday, 10.00 am 
10 - 1 : Check cycle in directed graph - concept 
10 - 2: Check cycle in directed graph - code with dfs  // can also be done with bfs   
*/

/*
the concept is to when we get any node for the first time, and then we explore the adjacent nodes 
of the source node, then the source node becomes paused in the stack and it does not resume 
until the 2nd node returns. So, if we see that a node is still paused that means its 2nd node has not returned
yet but we came to the 1st node that means there must be some other way to get back to the 
source node with out the 2nd node it first made recursive call. It means a cycle right. 
So, if we see any node with 1 as their status in the visited array, that means the node has not
done yet with its adjacent exploration and still we are back to it. So, there must a loop or  a cyle to get 
back to it. 

And whenever we fully explore a node, we will mark it as 2 in the visited array and we will not get 
much bothere with it as this node has done its exploration with its adjacent nodes.  
*/

// CSES Round Trip Problem   100123, Tuesday, 03.30 pm 

#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+10;

vector<int>adjList[N];
int visited[N];

vector<int>cycleNode;  // to store the cycle nodes in the cycle 

bool check_cycle_dfs(int src)
{
        visited[src] = 1;  // making the src node as paused 
        for(int adjNode : adjList[src])
        {
                if(visited[adjNode]  ==  0)  // if the node is not visited 
                {
                        bool has_cycle = check_cycle_dfs(adjNode);   // receive the answer of the adjacent node 
                        if(has_cycle)
                        {
                                cycleNode.push_back(adjNode);  // pushing the node in the cycle 
                                return true;
                        }
                                
                }
                else if(visited[adjNode]  == 1)
                {
                        cycleNode.push_back(adjNode);
                        return true;   // if adjNode is 1 in visited, then there must be a cycle 
                }
        }
        visited[src] = 2;   // if the src node has no adjNode then it will come here, so make it as visited
                                  // and if the node has been explored fully, then mark it as 2 as by it I am menaing that this node 
                                  // is fully visited
        return false;    // if no node returns true in the for loop, then there is no cycle in the graph 
                                // return false

}

/*
4 nodes and 5 edges 

4 5 
1 3
2 1
3 2 
2 4
3 4


*/

int main() {

        int n, m;
        cin >> n >> m;
        for(int i=0; i<m; i++) 
        {
                int u, v;
                cin >> u >> v;
                adjList[u].push_back(v);
        }

        bool has_cycle = false;

        for(int i=1; i<=n; i++)
        {
                if(visited[i] == 0)
                {
                        has_cycle = check_cycle_dfs(i);
                        if(has_cycle)
                        {
                                cycleNode.push_back(i);
                                break;
                        }
                }
        }

        // if(has_cycle) 
        // {
        //         cout<<"The graph has cycle"<<endl;
        //         reverse(cycleNode.begin(), cycleNode.end());
        //         for(int i=0; i<cycleNode.size(); i++)
        //                 cout<<cycleNode[i]<<" ";
        // }
        // else cout << "The graph has no cycle" << endl;

        // for cses Round Trip II problem. Printing the number of nodes in the cylce, 
        // afrter reversing it, as recursion would push_back in reverse way and 
        // printing the nodes in the cycle 
        reverse(cycleNode.begin(), cycleNode.end());
        if(has_cycle) 
        {
                cout<<cycleNode.size()<<endl;
                for(int i=0; i<cycleNode.size(); i++)
                        cout<<cycleNode[i]<<" ";
        }
        else cout << "IMPOSSIBLE" << endl;

        return 0;
}