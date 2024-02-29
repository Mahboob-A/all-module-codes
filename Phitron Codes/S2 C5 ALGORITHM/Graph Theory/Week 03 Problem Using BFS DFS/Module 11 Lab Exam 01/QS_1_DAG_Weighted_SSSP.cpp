/*
Module date: 311223
Exam Writing Start Date: 130123, Friday, 11.00 pm 
Today date: 130123, Friday, 10.00 pm 

Question 01: 
Write code to solve the single source shortest path problem on a DAG using DFS.
Take both the DAG and the source node as input and output the distance of each node.
(You can choose any graph representation or input format of your choice)			15

Steps: 

1. Apply top sort on the graph 
# take level array
2. Make source node level/distance as 0 
3. Make n-1 node's initial distance as infinity or INT_MAX 

4. Run the while loop for stack 
        1. take the topNode 
        2. explore the adjacent nodes of the topNode 
        3. check 
                1. if(level[parentNode] + weight < level[adjNode])  // level of parentNode + weight < level of adjNode
                        -  level[adjNode] = level[parentNode] + weight 
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e3;

vector<pair<int, int>>adj[N];
int visited[N];
int level[N];
stack<int>st;
int n, m;

void topSort(int src)
{
        visited[src] = 1;
        for(auto adjNode : adj[src])  // getting a pair of {adjNode, weight}
        {
                // int node = adjNode.first;
                // int weight = adjNode.second;
                if(visited[adjNode.first] == 0)
                        topSort(adjNode.first);
        }
        st.push(src);
}


void findWeightedSSSP(int src)
{
        for(int i=0; i<n; i++) level[i] = INT_MAX;   // making the level to infinity or max 
        level[src] = 0;

        while(!st.empty())   // the top sorted stack 
        {
                int parentNode = st.top();   // stack has just int data 
                st.pop();

                for(auto adjNode : adj[parentNode])   // adjacency list has pair data 
                {
                        int node = adjNode.first;
                        int weight = adjNode.second;
                        if(level[parentNode] + weight < level[node])
                        {
                                level[node] = level[parentNode] + weight;
                        }
                }

        }

}

/*

5 5 
0 1 5
0 2 3 
1 3 4
1 4 1
2 4 2

*/

int main() {

        cin >> n >> m;
        for(int i=0; i<m; i++)
        {
                int u, v, w;
                cin>>u>>v>>w;
                adj[u].push_back({v, w});
        }

        // run topsort for each node to make sure all the nodes are marked vis and topologically sorted 
        for(int i=0; i<n; i++)
        {
                if(visited[i] == 0)
                        topSort(i);
        }

        // finding the shortest path 
        int src = 0;
        
        findWeightedSSSP(src);
        // printing level 
        for(int i=0; i<n; i++)
        {
                cout<<"Level/Distance of: "<<i<<" is: "<<level[i]<<endl;
        }


        return 0;
}