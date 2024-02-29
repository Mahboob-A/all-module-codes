


#include<bits/stdc++.h>
   
using namespace std;
const int N=102;
int dp[N],best,path[N],root;
vector<int> adj_lst[N];
   
int dfs_With_dp(int u)
{
    if(dp[u]) return dp[u];
    dp[u]=1;


    for(auto adj_node:adj_lst[u]) {
        int c=adj_node;
        if(dp[u]<dfs_With_dp(c)+1) {
            dp[u]=dp[c]+1;
            path[u]=c;
        }
    }
    return dp[u];
}


void create_graph(int x){


    for(int i=2; i<=101; i++){


        if(i%x == 0){
            adj_lst[x].push_back(i);
        }
    }


}




int main(){




    for(int i=2; i<=101; i++) create_graph(i);


    for(int i=2;i<=101;i++) {
        int path_len=dfs_With_dp(i);
        if(best<path_len) {
            root=i;
            best=path_len;
        }
    }
       cout<<best-1<<endl;
    int u=root;
    cout<<"path Sequence: ";
    while(path[u]!=0) {
        cout<<u<<" ";
        if(u == path[u]) break;
        u=path[u];
    }


    return 0;  
}
