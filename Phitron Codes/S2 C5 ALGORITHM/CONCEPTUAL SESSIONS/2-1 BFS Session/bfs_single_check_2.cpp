

    /*
    Algo, GT, Week 02, Conceptual Session, 2-1 : BFS
    1. BFS traversal
    2. Shortest Path find using BFS

    Mod date: 201222, Tuesday
    Watch Date: 301222, Friday, 03.30 pm
    */
    // 1. this code implies how to traverse using dfs
    // 2. and this code finds the level of each node so that we can find distance from source node to any particular node
    // given that we know level of a node is the shortest path from the source node (shortest path is
    // how many least edge used to go from source node to destination node).



    #include <bits/stdc++.h>
    using namespace std;

    bool visited[100];
    vector<int>adj[100];



    void bfs(int src)
    {
        memset(visited, false, sizeof(visited));


        queue<int>q;
        q.push(src);
        visited[src] = true;

        while(!q.empty())
        {
            int parentNode = q.front();
            q.pop();

            cout<< parentNode << " ";

            for(int i=0; i<adj[parentNode].size(); i++)
            {
                int adjacentNode = adj[parentNode][i];

                if(visited[adjacentNode] == false)
                {
                    visited[adjacentNode] = true;
                    q.push(adjacentNode);
                }
            }

        }



    }


    /*
    7 6

    0 1
    0 2
    1 3
    2 4
    2 5
    5 6


    */

    int main () {

        int V, E;
        cin>> V >> E;


        // undirected graph
        for(int i=0; i<E; i++)
        {
            int u, v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int src = 0;
        bfs(src);



        return 0;
    }

