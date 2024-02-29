


                /// BFS with level print
                // 270922, Tuesday, 07.30 pm
                // with array of vector




    // conceptual session 11 1 Graph 270922 07.10 pm

    // BFS Traversal
    #include <bits/stdc++.h>
    using namespace std;

    vector<int> V[100];

    // take a bool type array with array of vector size and make it false from main using memset
    bool visited[100];


    // BFS function
    void bfs(int src)
    {
        // step 01: take a pair type queue the first is the level and the second one is the node value i.e node
        // we can also do it without using pair and only int type queue but then we can not get the level print of the nodes

        queue<pair<int, int>>q;

        // step 02: now push the level as 0 or 1 whatever initially and the src node making them as pair in the queue
        q.push(make_pair(0, src));  // q.push({0, src});


        cout<<"Level: "<<" |   :Node"<<endl;
        // step 03: now take a while loop until the queue is empty
        while(!q.empty())
        {
            // step 01: now take the front of the queue and pop it
            pair<int, int> parent = q.front();
            q.pop();

            // step 02: now check if the parent is already visited, if true, then continue
            // if visited is true, then the node will be skipped and no action below wil be performed,
            // if the parent is not visited only then the below code will be executed
            if(visited[parent.second] == true) continue;

            // step 03: as the control is here that means the parent is not visited, hence print parent's information
            cout<<parent.first<<"       |   "<<parent.second<<endl;

            // step 04: now as we got a parent that is not already visited, now we need to access it's adjacent nodes
            // so, run a for loop and access it's adjacent nodes from the array of vector and if the adjacent node
            // is already not visited, then push it in the queue
            for(int i=0; i<V[parent.second].size(); i++)
            {
                // V[parent.second][i]; it is like v[i] that means we are accessing the the V array's parent.second'th node's/index's vector with i
                int adjacentNode = V[parent.second][i];

                // check if the adjacentNode is not already visited, only then push it in the queue
                // as the queue is pair type, and as the pair first have been taken as the level, so
                // push +1 as level of adjacentNode node from the parent node's level and push the adjacentNode node
                if(visited[adjacentNode] == false) q.push({parent.first+1, adjacentNode});
            }

            // step 05: as we just have visited the parent node, make it as true in the visited so that we can check in futureif it is already visited
            visited[parent.second] = true;
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

        // call the BFS function and pass the source node
        bfs(1);

        /*
        // 6 7 as the node count and 7 as the edge count

        6 7
        5 3
        4 5
        3 4
        1 3
        2 1
        1 0
        2 0

        */






        return 0;
    }



    /// only the parent print no level print

    /*

    // conceptual session 11 1 Graph 270922 07.10 pm

    // BFS Traversal
    /// only the parent's value no leve print
    #include <bits/stdc++.h>
    using namespace std;

    vector<int> V[100];

    // take a bool type array with array of vector size and make it false from main using memset
    bool visited[100];


    // BFS function
    void bfs(int src)
    {
        // step 01: take a pair type queue the first is the level and the second one is the node value i.e node
        // we can also do it without using pair and only int type queue but then we can not get the level print of the nodes

        queue<int>q;

        // step 02: now push the level as 0 or 1 whatever initially and the src node making them as pair in the queue
        q.push(src);  // q.push({0, src});


        cout<<"Node: "<<endl;
        // step 03: now take a while loop until the queue is empty
        while(!q.empty())
        {
            // step 01: now take the front of the queue and pop it
            int parent = q.front();
            q.pop();

            // step 02: now check if the parent is already visited, if true, then continue
            // if visited is true, then the node will be skipped and no action below wil be performed,
            // if the parent is not visited only then the below code will be executed
            if(visited[parent] == true) continue;

            // step 03: as the control is here that means the parent is not visited, hence print parent's information
            cout<<"   "<<parent<<endl;

            // step 04: now as we got a parent that is not already visited, now we need to access it's adjacent nodes
            // so, run a for loop and access it's adjacent nodes from the array of vector and if the adjacent node
            // is already not visited, then push it in the queue
            for(int i=0; i<V[parent].size(); i++)
            {
                // V[parent][i]; it is like v[i] that means we are accessing the the V array's parent'th node's/index's vector with i
                int adjacentNode = V[parent][i];

                // check if the adjacentNode is not already visited, only then push it in the queue
                // as the queue is pair type, and as the pair first have been taken as the level, so
                // push +1 as level of adjacentNode node from the parent node's level and push the adjacentNode node
                if(visited[adjacentNode] == false) q.push(adjacentNode);
            }

            // step 05: as we just have visited the parent node, make it as true in the visited so that we can check in futureif it is already visited
            visited[parent] = true;
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

        // call the BFS function and pass the source node
        bfs(1);


        // 6 7 as the node count and 7 as the edge count

        6 7
        5 3
        4 5
        3 4
        1 3
        2 1
        1 0
        2 0








        return 0;
    }

    */










