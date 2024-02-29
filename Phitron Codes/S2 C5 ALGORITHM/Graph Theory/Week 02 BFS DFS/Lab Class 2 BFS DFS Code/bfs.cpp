/*
Week 02: Lab class 02

mod date: 221222, Thursday
watch date: 291222, Thursday, 03.00 pm
BFS code in cpp
 
*/

/*
pseudocode: 

- take the source
- take visited array and an empty queue 
- push the source and mark it visited
- while the queue is not empty: 
        - take the front of the queue
        - pop the front 
        - for all the adj_node of source: 
                - if visited[adj_node] == false: 
                        - visited[adj_node] = true
                        - q.push(adj_node)

*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e4;
int visited[N];
vector<int>adj_list[N];

void bfs(int src)
{
        queue<int>q;
        q.push(src);
        visited[src] = 1;

        while(!q.empty())
        {
                int front_node = q.front();
                q.pop();
                cout<< front_node << " ";

                for(auto adj_node : adj_list[front_node])
                {
                        if(visited[adj_node] == 0)
                        {
                                visited[adj_node] = 1;
                                q.push(adj_node);
                        }
                }


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

        bfs(0);

}












