

// 260123, Wednesday, 08.30 am 
// week 04 exam 


#include <bits/stdc++.h>
using namespace std;

const int N = 102;
vector<int>adjList[N];
vector<int>visited(N);
stack<int>st;
vector<int>dist(N);
vector<int>indegree(N, 0);
vector<int>parent(N, -1);
int n, m, len, begin1, selected_path;

// only longest path not path sequence 
void processPath(int src)
{
        if(visited[src] == 1)
        {
                return;
        }
        visited[src] = 1;

        for(int adjNode : adjList[src])
        {
                if(visited[adjNode] == 0)
                {
                        processPath(adjNode);
                }
                dist[src]  = max(dist[src], dist[adjNode] + 1);
        }
        
}

int pathFind()
{
        for(int i=2; i<N; i++)
        {
                if(visited[i] == 0)
                {
                        processPath(i);
                }
        }
        return *max_element(dist.begin(), dist.end());
}


int main(){


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

        int longest_path =pathFind();
        cout<<longest_path<<endl;

        return 0;
}