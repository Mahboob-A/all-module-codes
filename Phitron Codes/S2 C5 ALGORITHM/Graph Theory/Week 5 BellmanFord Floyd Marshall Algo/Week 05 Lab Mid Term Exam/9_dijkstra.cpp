

/*  
Week 05 : lab mid term exam 
exam date: 150123 - 170123 - 100; 170123-220123 - 90; rest 80 marks 
exam writing date: 090223, thursday, 12.00 am 
// this problem done date: 110223, satruday, 12.00 am 

qs : 09 - 
the input is a bit complex, the rest is a simple dijkstra. 
if we see the curr_time time is > 0 and beginning village is as src, we will just add the curr_time and end time as cost of the src to dest srcNode 
else 
we will only take the end time - curr_time time as cost of the src to dest srcNode . see below the input. 


Between some villages of Vasyuki district there are buses routes. As the passenger traffic is not very large, the buses run only a few times a day.

Maria Ivanovna wants to get from the village d to the village v as soon as possible (it is assumed that at time 0 she is in the village d).

Input
First given the total number of villages n (1 ≤ n ≤ 100), d and v, then the number of bus lines r (0 ≤ r ≤ 10000). Then given the description of bus trips. Each route is given by the number of the starting village, time of departure, the destination village and the arrival time (all times are integers from 0 to 10000). If at time t the passenger arrives in the village, he can leave it at any time, starting from t.

Output
Print the minimum time when Maria Ivanovna can reach the village v. If she fails with these bus trips to get from d to v, output -1.

Sample 1
Inputcopy	Outputcopy
3
1 3
4
1 0 2 5
1 1 2 3
2 3 3 5
1 1 3 10
*/

/*  
Between some villages of Vasyuki district there are buses routes. As the passenger traffic is not very large, the buses run only a few times a day.

Maria Ivanovna wants to get from the village d to the village v as soon as possible (it is assumed that at time 0 she is in the village d).

Input
First given the total number of villages n (1 ≤ n ≤ 100), d and v, then the number of bus lines r (0 ≤ r ≤ 10000). Then given the description of bus trips. Each route is given by the number of the starting village, time of departure, the destination village and the arrival time (all times are integers from 0 to 10000). If at time t the passenger arrives in the village, he can leave it at any time, starting from t.

Output
Print the minimum time when Maria Ivanovna can reach the village v. If she fails with these bus trips to get from d to v, output -1.

Sample 1
Inputcopy	Outputcopy
3
1 3
4
1 0 2 5
1 1 2 3
2 3 3 5
1 1 3 10
5

*/


// see the below ac code 
/*

#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define v first
#define d second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define INT_INF 1e9
const int N = 1e5 + 100;

vecPii adjList[N];
int visited[N];
int parent[N];
int dist[N];
int n, m, r, d, v;   // r is description of the src dest srcNode and their cost , d is src srcNode from where we need to begin dijkstra, v is out dest 
// if we could go form d to v 


void dijkstra(int src)
{
        priority_queue<pii, vector<pii>, greater<pii>>q;
        for(int i=1; i<=n; i++)
        {
                dist[i] = INT_INF;
        }
        dist[src] = 0;
        q.push({0, src});

        while(!q.empty())
        {
                int headsrcNode = q.top().d;
                q.pop();

                if(visited[headsrcNode])
                {
                        continue;
                }
                visited[headsrcNode] = 1;

                for(pii edge_entry : adjList[headsrcNode])
                {
                        int adjsrcNode = edge_entry.v;
                        int w = edge_entry.d;

                        if(dist[headsrcNode] + w < dist[adjsrcNode])
                        {
                                dist[adjsrcNode] = dist[headsrcNode] + w;
                                q.push({dist[adjsrcNode], adjsrcNode});
                        }
                }
        }
}

int main(){

        cin>>n>>d>>v>>r;     // taking input num of srcNodes, src, dest, num of edges 
        for(int i=0; i<r; i++)
        {
                int srcsrcNode, departureTime, destsrcNode, arrivalTime;
                cin>>srcsrcNode>>departureTime>>destsrcNode>>arrivalTime;
                

                // the cost of u to v would be arrivalTime - departureTime
                // but if the srcsrcNode is also same as d(our main src srcNode), and the journey beginning time
                // is greater than 0, then from source u to dest v, the cost would be arrivalTime which is also totalCost + departureTime 
                // as totalCost = arrivalTime - departureTime defined earlier 
                int totalCost = arrivalTime - departureTime;
                if(srcsrcNode == d  && departureTime > 0)
                {
                        totalCost += departureTime;
                }
                adjList[srcsrcNode].pb({destsrcNode, totalCost});
        }


        dijkstra(d);

        if(dist[v] == INT_INF)
        {
                cout<<-1<<endl;
        }
        else
        {
                cout<<dist[v]<<endl;
        }

        return 0;
}

*/



// clean version of the below code : 
// https://ideone.com/yvd4QJ?fbclid=IwAR3w6xfShgiSukLdr3J9Sn8si2NYCxzceD9xIQreCc9kZEVqg8cxOdPoiAQ

// correct ac code 
#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define v first
#define d second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define INT_INF 1e9
const int N = 1e5 + 100;

vector<vector<pair<int, pair<int, int>>>>adjList;
int visited[N];
int parent[N];
int dist[N];
int n, m, r, d, v;   // r is description of the src dest srcNode and their cost , d is src srcNode from where we need to begin dijkstra, v is out dest 
// if we could go form d to v 
int res = -1;
 
void dfs(int srcNode, int curr_time){
 
    visited[srcNode] = 1;
        
    // get the min time to reach from src to v. if res is still v and we are in the src node, then first time we are
    // in dest node from src. else get the min value of res and curr_time we have reached and update the res 
    if(srcNode == v){
        
        res = (res == -1? curr_time : min(res,curr_time));
    }
 
    for(auto edge_entry : adjList[srcNode]){
 
        int adjNode = edge_entry.first;
        int departureTime = edge_entry.second.first;
        int arrivalTime = edge_entry.second.second;
        
        // if the village or node is already visited, or if the departureTime or beginning time is passed, then continue 
        if(visited[adjNode] == 1 || curr_time > departureTime){    // departure time is begin time 
 
            continue;
        } 

        // if the arrival time or the end time is greater than the res, continue . it denotes that we have some value in res and end time is greater than the res, 
        // we can not go to the node with this time 
        if(res != -1 && arrivalTime > res){   // arrival time is end time 
 
            continue;
        }
 
        dfs(adjNode, arrivalTime);   // make arrival time as the new curr_time
    }
 
    visited[srcNode] = 2;
}
 
int main(){
 
    // n number of nodes, d = source node, v = dest node, r = number of edges 
    cin>>n>>d>>v>>r;
   

    // resize with n as giving size like vec pii graph [N] wont work here as  vec of vec of pii of pii 
    adjList.resize(n);


    // the question is confusing. it gives node input as 1 based but the graph representation is from 0 based. 
    // so, decrement the source and dest node 
    --d, --v;
    // this loop gives the beginning node, end node, beginning time and end time of the graph i.e src dest and cost 
    for(int i=0; i<r; i++){
 
        int srcNode, departureTime, destNode, arrivalTime;
        cin>>srcNode>>departureTime>>destNode>>arrivalTime;
        
        // as we will be getting node input and this nodes are represented as 0 based but input is given as 1 based, so, decrement the value. 
        --srcNode,  --destNode; 
 
        adjList[srcNode].push_back({destNode,  {departureTime, arrivalTime}});   // departureTime is begin time and arrival time is end time 
    }
 
    // run dfs with the source noce and 0 time as curr_time 
    dfs(d,0);

    cout<<res<<endl;

    return 0;
}
 
// detailed explanation of the above code 

 /*  
 
 what does this code mean : if(srcNode == v){
 
        res = (res == -1? resumeNode : min(res,resumeNode));
    }

This code is checking if the current node being processed, represented by srcNode, is equal to the destination node v. If it is, then it's updating the result with the shortest time it has seen so far to reach the destination node.

The variable res is the final result and resumeNode is the current time it took to reach the node. If res is equal to -1, it means this is the first time the destination node has been reached, so res is updated with resumeNode directly. If res has already been updated with a previous time, then it takes the minimum of the two values, res and resumeNode, and updates res with the minimum value.

In this way, the code is finding the shortest time to reach the destination node by updating res with the minimum time it has seen so far.
Web Dev
make me understand what this code does : void dfs(int srcNode, int curr_time){
 
    visited[srcNode] = 1;
        
    // get the min time to reach from src to v. if res is still v and we are in the src node, then first time we are
    // in dest node from src. else get the min value of res and curr_time we have reached and update the res 
    if(srcNode == v){
 
        res = (res == -1? curr_time : min(res,curr_time));
    }
 
    for(auto edge_entry : adjList[srcNode]){
 
        int adjNode = edge_entry.first;
        int beginTime = edge_entry.second.first;
        int endTime = edge_entry.second.second;
 
        if(visited[adjNode] == 1 || curr_time > beginTime){
 
            continue;
        }
        if(res != -1 && endTime > res){
 
            continue;
        }
 
        dfs(adjNode, endTime);
    }
 
    visited[srcNode] = 2;
}

This code is a depth-first search (DFS) implementation to find the minimum time from the village 'srcNode' to the village 'v'. The visited array is used to keep track of which villages have already been visited so that the same village isn't visited twice.

The code first checks if the srcNode is equal to the destination village 'v'. If it is, the res variable is updated to the minimum of either the current res value or the current time curr_time (res = (res == -1? curr_time : min(res,curr_time));).

The code then loops through the list of all the villages adjNode that are adjacent to the current srcNode. For each of these villages, it checks if the village has already been visited or if the departure time beginTime has already passed. If either of these conditions is true, the code moves on to the next adjacent village.

If the res variable is not equal to -1 and the arrival time endTime is greater than res, the code continues to the next adjacent village because it means that the time to reach the destination village from this village would be greater than the current minimum time.

If all these conditions are not met, the code calls the dfs function again, this time with the adjacent village as the new source and the arrival time as the new current time.

Once the code is done with all the adjacent villages, it marks the current source village as "visited" (visited[srcNode] = 2) so that it won't be visited again.
Web Dev
make me understand the input of the same problem : int main(){
 
 
    cin>>n>>d>>v>>r;

    adjList.resize(n);


    --d, --v;
    
    for(int i=0; i<r; i++){
 
        int srcNode, beginTime, destNode, endTime;
        cin>>srcNode>>beginTime>>destNode>>endTime;
 
        --srcNode,  --destNode;
 
        adjList[srcNode].push_back({destNode,  {beginTime, endTime}});
    }
 
    dfs(d,0);

    cout<<res<<endl;

    return 0;
}
 

The input of the problem represents the graph data of bus trips. The input consists of the following parameters:

    n: An integer that represents the number of villages in the graph.

    d: An integer that represents the starting village (departure village) in the graph.

    v: An integer that represents the destination village in the graph.

    r: An integer that represents the number of routes between villages.

The input also contains the details of each route, which consist of the following:

    srcNode: An integer that represents the starting village for a particular route.

    beginTime: An integer that represents the departure time from the starting village.

    destNode: An integer that represents the destination village for a particular route.

    endTime: An integer that represents the arrival time at the destination village.

The input data is read from the standard input stream and stored in the adjList data structure for the processing of the problem.

--d, --v: The values of d and v are decremented by 1, as the indices in the graph data structures start from 0, but the input is given as 1-indexed.

In the end, the dfs function is called with the departure village and the time 0 as the parameters. The output of the problem is stored in the res variable, which is then printed on the standard output stream.
Web Dev
why then  --srcNode,  --destNode; these are decremented as the loop begins from 0 and node begins from 0

The --srcNode and --destNode are decremented in order to convert the node numbering from 1-based to 0-based, which is the convention used in most computer programs.

For example, in the input, the node number is given as srcNode and destNode, which are 1-based. But in the implementation, the nodes are represented using arrays and the first index of arrays is usually 0 in most computer programs. So, to match the node numbering in the input with the node representation in the implementation, the node numbers are decremented by 1, using --srcNode and --destNode, before they are stored in the adjacency list adjList.
 
 
 */




