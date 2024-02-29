//280123,saturday, 10.00 pm 
// algo, gt, week 4 exam mid term kefa and park codeforces 
// question 06 



#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
const int N = 1e5+100;
int cat[N];
vec adjList[N];
int ans = 0;
int n, m;


void dfs(int currNode, int parentNode, int is_cat, int max_cat)
{
        if(cat[currNode])
                is_cat++;
        else 
                is_cat = 0;
        
        max_cat = max(max_cat, is_cat); 

        int child = 0;
        for(auto adjNode : adjList[currNode])
        {
                if(adjNode != parentNode)
                {
                        dfs(adjNode, currNode, is_cat, max_cat);
                        child++;
                }
        }

        if(child == 0 && max_cat <=m)
                ans++;
}


int main(){

        cin>>n>>m;
        for(int i=1;i<=n; i++)
        {
                cin>>cat[i];
        }
        for(int i=1; i<n; i++)
        {
                int u, v;
                cin>>u>>v;
                adjList[u].pb(v);
                adjList[v].pb(u);
        }
        dfs(1, -1, 0, 0);
        cout<<ans<<endl;

        return 0;
}