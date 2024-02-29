/*  
Week 04 : Dijkstra
Conceptul session : 4 - 1 - Disjoint Set (Union Find) and Path Print 

Mod date: 040123, Wednesday
Watch date: 210123, Saturday, 07.00 pm 

Part 01: Disjoint Set 

Key Concept: 

we use disjoint set to find if two nodes are in same  connected components, 
and we also can detect if there is any cycle in the graph. 
But we only can apply disjoint set in undirected graph

For disjoint set, we need to manage parent array and
as disjoint set only works with edges, we do not need to input the whole graph, 
we only can maintain an edge list to work with disjoint set. 

when there are two nodes that have different parents(one node's parent is -1 and other one's 
is other value), or both have parent as -1, 
then we make any of them as parent of the other : this is known as Union Operation. 

and when we do not find the root parent i.e -1, then we find that root parent and this finding 
operation is known as Find Operation. 
*/

#include <bits/stdc++.h>
using namespace std;

#define pi pair<int, int>
typedef pair<int, int> pii;

vector<pi>edgeList;
vector<int>parent;
int n, m;

int find_parent(int x)
{
        if(parent[x]   == -1) 
                return x;
        // if the value of x is not -1, then recursive call with the parent of x (value of x'th index) 
        return find_parent(parent[x]);
}

// normal union operation
void union_operation(int u, int v)
{
        int parentU = find_parent(u);
        int parentV = find_parent(v);
        // make any node as parent of other node 
        parent[parentU] = parentV;
}

// as in the for loop, I am already finding the parent of u and v, so I do not have to find again 
void set_union(int parentA, int parentB)
{
        parent[parentA] = parentB;
}


/*  
whole graph is cycle 

6 8
1 2
1 3
2 4
2 5
3 4
3 6
4 6
5 4

no cycle 

3 2
1 2 
2 3


*/

int main() {

        cin>>n>>m;

        // as it is vector, and here I have got the size of nodes, I am giving size to the parent 
        // initializin with -1 as -1 will be default parent 
        parent.resize(n+1, -1); 

        for(int i=0; i<m; i++)
        {
                int u, v;
                cin>>u>>v;
                edgeList.push_back({u, v});
        }

        // now get all edges one by one and make find and union operation 
        bool is_cycle = false;
        for(int i=0; i<edgeList.size(); i++)
        {
                pi edge = edgeList[i];
                int u = edge.first;
                int v = edge.second;

                // FFInd operation: 
                // as we have got the two node endpoints, now we will make find and union operations 
                int parentU = find_parent(u);
                int parentV = find_parent(v);
                if(parentU == parentV)
                {
                        // if both nodes parent are same, then it is a cycle 
                        is_cycle = true;
                        break;
                }
                else 
                {
                        // union operation || connecting two parents 
                        set_union(parentU, parentV);
                        // or 
                        // parent[parentU] = parentV;
                }
        }


        if(is_cycle)
                cout<<"YES CYCLE EXIST"<<endl;
        else 
                cout<<"NO CYCLE DOES NOT EXIST"<<endl;

        for(int parentNode: parent)
                cout<<parentNode<<" ";

        cout<<endl;

        return 0;
}