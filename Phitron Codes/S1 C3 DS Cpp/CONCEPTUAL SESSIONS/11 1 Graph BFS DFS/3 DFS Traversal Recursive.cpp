


            /// 3 DFS Traversal Recursive


            /// DFS Traversal
            // 270922, Tuesday, 08.30 pm
            // with array of vector




    // conceptual session 11 1 Graph 270922 09.30 pm

    // DFS Traversal dfs does not have level output as dfs does not go level by level
    #include <bits/stdc++.h>
    using namespace std;

    // for taking input of the graph
    vector<int> V[100];

    // take a bool type array with array of vector size and make it false from main using memset
    bool visited[100];


    void dfs(int src)
    {
        // step 01: print the source node
        cout<<src<<endl;

        // step 02: make the source node in visited array as true as it is now visited
        visited[src] = true;

        // step 03: now access the children or adjacent nodes of the source node
        for(int i=0; i<V[src].size(); i++)
        {
            // step 04: take the elemets in one by one
            int adjacentNode = V[src][i];

            // step 05: check if the adjacent node is not visited, then call recursively with the adjacent node
            if(visited[adjacentNode] == false)  dfs(adjacentNode);
        }
    }






    int main() {

        int n, e;
        cin>>n>>e;

        for(int i=0; i<e; i++)
        {
            int u, v;
            cin>>u>>v;
            V[u].push_back(v);
            V[v].push_back(u);
        }


        // make the bool type visited array false
        memset(visited, false, sizeof(visited));

        // call the DFS function and pass the source node
        dfs(1);

        /*
        // 7 as the node count and 7 as the edge count

        7 7
        1 2
        1 6
        2 3
        2 4
        6 4
        6 7
        4 5

        */






        return 0;
    }

