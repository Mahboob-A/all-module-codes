/*
Week 02: Lab class 02

mod date: 221222, Thursday
watch date: 291222, Thursday, 02.30 pm
DFS  code in cpp

*/

/*
pseudocode: 
- take the source 
- take visited array 
- print the source 
- mark the source in visited as true 
- for all adj_node of source: 
        - if visited[adj_node] == false: 
                - dfs(adj_node)

*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e4;
int visited[N];
vector<int>adj_list[N];

void dfs(int src)
{
        cout << src << " ";
        visited[src] = 1;
        for(auto adj_node : adj_list[src])
        {
                if(visited[adj_node] == 0)
                        dfs(adj_node);
        }
}

/*

6 6 

0 1 
1 2 
2 3 
2 4
5 4
1 5

*/

int main() {

        int V, E;
        cin>> V >> E;

        for(int i=0; i<E; i++)
        {
                int u, v;
                cin>>u>>v;
                adj_list[u].push_back(v);
                adj_list[v].push_back(u);
        }

        dfs(0);

}
