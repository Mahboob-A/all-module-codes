// 211222, Wednesday, 11.30 am 


// input of graph



#include <bits/stdc++.h>
using namespace  std;

typedef pair<int, int> edgeWeightPair;

class Graph
{
        int V;
        // vector<int> vec[5];
        //vector<edgeWeightPair> *adjList;   // array of vector 
        list<edgeWeightPair> *adjList;    // array of list 

public:

        Graph(int V)
        {
                this->V = V;
                //adjList = new vector<edgeWeightPair>[V]; // for array of vector 
                adjList = new list<edgeWeightPair>[V];    // for array of list 
        }

        void addEdge(int u, int v, int w)
        {
                adjList[u].push_back({v, w});
                adjList[v].push_back({u, w});
        }

        void printNeighbour(int V)
        {
                cout << V << ":  ";
                // auto is a pointer variable that holds address 
                for (auto i = adjList[V].begin(); i != adjList[V].end(); i++)  // i++ here is pointer arithmatic i.e i+size of data type 
                        cout << "( " << (*i).first << ", " << (*i).second << " )";
        }

        // bfs for array or vector of adjacency list 
        void bfsVectorAdjList(int src)
        {
                bool visited[V];    // vector<bool>visited(V, false) for vector 
                memset(visited, false, sizeof(visited));
                queue<edgeWeightPair> q;   // we can also just take int type queue, but we then can not print the level of the nodes 
                q.push({0, src});

                cout<<"Level:    " << " Node:    " << "   Weight: " <<endl;
                while(!q.empty())
                {
                        edgeWeightPair parent = q.front();
                        q.pop();
                        if(visited[parent.second] == true)
                                continue;
                        cout <<  parent.first << "   |    " << parent.second << "    |    "<< endl;

                        for (int i = 0; i < adjList[parent.second].size(); i++)
                        {
                                // we can access like => adjList[parent.second][i] only in vector adjlist. if the adjlist is Linked list, then we have to use auto loop 
                                edgeWeightPair adjNode = adjList[parent.second][i]; // all i'th elements are pair type value with adjNode and their weight
                               // cout << adjNode.second << endl;                     // weight
                                if (visited[parent.second] != true)
                                        q.push({parent.first + 1, adjNode.first});
                        }
                        visited[parent.second] = true;
                }
        }

        // bfs for if the adjacency list is array of list 
        void bfsListadjList(int src)
        {
                vector<bool> visited(V, false);
                queue<edgeWeightPair> q;
                q.push({0, src});   // level o node er jonno pair queue neowa holo 

                cout<<"Level:     "<< " Node:       "<<"   Weight "<<endl;
                while(!q.empty())
                {
                        edgeWeightPair parent = q.front();   // pair data asche. parent.first == level and parent.second == node 
                        q.pop();

                        if(visited[parent.second] == true)
                                continue;

                        cout << parent.first << "        "<< parent.second << "          " <<endl;
                        // adjlist er protita index er list er data type holo pair type, first ta holo Node and 2nd ta holo Weight
                        int node = -1;

                        for(auto pairNodeWeight : adjList[parent.second])   // parent.second j ta queue te push kora ache seta holo Node, so oi node er index er list access korchi. 
                        {
                                node = pairNodeWeight.first;
                                // pairNodeWeight.first == Node and second == weight 
                                if(visited[pairNodeWeight.first] == false)
                                {
                                        q.push({parent.first + 1, pairNodeWeight.first}); // pushing in the queue => parent.first + 1  == level , and  pairNodeWeight.first == node 
                                }
                        }
                        visited[node] = true;
                }
        }

};

/*
input V = 7, E = 10 
undirected, weighted graph 

7 10 
0 1 7 
0 2 2 
0 5 10
1 3 5
3 2 9
2 5 7 
5 4 6 
4 6 3
6 3 9 
6 5 8 

*/

void check()
{
        bool v[10];
        memset(v, false, sizeof(v));

        v[9] = true;
        for (int i = 0; i < 10; i++)
                cout << v[i] << " ";
}

int main() {

        int V, E;
        cin >> V >> E;

        Graph g(V);

        for (int i = 0; i < E; i++)
        {
                int u, v, w;
                cin >> u >> v >> w;
                g.addEdge(u, v, w);
        }

        // g.printNeighbour(0);
        //g.bfsListadjList(0);

        g.bfsVectorAdjList(0);

        return 0;
}

        

