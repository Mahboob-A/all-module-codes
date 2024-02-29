

/*  
Week 05 : lab mid term exam 
exam date: 150123 - 170123 - 100; 170123-220123 - 90; rest 80 marks 
exam writing date: 090223, thursday, 12.00 am 
// this problem done date: 110223, satruday, 11.00 am 

Write a program that determines for two nodes of a tree whether the first one is a parent of another.

Input
The first line contains the number of vertices n (1 ≤ n ≤ 105) in a tree. The second line contains n numbers, the i-th one gives the vertex number of direct ancestor for the vertex i. If this value is zero, then the vertex is a root of a tree.

The third line contains the number of queries m (1 ≤ m ≤ 105). Each of the next m lines contains two different numbers a and b (1 ≤ a, b ≤ n).

Output
For each of the m queries print on a separate line number 1, if the vertex a is one of the parents of a vertex b, and 0 otherwise.

prb1941.gif

Sample 1
Inputcopy	Outputcopy
6
0 1 1 2 3 3
5
4 1
1 4
3 6
2 6
6 5
0
1
1
0
0
*/

/*  

Write a program that determines for two nodes of a tree whether the first one is a parent of another.

Input
The first line contains the number of vertices n (1 ≤ n ≤ 105) in a tree. The second line contains n numbers, the i-th one gives the vertex number of direct ancestor for the vertex i. If this value is zero, then the vertex is a root of a tree.

The third line contains the number of queries m (1 ≤ m ≤ 105). Each of the next m lines contains two different numbers a and b (1 ≤ a, b ≤ n).

Output
For each of the m queries print on a separate line number 1, if the vertex a is one of the parents of a vertex b, and 0 otherwise.

prb1941.gif

Sample 1
Inputcopy	Outputcopy
6
0 1 1 2 3 3
5
4 1
1 4
3 6
2 6
6 5
0
1
1
0
0

*/


// this code is also correct but got tle as there is a loop below is the implementation using dfs 
/*
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
const int N = 1e5+10;



vec adjList[N];
int visited[N];
int parent[N];
int dist[N];
int n, m;

bool is_parent(int u, int v)
{
        while(v != 0)
        {
                v = parent[v];
                if(v == u)
                {
                        return true;
                }
        }
        return false;
}

int main(){

        cin>>n;
        for(int i=1; i<=n; i++)
        {
                cin>>parent[i];
                adjList[parent[i]].pb(i);
        }

        cin>>m;
        for(int i=1; i<=m; i++)
        {
                int u, v;
                cin>>u>>v;
                if(is_parent(u, v))
                {
                        cout<<1<<endl;
                }
                else 
                {
                        cout<<0<<endl;
                }
        }
        
        return 0;
}

*/

/*  

Pseudocode: 

we will run dfs using the source node. 
- take a count / depth variable and initialize it with 1 
- take a level[N] size 
- take a revised_level[N] size where N is the size of the graph 

- make a void func dfs : take src 
        - level[src] = count++ 
        - for all adjNode of src :
                - dfs(adjNode)
        - end of for loop

        - revised_level[src] = count++ 

- input: 
        - take a variable src = -1 
        - run a loop from 1 to n : 
                - int val = 0 
                - cin val 
                - if val is not 0 then : 
                        - adjList[val].push_back(i)
                - else 
                        - src = i 
                end of if else 
        - end of input 

- dfs(src)

- output: 
        - run a loop form 1 to n : 
                - int a, b;
                - cin a b 
                - if level[a] < level[b] and revised_level[a] > revised_level[b]
                        - print 1 
                else 
                        - print 0 
        - end of output 

- return 0 

Generalization: 

so, the idea is that when we see that a node is explored, then all of its adjNodes are its childrens. 
so when we pass src in the dfs for the first time, we will get level[src] = 1 and then the level of all 
adjacent nodes of 1 will have incremented level than src, as src was the first node that was explored first.

now about the revised_level level: we will get the revised_level a adjacent node v is always less than 
the revised_level level of a parnt u, because when we are exploring the u as parent, it will go on exploring its childrens, and when a 
childern node  would not have its any childern i.e adjacent nodes, then it will backtrack and then we will get the revised_level of 
the this childern node and we will be back to parent u node. so, the revised_level level for parent node u will be always greater 
as we will get back to parent u when we are done with childern v nodes and childern v are done mean they are done exploring their 
adjacents, so they are back to its parent, assigining the revised_level level value of v, and then when we will again get back to the original 
src node, the original src node will assiging its revised_level while will be the biggest value of revised_level. 

so, the original src's level will be smallest and original src's revised_level will be biggest. 
- if we see level of u < level of v, and revised_level level of u > revised_level of v : 
        - then we can conclude that u node was first explored that's why its level is less than level of v 
        - and as revised_level of u is greater than revised_level level of v (it menas that v node's exploration was done and then we 
        - got back to node u, that is why revised_level of v is less and as node u was completed its exploration at last, its revised_level is greater 
        - than node v. ) so if this both condition meets, we can say, node u is parent of node v. 

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
const int N = 1e5+10;

vec adjList[N];
int level[N];
int revised_level[N];
int n, m;

int depth  = 1;
void dfs(int src)
{
        // depth of src will be less than v i.e depth of u will be less that its adjacent nodes 
        level[src] = depth++;
        for(int adjNode : adjList[src])
        {
                dfs(adjNode);
        }
        // revised_level of src as exploration is done of src, it will be greater than its adjacent nodes 
        revised_level[src] = depth++;
}

int main(){

        cin>>n;
        int src = -1;
        for(int child=1; child<=n; child++)    // child / i 
        {
                // input 
                int parent = 0;
                cin>>parent;
                if(parent != 0)
                {
                        // we are getting i  of the for loop as child and the input value as the parent of i'th val 
                        // the input value is the parent of i'th value 
                        // so, in the index of parent, we are storing all of its childrens. 
                        adjList[parent].pb(child);    
                }
                else 
                {
                        // if the parent input is 0, then 0 is the parnt and its i'th value is the children of 0, so storing this i as src 
                        src = child;
                }
        }

        dfs(src);

        cin>>m;
        for(int i=1; i<=m; i++)
        {
                int a, b;
                cin>>a>>b;
                if(level[a] < level[b] && revised_level[a] > revised_level[b])
                {
                        printf("%d\n", 1);
                }
                else
                {
                        printf("%d\n", 0);
                }
        }



        return 0;
}