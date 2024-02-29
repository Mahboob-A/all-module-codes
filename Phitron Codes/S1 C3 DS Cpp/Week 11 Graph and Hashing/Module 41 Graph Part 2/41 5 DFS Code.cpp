


            /// 41 5 DFS Code

    // Mod 41 3 and 41 5 BFS DFS Search
    // A graph of bi-w
    // 260922, Monday, 011.00 am
    #include <bits/stdc++.h>
    using namespace std;

    typedef pair<int, int> edgeWeightPair;
    class Graph
    {
        int V;
        list<edgeWeightPair>*adj;

    public:

        Graph(int V)
        {
            this -> V = V;
            adj = new list<edgeWeightPair>[V];
        }


        void addEdge(int u, int v, int w)
        {
            adj[u].push_back(make_pair(v, w));
            adj[v].push_back(make_pair(u, w));
        }

        void printGraph(int node)
        {
            cout<<node<<": ";
            for(auto it=adj[node].begin(); it!=adj[node].end(); it++)
            {
                cout<<"("<<(*it).first<<","<<(*it).second<<") ";
            }
        }

        /// BFS Search: The sequence 41 3
        /// The concept:
        /*
        The concept of BFS search is we will only traverse all the nodes only once.
        So, we will take a vector to keep a check which nodes are visited and which are not visited,
        so that we can visit them. We will take a node one by one and check their adjacent list
        and we will push the nodes in the adjacent list only if the nodes in the adjacent list have not been already
        visited, and for this we will check the vector, if not visited already, then will push them in the queue.
        This way we will traverse the graph by level by level and we will only traverse all the nodes only once.
        */
        void BFS(int source)
        {
            // step 01: take a bool type vector of size V i.e size of all the nodes and make it false for all indexes
            vector<bool>visited(V, false);

            // step 02: take a queue of the data type of the nodes as we will push the nodes in the queue
            queue<int>q;

            // step 03: make the source's node's state true in visited vector as we are going to visit the source
            visited[source] = true;

            // step 04: now push the source in the queue
            q.push(source);

            // step 05: now run a while loop until the queue is empty and do the following operations
            while(!q.empty())
            {
                // take the front of queue and pop the fornt
                int u = q.front();
                cout<<u<< " ";
                q.pop();

                // now as we have the front of the queue, this fornt in u is a node, so we will check its adjacent list
                // that with which this node is directly connected, and if they are not already visited, we
                // will push them in the queue.
                for(auto element: adj[u])
                {
                    int v = element.first;
                    // now check if v i.e the node in the adjacent list of u is already visited or not
                    // if already it is true, then it will not enter in the if and it will not push in that case
                    if(visited[v] != true)  // if v node in visited vector is false, then it is not already visited, and as we are now visiting it, so we will make it true so that next we can find that it was already visited, and push in the queue
                    {
                        visited[v] = true;
                        q.push(v);
                    }
                }
            }
        }


        /// DFS SEARCH 41 5
        /// The Concept:
        /*
        we will call recursively to implement dfs search. We will take a vector of size of all nodes i.e V
        and initialize it with false. Then we will run a for loop using auto as a variable not pointer
        and access all the nodes of the adjacent list. And if that node is already not visited then we will call a
        recursive function with it and of course, before the for loop, we will make the visited[source] = true
        so that each time the function calls recursively, the source becomes visited as we will make it true.
        And here, before the loop, we can print the source to see the sequence. Dfs has several concept like,
        Graph Timing Plot, Graph Timing Diagram, DFS Spanning Tree, DFS Sequence. See the 41 4 Vid more and more to understand the plot and diagram.
        */

        void DFS(int source)
        {
            // step 01: Take a static vector of size V and make all the indexs false
            static vector<bool>visited(V, false);

            // step 02: make the source in visited vector as true now as we are going to visit it.
            visited[source] = true;

            cout<<source<<" ";

            // step 03: now take a for loop and access all the nodes that the source node is connected to,
            // and if that adjacent node of source node is not already visited, then make a recursive call with that node
            for(auto element: adj[source])
            {
                int v = element.first;
                if(visited[v] != true)
                {
                    DFS(v);
                }
            }
        }




    };


    int main() {


        int V, E, source;
        cin>>V>>E>>source;

        Graph g(V);

        for(int i=0; i<E; i++)
        {
            int u, v, w;
            cin>>u>>v>>w;
            g.addEdge(u, v, w);
        }

        for(int i=0; i<V; i++)
        {
            g.printGraph(i);
            cout<<endl;
        }


        cout<<endl<<endl;

        // for the BFS, we need to pass the source node to the function
        cout<<"The sequence of the BFS search is: ";
        g.BFS(source);

        cout<<endl<<endl;

        // DFS passing the source node
        cout<<"The sequence of the DFS is: ";
        g.DFS(source);

        cout<<endl<<endl;

        /*

        7 10 0
        0 1 7
        0 2 1
        0 5 3
        1 3 11
        2 3 3
        3 6 1
        6 5 2
        6 4 4
        5 4 6
        2 5 8

        */











        return 0;
    }
