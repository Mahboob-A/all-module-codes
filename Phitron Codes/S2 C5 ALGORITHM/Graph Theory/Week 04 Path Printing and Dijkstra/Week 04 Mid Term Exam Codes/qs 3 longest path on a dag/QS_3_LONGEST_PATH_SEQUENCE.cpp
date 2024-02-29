

// 260123, Wednesday, 10.30 am 
// week 04 exam 



#include <bits/stdc++.h>
using namespace std;

const int N = 102;
vector<int>adjList[N];
vector<int>visited(N);
stack<int>st;
vector<int>dist(N, -1);
vector<int>indegree(N, 0);
vector<int>parent(N);
int n, m, len, begin1, selected_path;

void topoDfs(int src)
{
        visited[src] = 1;
        for(int adjNode : adjList[src])
        {
                if(visited[adjNode] == 0)
                {
                        topoDfs(adjNode);
                }
        }
        st.push(src);
}

void topoSort()
{
        for(int node = 2; node<N; node++)
        {
                if(visited[node] == 0)
                {
                        topoDfs(node);
                }
        }
}

void findLongestPath(int src)
{
        dist[src] = 0;
        while(!st.empty())
        {
                int tp = st.top();
                st.pop();

                if(dist[tp] != -1)
                {
                        for(int adjNode : adjList[tp])
                        {
                                if(dist[tp] + 1 < dist[adjNode])
                                {
                                        dist[adjNode] = dist[tp] + 1;
                                }
                        }
                }
        }
}

int findLongestPathBFS(int src)
{
        for(int node=2; node<N; node++)
        {
                for(int adjNode : adjList[node])
                {
                        indegree[adjNode]++;
                }
        }

        queue<int>q;
        for(int node=2; node<N; node++)
        {
                if(indegree[node] == 0)
                {
                        q.push(node);
                }
        }

        dist[src] = 0;
        int len = 0;
        while(!q.empty())
        {
                int frontNode = q.front();
                q.pop();
                len++;

                for(int adjNode : adjList[frontNode])
                {
                        indegree[adjNode]--;
                        if(indegree[adjNode] == 0)
                        {
                                q.push(adjNode);
                               
                        }
                        // len++;
                }
               
        }
         
        return len;

}



int main() {

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

        // int i=0;
        // for(vector<int>v : adjList)
        // {
        //         cout<<"i -> "<<i<<" : : -> ";
        //         i++;
        //         for(int node : v)
        //         {
        //                 cout<<node<<" ";
        //         }
        //         cout<<endl;
        // }

        // topoSort();
        int src = 2;
        // findLongestPath(src);
        int res = findLongestPathBFS(src);
        cout<<res<<endl;
        cout<<*max_element(dist.begin(), dist.end());

        // for(int i=2; i<N; i++)
        // {
        //         len = findPath(i);
        //         if(selected_path < len)
        //         {
        //                 begin1 = i;
        //                 selected_path = len;
        //         }
        // }

        // int curr_node = begin1;
        // while(parent[curr_node] != -1)
        // {
        //         cout<<curr_node<<"  ";
        //         if(parent[curr_node] == curr_node) 
        //                 break;
        //         curr_node = parent[curr_node];
        // }



        return 0;
}