



/*  
Week 05 : lab mid term exam 
exam date: 150123 - 170123 - 100; 170123-220123 - 90; rest 80 marks 
exam writing date: 090223, thursday, 10.00 pm 


qs 8 : I will be given n, array of cost, m and edges and I have to find shortest path from 1 to n 
*/

/*  

There are n cities, some of which are connected by roads. In order to drive along one road you need one tank of gasoline. In each city the petrol tank has a different cost. You need to get out of the first city and reach the n-th one, spending the minimum possible amount of money.

Input
Starts with the number n (1 ≤ n ≤ 100) of cities, followed by n numbers, i-th of which gives the cost of gasoline in the i-th city (all numbers are integers in the range from 0 to 100). Then the number m of roads in the country is given. It is followed by the description of roads. Each road is defined by two numbers - the numbers of cities it connects. All roads are two-way (it's possible to travel in both directions). There is always no more than one road between the two cities. There is no road from the city to itself.

Output
Print the total cost of the route, or -1 if it is impossible to reach the n-th city.

prb1388.gif

Sample 1
Inputcopy	Outputcopy
4
1 10 2 15
4
1 2 1 3 4 2 4 3
3
Sample 2
Inputcopy	Outputcopy
4
1 10 2 15
0
-1

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
#define INT_INF 1e5
const int N = 110;



vecPii adjList[N];
int visited[N];
int parent[N];
int dist[N];
int n, m;

int cost[N];    // as cost will be given seperately 

void dijkstra(int src)
{
        for(int i=1; i<=n; i++)
        {
                dist[i] = INT_INF;
        }

        priority_queue<pii, vector<pii>, greater<pii>>q;

        q.push({0, src});
        dist[src] = 0;
        while(!q.empty())
        {
                int headNode = q.top().s;
                q.pop();

                if(visited[headNode] == 1)
                {
                        continue;
                }

                visited[headNode] = 1;
                for(auto edge_entry : adjList[headNode])
                {
                        int adjNode = edge_entry.f;
                        int w = edge_entry.s;
                        if(dist[headNode] + w < dist[adjNode])
                        {
                                dist[adjNode] = dist[headNode] + w;
                                q.push({dist[adjNode], adjNode});
                        }
                }
        }
}

int main(){

        cin>>n;
        // taking input of cost 
        for(int i=1; i<=n; i++)
        {
                cin>>cost[i];
        }

        cin>>m;
        // taking input of edges 
        for(int i=1; i<=m; i++)
        {
                int u, v;
                cin>>u>>v;
                adjList[u].pb({v, cost[u]});
                adjList[v].pb({u, cost[v]});
        }

        int src = 1;
        dijkstra(src);

        // cout<<dist[n]<<endl;

        if(dist[n] == INT_INF)
        {
                cout<<-1<<endl;
        }
        else 
        {
                cout<<dist[n]<<endl;
        }


        return 0;
}