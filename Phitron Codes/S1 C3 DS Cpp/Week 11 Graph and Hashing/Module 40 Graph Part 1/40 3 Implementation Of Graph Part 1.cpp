


            /// 40 3 Implementation Of Graph Part 1
            // 250922, Sunday, 07.30 am


    #include <bits/stdc++.h>
    using namespace std;

    typedef pair<int, int> edgeWeightPair;

    /// creation of bidirectional weighted graph
    class Graph
    {
        int V; // v is node here

        // taking here a list of pair type and a list of pair type pointer
        list<edgeWeightPair> *adj;

    public:

        // V represents the node
        // the logic is we will create a list of pair type for each node so that
        // we could store the connection and the weight of the node and edges
        Graph(int V)
        {
            this -> V = V;

            // Now, allocating a list of pair type for each node and receiving the base address of that list
            // in list of pair type *adj pointer
            adj = new list<edgeWeightPair>[V];
        }



    };





    int main() {

        // V is vertex which represents the node is the Graph
        int V, E;
        cin>>V>>E;

        for(int i=0; i<E; i++)
        {
            int u, v, w;
            cin>>u>>v>>w;
        }










        return 0;
    }
