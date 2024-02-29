/*
conceptual session: 
week 02 - dfs 
mod date: 221222, Thursday
watch date: 281222, Wednesday
code date: 291222, Thursday, 08.30 am 
*/

// dfs recursive 

/*
algo: 
1. take the source node 
2. print the source node 
3. make the source node as visited
4. explore the neighbours of the source node 
5. check the neighbour node, if it is not visited, then call recursively with the neighbour node 
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3;   // 1 with 3 zero i.e 1000 
bool visited[N];
vector<int>g[N];


void dfs(int src)
{
        cout<< src << " ";  // pirnt the src 
        visited[src] = true;  // mark the src as true 
        for(auto node : g[src])   // explore the neighbours of src 
        {
                if(!visited[node])   // check if the neighbour of source is not visited, 
                        dfs(node);    // then call recursively with the neighbour node 
        }
}

/*
5 4 
0 1 
0 2 
1 3
1 4


6 8 
1 5 
5 4 
1 4
4 0 
5 0 
2 3
4 2
0 2 


same graph different input 

6 8 
5 4 
1 5
1 4
0 5 
0 4 
0 2 
2 4 
2 3

7 7
1 2 
1 3
2 5
3 6
5 7
5 7
3 4


*/


int main () {

        int V, E;
        cin>>V>>E;
        for(int i=0; i<E; i++)
        {
                int u, v;
                cin>>u>>v;
                g[u].push_back(v);
                g[v].push_back(u);
        }

        dfs(1);

}
