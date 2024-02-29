/*
Module date: 311223
Exam Writing Start Date: 130123, Friday, 11.00 pm 
Today date: 130123, Friday, 10.00 pm 

Question 01: 
Write code to solve the single source shortest path problem on a DAG using DFS.
Take both the DAG and the source node as input and output the distance of each node.
(You can choose any graph representation or input format of your choice)			15

Steps: 

1. Just follow along dfs 
        1. mark source visited
        2. explore adjacent nodes 
                1. if the adjacent node is not visited
                        - level[adj] = level[src] + 1 
                        - dfs(adj)
                2. else if the level[adj] is greater than level[src] + 1
                        : make level of adj to current source's level + 1
                        - level[adj] = level[src] + 1 
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e3;

vector<int>adjList[N];
int visited[N];
int level[N];
int n, m;

void dag_level_dfs(int src)
{
        visited[src] = 1;
        for(auto adjNode : adjList[src])
        {
                if(!visited[adjNode])
                {
                        level[adjNode] = level[src] + 1;
                        dag_level_dfs(adjNode);
                }
                // if the adjacent node is already accessed, gave level and made recursive call, 
                // and made visited by other node 
                // and now if we find the adjacent node is visited, 
                // then we will see, the current source's level, if the level of adjacent node is 
                // greater than current src's level + 1, then the level is much greater, 
                // so, we will just decrease the level of adjacent node to the level of current source + 1.  
                else if(level[adjNode] > level[src] + 1)  
                {
                        level[adjNode] = level[src] + 1;
                }
        }
}

/*

5 5 
0 1
0 2
1 3
1 4
2 4

3 3
0 1 
1 2 
0 2

*/

int main() {

        cin >> n >> m;
        for(int i=0; i<m; i++)
        {
                int u, v, w;
                cin>>u>>v;
                adjList[u].push_back(v);
        }

  
        // finding the shortest path 
        int src = 0;
        level[src] = 0;
        dag_level_dfs(src);

        // printing level 
        for(int i=0; i<n; i++)
        {
                cout<<"Level/Distance of: "<<i<<" is: "<<level[i]<<endl;
        }


        return 0;
}