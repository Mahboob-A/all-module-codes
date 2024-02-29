


                /// 1 Input of Graph Undirected
                // 270922, Tuesday, 06.30 pm



    // conceptual session 11 1 Graph 270922 06.30 pm

    // input of graph
    #include <bits/stdc++.h>
    using namespace std;

    // take a global array of vector of size said in the question +1
    // we can declare it also in the main but as we need to access it from out other function, thus we will declare it
    // here so that we do not need to pass it each time to a function
    vector<int> V[100];


    int main() {

        // take two variable n is number of nodes and e is number of edges
        int n, e;

        // take input of all the edges and the nodes connected to it
        for(int i=0; i<e; i++)
        {
            // u and v as the adjacent nodes as i am making a undirected graph
            int u, v;
            cin>>u>>v;

            // now take v[v1]'th index i.e access the vector in the v[v1]'th index and push v2 there
            // also access the v[v2]'th index of vector and push v1 as we can get access to each other form each other
            // as it is a undirected graph
            V[u].push_back(v);
            V[v].push_back(u);
        }


        // the input of the graph is done!







        return 0;
    }




