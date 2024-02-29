

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

    bool visited[100];    // to check if the node is visited
    vector<int>adj[100];   // array of vector

    int level[100];       // array to store the level of nodes

    void bfs(int src)
    {
        memset(visited, false, sizeof(visited));   // making the visited array as false initially
        memset(level, -1, sizeof(level));           // making the level array as -1 initially

        queue<int>q;
        q.push(src);              // push the source in the queue
        visited[src] = true;    // make the source as visited

        level[src] = 0;     // making the level of source node as 0


        while(!q.empty())
        {
            int parentNode = q.front();     // taking the queue front node
            q.pop();

            cout<< parentNode << " ";      // any task with the node will be done here


            // adj is array, and this array elements are vectors.
            // adj[parent] will go to the exact index's vector, and then [i] will iterate over that vector
            for(int i=0; i<adj[parentNode].size(); i++)     // exploring the adjacency list of the parent node | for(auto node : adj[parent]}
            {
                int adjacentNode = adj[parentNode][i];

                // checking if the level of the node has already not set, only then set level of node
                if(level[adjacentNode] == -1)    // as we know we will set level to a node only once
                {
                    level[adjacentNode] = level[parentNode] + 1;    // parent node will contribute to the level of adjacent node's level
                }

                if(visited[adjacentNode] == false)      // if the node is not visited, then push in the queue
                {
                    visited[adjacentNode] = true;       // as the node was not visited, make the node as visited now i.e true
                    q.push(adjacentNode);
                }
            }

        }



    }

    // level of any node will change in course of changes of the source node
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
        int findLevel = 6;

        cout<<endl<< "Level of " << src << " to " << findLevel << " is : " << level[findLevel] <<endl;



        return 0;
    }
