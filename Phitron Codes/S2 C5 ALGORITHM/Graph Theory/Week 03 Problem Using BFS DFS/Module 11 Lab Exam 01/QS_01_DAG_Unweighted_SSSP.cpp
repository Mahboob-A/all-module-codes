/*
Module date: 311223
Exam Writing Start Date: 130123, Friday, 10.00 pm
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
                1. if(level[adjNode] == INT_MAX)   // to make sure we only assign level only once 
                        1. if(level[topNode]  < level[adjNode])
                                -  level[topNode] = level[topNode] + 1 

*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e3;

vector<int>adj[N];
int visited[N];
int level[N];
stack<int>st;
int n, m;

// sorting the graph 
void topSort(int src)
{
        visited[src] = 1;
        for(auto adjNode : adj[src])
        {
                if(visited[adjNode] ==0)
                        topSort(adjNode);
        }
        st.push(src);
}


void findSSSP(int src)
{
        for(int i=0; i<n; i++) level[i] = INT_MAX;   // making the level to infinity or max 
        
        level[src] = 0;    // src level as 0 
       
        while(!st.empty())  // the top sorted stack 
        {
                int topNode = st.top();
                st.pop();

                for(auto adjNode : adj[topNode])
                {
                        if(level[adjNode]  == INT_MAX)  // checking if the level is not set before, it ensures we only set level once 
                        {
                                // for the first time, parentNode/topNode will be less and adjNode will be INT_MAX
                                if(level[topNode]  < level[adjNode])   
                                {
                                        level[adjNode] = level[topNode] + 1;  // set level now 
                                }
                        }
                }

        }

}

/*

5 5 
0 1
0 2
1 3
1 4
2 4

3 3
0 1 
1 2 
0 2

*/

int main() {

        cin >> n >> m;
        for(int i=0; i<m; i++)
        {
                int u, v;
                cin>>u>>v;
                adj[u].push_back(v);
        }

        // run topsort for each node to make sure all the nodes are marked vis and topologically sorted 
        for(int i=0; i<n; i++)
        {
                if(visited[i] == 0)
                        topSort(i);
        }

        // finding the shortest path 
        int src = 0;
        findSSSP(src);

        // printing level 
        for(int i=0; i<n; i++)
        {
                cout<<"Level/Distance of: "<<i<<" is: "<<level[i]<<endl;
        }

        return 0;
}