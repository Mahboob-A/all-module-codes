/*
Module date: 311223
Exam Writing Start Date: 130123, Friday, 10.00 pm
Today date: 140123, 08.20 pm 

Question 01: 
We have seen cycle detection in a directed graph . 
Now we are interested in detecting cycles in an undirected graph using DFS. 
A cycle in an undirected graph has at least 3 nodes in it. For example, the following graph has a 
cycle consisting nodes 1, 2 & 3. 										15

You can find the pseudocode for detecting cycles in an undirected 
graph using DFS in this link: https://ideone.com/ZdPwm3

Now, write code to solve the problem: https://cses.fi/problemset/task/1669
You don’t need to print the path


Steps: 

For undirected graph, we will keep track the parent nodes 
If any node that is marked visited, we will check if the node came from same 
parent, if the parent node is different, we can conclude that there's a cycle

*/

// ##############
        // cycle detection in undirected graph using dfs 
// ##############

#include <bits/stdc++.h>
using namespace std;

#define pt pair<int, int>

const int N = 1100;
vector<int>adjList[N];
int visited[N];
int parent[N]; // for 3rd algo 
int n, m;

// with pair // the 1st call will be {i, -1} the 1st node's parent will be anything negative value 
bool has_cycle_1(pair<int, int>src)
{
        int node = src.first;
        int parent = src.second;
        visited[node] = 1;

        for(int adjNode : adjList[node])
        {
                if(visited[adjNode] == 0)
                {
                        if(has_cycle_1({adjNode, node}) == true)  // make node as parent of adjNode 
                                return true;
                }
                // if the parent and adjNode is not same, we have come to a node 
                // that is already marked visited by other parent and this adj node is also in the adjacency list of other parent 
                // than the current parent 
                else if(adjNode != parent) 
                        return true;
        }
        return false;
}

// not with pair 
bool has_cycle_2(int src, int parent)
{
        visited[src] = 1;
        for(int adjNode : adjList[src])
        {
                if(!visited[adjNode])
                {
                        bool cycle = has_cycle_2(adjNode, src);  // now src as the parent of adjacent node 
                        if(cycle)
                                return true;
                }
                else if(adjNode != parent)   // if adjNode is already visited and the adjNode is not the parent node of src node
                        return true;
        }
        return false;
}


// with parent array 
bool has_cycle_3(int src)
{
        visited[src] = 1;
        for(int adjNode : adjList[src])
        {
                // if the adjNode is the parent of src node, the continue 
                if(parent[src] == adjNode)
                        continue;  

                if(visited[adjNode] == 0)
                {
                        parent[adjNode] = src;   // if the adjNode is not visited, then put src as parent of adjNode 
                        if(has_cycle_3(adjNode) == true)
                                return true;
                }
                else if(parent[src] != adjNode)  // if the parent of src node is not adjNode, then it must be a cycle 
                        return true;
        }
        return false;
}


/*
has cycle 

5 6
0 1
0 2
1 3
3 2
3 4
2 4

has cycle 

3 3 
0 1 
1 2
2 0

has cycle 

3 3 
1 2
2 3
3 1

no cycle 

4 4 
0 1
1 2 
2 3
3 4

no cycle

7 4 
0 1
2 3
3 4
5 6


*/

int main() {

        cin>>n>>m;
        
        for(int i=0; i<m; i++)
        {
                int u, v;
                cin>>u>>v;
                adjList[u].push_back(v);
                adjList[v].push_back(u);
        }

        bool cycle = false;
        for(int i=0; i<n; i++)
        {
                if(visited[i] == 0)
                {
                        // 1st algo 
                        // if(has_cycle_1({i, -1}) == true)
                        // {
                        //         cycle = true;
                        //         break;
                        // }

                        // 2nd algo 
                        // if(has_cycle_2(i, -1) == true)   // -1 as initial parent of calling node 
                        // {
                        //         cycle = true;
                        //         break;
                        // }

                        // 3rd algo 
                        if(has_cycle_3(i) == true)   
                        {
                                cycle = true;
                                break;
                        }
                }
        }

        if(cycle)
                cout<<"The grpah has cycle"<<endl;
        else    
                cout<<"The graph has no  cycle"<<endl;

        

        return 0;
}