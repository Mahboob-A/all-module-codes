/*
Module date: 311223
Exam Writing Start Date: 130123, Friday, 10.00 pm
Today date: 170123, 0.8:00 am 

Question 01: 
Write code to solve the problem https://cses.fi/problemset/task/1669 again using BFS. 
Can you come up with your own algorithm?								15

You can find the pseudocode for detecting cycles in an undirected 
graph using DFS in this link: https://ideone.com/ZdPwm3

Now, write code to solve the problem: https://cses.fi/problemset/task/1669
You don’t need to print the path


Steps: 

same as directed graph 

*/



// ##############
        // cycle detection in undirected graph using bfs 
// ##############

#include <bits/stdc++.h>
using namespace std;

#define pt pair<int, int>

const int N = 1100;
vector<int>adjList[N];
int visited[N];
int parent[N]; // for 1st algo 
int n, m;

// algo 1: with parent array 
bool has_cycle_1(int src)
{
        queue<int>q;
        q.push(src);
        visited[src] = 1;

        while(!q.empty())
        {
                int headNode = q.front();
                q.pop();

                for(auto adjNode : adjList[headNode])
                {
                        if(visited[adjNode] == 0)  // if the adjNode is not visited then, 
                        {
                                parent[adjNode] = headNode;  // make the headNode as parent of adjNode
                                visited[adjNode] = 1;    // rest is same 
                                q.push(adjNode);
                        }
                        // if the we find that the adjNode is already visited, 
                        // then we are expecting that the adjNode is the adjacent node is the parent of current 
                        // headNode. If adjacent node is not found as the value of current headNode, then 
                        // the node must be made visited by other node and that node became the head of the adjacent
                        // node, so, we can conclude that the atleast two edges are pointed to same node. 
                        else if(parent[headNode] != adjNode)
                                return true;
                }
        }
        return false;   // if no true is returned, then there's no cycle 
}

// another algorithm with pair: check cycle in undirected graph using bfs  
bool has_cycle(int src)
{
        queue<pair<int, int>>q;
        visited[src] = 1;
        q.push({src, -1});

        while(!q.empty())
        {
                // pair<int, int> head = q.front();
                // int node = head.first;
                // int parent = head.second;

                int node = q.front().first;
                int parent = q.front().second;
                q.pop();

                for(auto adjNode : adjList[node])
                {
                        if(visited[adjNode] == 0)
                        {
                                visited[adjNode] = 1;
                                q.push({adjNode, node});
                        }
                        else if(parent != adjNode)
                        {
                                return true;
                        }
                }
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
                        cycle = has_cycle(i);
                        if(cycle)
                                break;
                }
        }

        if(cycle)
                cout<<"The grpah has cycle"<<endl;
        else    
                cout<<"The graph has no  cycle"<<endl;

        

        return 0;
}