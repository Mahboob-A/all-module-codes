

/*
    Algo, GT, Week 02, Conceptual Session, 2-1 : BFS
    1. BFS traversal
    2. Shortest Path find using BFS

    Mod date: 201222, Tuesday
    Watch Date: 301222, Friday, 03.30 pm
    */

    /// i have seen this algorithm pushes ( n + n - 2 ) nodes in the queue in this approach.
    /// asks support why we should use this approach
    /// finding level of two nodes code in the 2nd code




    #include <bits/stdc++.h>
    using namespace std;

    bool visited[100];
    vector<int>adj[100];

    void bfs(int src)
    {
        queue<int>q;
        q.push(src);

        memset(visited, false, sizeof(visited));

        while(!q.empty())
        {
            int parentNode = q.front();
            q.pop();

            if(visited[parentNode] == true)
                continue;

            cout<< parentNode << " ";

            for(int i=0; i<adj[parentNode].size(); i++)
            {
                int adjacentNode = adj[parentNode][i];
                if(visited[adjacentNode] == false)
                {
                    q.push(adjacentNode);
                }
            }
            visited[parentNode] = true;

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


        for(int i=0; i<E; i++)
        {
            int u, v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        bfs(0);



        return 0;
    }
