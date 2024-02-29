/*
conceptual session: 
week 02 - dfs 
mod date: 221222, Thursday
watch date: 281222, Wednesday
code date: 291222, Thursday, 08.30 am 
*/

// dfs in iterative 

/*
algo: 
1. take the source, a stack and a visited array 
2. push it in the stack 
3. run while loop untill the stack is not empty ]
4. take the top of the stack say V, and pop it. 
5. check if the V is not visited, then print it and make it visited
6. now explore all the neighbours of V, and if the neighbour is not already visited, then push it in the stack 
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3;   // 1 with 3 zero i.e 1000 
bool visited[N];
bool visited2[N];
vector<int>g[N];

void dfs(int src)
{
        memset(visited, false, sizeof(visited));
        stack<int>st;
        st.push(src);
   
        while(!st.empty())
        {
                int V = st.top();
                st.pop();
                if(!visited[V])       // if the neighbour is not visited, then print and mark it it visited
                {
                        cout<< V << " ";
                        visited[V] = true;
                }
                for(auto node : g[V])
                {
                        if(!visited[node])    // only push neighbour if it is not already visited 
                                st.push(node);
                }
                // visited[V] = true;  we can make the top of stack true here or in the above if condition 
        }

}

void dfs2(int src)
{
        memset(visited2, false, sizeof(visited2));
        stack<int>st;
        st.push(src);
        visited2[src] = true;

        while(!st.empty())
        {
                int topNode = st.top();
                st.pop();

                cout<< topNode << " ";
                for(int i=0; i<g[topNode].size(); i++)
                {
                        int adjNode = g[topNode][i];
                        if(visited2[adjNode] == false)
                        {
                                visited2[adjNode] = true;
                                st.push(adjNode);
                        }
                }

        }

}

/*
5 4 
0 1 
0 2 
1 3
1 4



same graph different input 

6 8 
1 5 
1 4
5 0 
5 4 
4 0 
4 2
0 2 
2 3
# gives two different o/p in this input for same bfs


6 8 
1 5
1 4
0 5 
0 4 
0 2 
2 4 
2 3
5 4 
# gives two different o/p in this input for same bfs 

6 8 
5 4 
1 5
1 4
0 5 
0 4 
0 2 
2 4 
2 3

#this one gives same o/p 
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
        cout<< endl ;
        dfs2(1);

}




