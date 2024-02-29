
/*  
Week 05 : lab mid term exam 
exam date: 150123 - 170123 - 100; 170123-220123 - 90; rest 80 marks 
exam writing date: 090223, thursday, 07.30 am 


qs 04 : I will be given more than one sources and I have to find the level of last node and print the last node and its level 
running bfs with all the sources at the same time 
*/

// another approach : just process type is same without any func but min node calculation is bit complex or might not work 
// https://www.ideone.com/YAPyUC?fbclid=IwAR1WfwmrYK7wYQV2wRc2uSOxZzBnxcQk8MtM2xfnr-DiMA4TwOACJKPdxrY

/*  

There is a common web in front of you. However, as an experienced contester, you noticed that it is a connected graph with n vertices and m edges. If you fire some vertex, it will lights up, after a second all adjacent vertices light up, then all adjacent ones with already burning will light up, etc.

You know which vertices will be fired in the web (all at the same time). Find how many seconds will pass until the last vertex lights up and find this vertex.

Input
First line contains integers n (1 ≤ n ≤ 105) and m (n - 1 ≤ m ≤ 105). Each of the next m lines contains two numbers – the vertex numbers connected with an edge. The vertices are numbered starting from 1.

Next line contains number k (1 ≤ k ≤ n) – the number of points to fire. Next line contains the numbers of k vertices to be fired.

Output
In the first line print the time when the last vertex will light up. In the second line print the number of this vertex. If there are several of them, print the one with minimum number.

prb4369.gif

Sample 1
Inputcopy	Outputcopy
6 6
1 2
2 6
1 5
5 6
3 5
4 5
2
1 2
2
3

*/


#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define INT_INF 1e9 
const int N = 1e5+100;

vector<int> adjList[N];
int visited[N];
// int level[N];
vector<int>level(N);
int n,m,k;

void bfs(vector<int>src)
{
        queue<int>q;
        
        // making all the souce nodes visited and pushing in the queue 
        for(int node : src)
        {
                visited[node] = 1;
                level[node] = 0;
                q.push(node);
        }

        while(!q.empty())
        {
                int frontNode = q.front();
                q.pop();

                for(int adjNode : adjList[frontNode])
                {
                        if(!visited[adjNode])
                        {
                                visited[adjNode] = 1;
                                level[adjNode] = level[frontNode] + 1;
                                q.push(adjNode);

                                // if adjNode level is greater than the level of lastNode, then adjNode is the last node that is updated. 
                                // so make adjNode as the lastNode
                                // if(level[adjNode] > level[lastNode])
                                // {
                                //         lastNode = adjNode;
                                // }
                        }
                }
        }

}

int main(){

        cin>>n>>m;
        
        for(int i=0; i<m; i++)
        {
                int u, v;
                cin>>u>>v;
                adjList[u].pb(v);
                adjList[v].pb(u);
        }

        cin>>k;
        //  a vector to store all the source nodes with k size 
        vector<int>src(k);
        for(int i=0; i<k; i++)
        {
                cin>>src[i];
        }

        // bfs with all the sources 
        bfs(src);       

        // printing the leve of last node. 
        // the last node indicates that there are no nodes that has the level greater than this last node. 
        // cout<<level[lastNode]<<endl;
        // cout<<lastNode<<endl;

        // cout<<endl;
        int mx_depth = -1;
        int lastNode = -1;
        for(int node=1; node<=n; node++)
        {
                if(level[node] > mx_depth)
                {
                        mx_depth = level[node];
                        lastNode = node;
                }
                // cout<<level[node]<<" ";
        }
        // cout<<endl;
        cout<<level[lastNode]<<endl;
        cout<<lastNode<<endl;

        return 0;
}
























/*
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool vis[N];
int dep[N], last;

void bfs(vector<int>& sources) {
    queue<int> q;
    for (int s : sources) {
        q.push(s);
        vis[s] = true;
        dep[s] = 0;
    }

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                dep[v] = dep[u] + 1;
                q.push(v);
                if (dep[v] > dep[last]) {
                    last = v;
                    cout<<"Last : "<<last<<endl;
                }
            }
        }
    }
}

int main() {
    int n, m, k;
//     cin >> n >> m;
//     for (int i = 0; i < m; i++) {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

    cin >> k;
    vector<int> sources(k);
    for (int i = 0; i < k; i++) {
        // cin >> sources[i];
        int x;
        cin>>x;
        sources.push_back(x);
    }
    for(int node : sources)
    {
        cout<<node<< " ";
    }

//     bfs(sources);

//     cout << dep[last] << endl;
//     cout << last << endl;
    return 0;
}

*/