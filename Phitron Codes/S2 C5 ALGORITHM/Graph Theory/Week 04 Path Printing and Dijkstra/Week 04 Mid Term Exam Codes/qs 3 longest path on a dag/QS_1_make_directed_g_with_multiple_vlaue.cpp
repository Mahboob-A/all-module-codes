/*  
Week 04 : Mid Term Exam 
Exam write date: 250123, Tuesday

QS_1 : 
Write code to create a directed graph with 100 nodes where each node is numbered between 2 and 101. There exists an edge from node-A to node-B if  node-B is a multiple of node-A.	10

For example, the node 50 should have directed edges to node 50 and node 100.
(as both 50 and 100 are multiples of 50)

Use adjacency list as your graph representation.

*/

#include <bits/stdc++.h>
using namespace std;

const int N = 102;
vector<int>adjList[N];

void find_edge(int x)
{
        for(int i=2; i<N; i++)
        {
                if(i % x == 0)
                {
                        adjList[x].push_back(i);
                }
        }
}

int main() {


        // for(int i=2; i<N; i++)
        // {
        //         find_edge(i);
        // }

        for(int i=2; i<N; i++)
        {
                for(int j=2; j<N; j++)
                {
                        if(j%i == 0)
                        {
                                adjList[i].push_back(j);
                        }
                }
        }

        int i=0;
        for(vector<int>subList : adjList)
        {
                cout<<"Node: "<<i<<" -> ";
                i++;
                for(int node : subList)
                {
                        cout<<node<<" ";
                }
                cout<<endl;
        }



        return 0;
}