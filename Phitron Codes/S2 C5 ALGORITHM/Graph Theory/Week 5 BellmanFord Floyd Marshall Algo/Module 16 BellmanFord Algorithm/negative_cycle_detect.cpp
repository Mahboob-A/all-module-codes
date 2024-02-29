
/*  
Module date: 100123, Tuesday
Watch date: 300123, Monday
Code write date: 020223, Thursday, 07.00 pm 

Week 05 : Bellman-Ford Algorithm 
16 - 7: Bellman-Ford Algorithm Negative Cycle Detect  

Complexity: 
TC: 
avarage: O(n * m)
optimal: O(n^2)
worst: O(n^3)

SC: 
O(n)

Iterate over n-1 times on the all over the nodes and relax each node. 
outer loop is O(n) and the inner loop is o(E) as the inner loop will iterate over all the nodes 
and fetch all of its adjacent nodes.

n-1 bar iterate kora hobe. proti iteration e graph er sob node ke select kore tar adjacent nodes 
gulo ke relax kora hobe.

For detecting negative cycle in a negative weighted graph, we will run the iteration loop till the n'th times.
As we already know bellmanFord algo finds the sssp on negative weighted graph in the max n-1'th 
iteration but if the we could relax any node in n'th iteration also, we can say the graph has negative cycle. 
*/


// 020223, Thursday, 10.00 am 

#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
const int N = 1e5+100;
vector<int>ans;
vector<pii>allSrc;
pii src, destination;
//priority_queue<pii, vecPii, greater<pii>>q;
vecPii adjList[N];
int visited[N];
int parent[N];
int dist[N];
int n, m;

bool bellmanFord(int src)
{       
        for(int i=1; i<=n; i++) 
        {
                dist[i] = INT_MAX;
        }
        
        dist[src] = 0;
        
        bool negative_cycle = false;
        for(int i=1; i<=n; i++)
        {
                for(int node=1; node<=n; node++)
                {
                        for(pii adjNode : adjList[node])
                        {
                                int u = node;
                                int v = adjNode.first;
                                int w = adjNode.second;

                                if(dist[u] + w < dist[v])
                                {
                                        if(i == n)
                                        {
                                                negative_cycle = true;
                                        }
                                        dist[v] = dist[u] + w;
                                }
                        }
                }
        }
        return negative_cycle;
}


/*  
4 4 
1 2 2
2 3 -8
3 1 5
3 4 1


#####*****#####******#####****####

if the graph is undirected, we only can apply BellmanFord if there are no negative weight in the graph
if the grpah contains any negative weight, and the graph is undirected, then the graph would 
end up having a negative cycle. 

see below examples: 

###############
// neg weight but no neg cycle | input u--->v and v--->u in this way(directed way input but undirected). 
4 8 
1 2 -4
2 1 -4
1 4 -2
4 1 -2
2 3 3 
3 2 3 
4 3 5 
3 4 5 

4 8 
1 2 4
2 1 4
1 4 -1
4 1 -1
2 3 3 
3 2 3 
4 3 5 
3 4 5 

op: The graph has negative cycle

// neg weight but no neg cycle | input u---v this way (undirected)
4 4
1 2 -4
1 4 -2
4 3 5 
2 3 3

op: The graph has negative cycle

although the above two graphs are same but input it given in different way, 
and though the above graph doesnot contain any negative cycle, but as the graph contains 
negative weight and I have made the graph undirected, the output using bellman_ford 
shows the graph has a cycle. 
so, we can not apply bellman_ford in a undirected graph that has negative weight. 

********************
###############

what if the graph is undirected and it doesnot contain any negative weight? 

in this case, if the graph does not contain any negative weight,
we can apply bellman_ford ford algo, but for this case we have better option Dijkstra. 
so, if the graph is undirected and and contain positive weight, apply Dijkstra not bellman_ford. 


###############
// NO neg weight and no neg cycle | input u--->v and v--->u in this way(directed way input but undirected). 
5 10
1 2 4
2 1 4
1 4 2
4 1 2
2 3 3 
3 2 3 
4 3 5 
3 4 5
3 5 3
5 3 3 

op: 
From 1 to: 1 : 0 
From 1 to: 2 : 4 
From 1 to: 3 : 7 
From 1 to: 4 : 2 
From 1 to: 5 : 10

// NO neg weight and no neg cycle | input u---v this way (undirected)
5 5
1 2 4
1 4 2
4 3 5 
2 3 3
3 5 3 

op: 
From 1 to: 1 : 0 
From 1 to: 2 : 4 
From 1 to: 3 : 7 
From 1 to: 4 : 2 
From 1 to: 5 : 10

THUS, WE SEE THAT WE CAN APPLY BellmanFord ALGO IN UNDIRECTED GRAPH 
ONLY IF THE GRPAH DOES NOT CONTAIN ANY NEGATIVE WEIGHT. 
IF THE GRAPH CONTAIN ANY NEGATIVE WEIGHT AND IT IS A UNDIRECTED GRAPH, THEN 
THE GRAPH WOULD END UP HAVING A NEGATIVE CYCLE. 
[TO NOTE: WE CAN HAVE A FEW UNDIRECTED EDGE IN A DIRECTED GRAPH, I.E U-->V AND V-->U 
IN SUCH THAT THEY DO NOT FROM ANY NEGATIVE CYCLE. BUT WE CAN'T HAVE A WHOLE UNDIRECTED 
GRAPH INPUT AS DIRECTED WAY, IN THIS CASE, ANY NEGATIVE WEIGHT WOULD MAKE THE GRAPH NEGATIVE CYCLE]

SO FOR THIS WE HAVE Dijkstra THAT FINDS SSSP ON POSITIVE WEIGHT GRAPH, SO IN THIS CASES, 
APPLY Dijkstra NOT BellmanFord.

THE INPUT STYLE OF UNDIRECTED GRPH does not matter as long as the graph does not have any negative weight. 
###############
###############
as these input are for same graph, but the graph originally contain a negative cycle. 

// has neg weight and neg cycle | input u--->v and v--->u in this way. 
4 8 
1 2 -4
2 1 -4
1 4 -2
4 1 -2
2 3 3 
3 2 3 
4 3 2
3 4 2 

op: The graph has negative cycle

// neg weight  with neg cycle | input u---v this way (undirected)
4 4
1 2 -4
1 4 -2
4 3 1 
2 3 3

op: The graph has negative cycle


4 8 
1 2 3
3 2 5
1 3 2 
3 1 1 
1 4 2 
0 2 4 
4 3 -3 
0 1 -1 


*/

int main(){
	
	cin>>n>>m;
	for(int i=0; i<m; i++)
	{
		int u, v, w;
		cin>>u>>v>>w;
		adjList[u].pb({v, w});
                // in general we only use the algo if the graph is directed 
                // we can use undirected graph if it does not contain ANY NEGATIVE WEIGHT 
		// adjList[v].pb({u, w}); 
	}
        
        int src = 1;

        bool has_cycle = bellmanFord(src);
        if(has_cycle)
                cout<<"The graph has negative cycle"<<endl;
        else 
        {
               
                for(int i=1; i<=n; i++)
                {
                        cout<<"From "<<src<<" to: "<<i<<" : "<<dist[i]<<endl;
                }
                cout<<endl;
        }

	return 0;
}

