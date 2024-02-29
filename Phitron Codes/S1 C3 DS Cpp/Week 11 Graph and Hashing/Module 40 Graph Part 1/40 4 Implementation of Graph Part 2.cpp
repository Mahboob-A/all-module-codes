


            /// 40 4 Implementation of Graph Part 2
            // 250922, Sunday, 04.00 pm



    // 40 3 and 40 4 Implement Graph Input and print graph
    #include <bits/stdc++.h>
    using namespace std;

    typedef pair<int, int> edgeWeightPair;

    /// creation of bidirectional weighted graph
    class Graph
    {
        int V; // v is node here

        // taking a pointer that is list type and the data type of the list is pair
        list<edgeWeightPair> *adj;

    public:

        // V represents the node
        // the logic is we will create a list of pair type for each node so that
        // we could store the connection and the weight of the node and edges
        Graph(int V)
        {
            // the concept is that we will have total nodes and we will receive the total nodes value in
            // V variable. We will create a dynamic list type array with size of V and receive the pointer of the
            // dynamic array in the above *adj list type pointer
            // And the data type of the array will be list<pair<int, int>> type that means each index of the array
            // will consist of a list of pair data type
            this -> V = V;

            // creating a V sized array of list type and taking the [0]'th index's address in the adj pointer
            adj = new list<edgeWeightPair>[V];
        }

        // u and v are two nodes that are directly connected and w is the weight of their edge
        // at first accessing the arr[u]'th index and then making pushing the the node V that is connected to
        // u and the w as weight as pair
        // and then accessing the arr[v]'th index and pushing the node that is directly connected to it i.e u and their edge weight w
        void addEdges(int u, int v, int w)
        {
            adj[u].push_back(make_pair(v, w));
            adj[v].push_back(make_pair(u, w));
        }

        // function to print the list
        // accessing the array's node'th index and from that index we are accessing its list as each index has its own list
        void printNeighbour(int node)
        {
            // auto is a pointer variable i.e iterator and begin and end also are iterator
            cout<<node<<": ";
            for(auto i=adj[node].begin(); i!=adj[node].end(); i++)  // i++ is here a pointer arithmetic
            {
                cout<<"("<<(*i).first<<", "<<(*i).second<<") ";
            }
        }




    };





    int main() {

        // V is vertex which represents the node is the Graph
        int V, E;
        cin>>V>>E;

        Graph g(V);

        // populating the graph
        // we are taking input the all the edges that's why loop is running until E
        for(int i=0; i<E; i++)
        {
            // passig u and v as the two node that are directly connected with each other and w is the two node's edge value
            int u, v, w;
            cin>>u>>v>>w;
            g.addEdges(u, v, w);
        }

        // printing the graph
        // loop is running until the nodes i.e V
        // passing the i as the nodes as we have created an array in the class so, we can assess that dynamic array with index
        for(int i=0; i<V; i++)
        {
            g.printNeighbour(i);
            cout<<endl;
        }

        /*
        7 10
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
