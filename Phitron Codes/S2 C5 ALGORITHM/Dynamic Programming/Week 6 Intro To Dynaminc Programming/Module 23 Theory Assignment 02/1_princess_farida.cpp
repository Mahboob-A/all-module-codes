



/*  
Problem link: SPOJ FARIDA
Explain the time and space complexity 					            5
Demonstrate the recursive tree for the following sample I/O			10
Make the table/array/list made in tabular form for the following sample I/O           10

Input:
5
1 2 3 4 5
Output:
9


*/


/*  
algo, week 06, dp, theory assignment 02 
princess farida dp problem 

exam date: 260123, Thursday 
exam code written date: 010323, Wednesday, 04.00 pm 

*/


#include <bits/stdc++.h>
using namespace std;

#define loop(i, y) for(int i=0; i<y; i++)
#define For(i, y) for(int i=1; i<=y; i++)
#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define INT_INF 1e9 
#define ll long long 
const int N = 1e5+100;
vector<int>answer;
vector<pii>allSrc;
pii src, destination;
//priority_queue<int, vec, greater<int>>q;
vec adjList[N];
int visited[N];
int parent[N];
int dist[N];


// const ll MAXI = 1e9;
// vector<ll>dp, arr;
// ll dp[MAXI], arr[MAXI];

ll n;
ll dp[N], arr[N];

ll solve(ll monster)
{
        if(monster >= n)
        {
                return 0;
        }

        if(dp[monster] != -1)
        {
                return dp[monster];
        }

        ll ans1 = solve(monster + 1);
        ll ans2 = solve(monster + 2) + arr[monster];
        dp[monster] = max(ans1, ans2);

        return dp[monster];


}

ll process()
{
        memset(dp, -1, sizeof(dp));    //for arraay 
        cin>>n;
        // dp.resize(n, -1), arr.resize(n);
        // dp.clear(), arr.clear();

        for(int i=0; i<n; i++)
        {
                cin>>arr[i];
        }

        return solve(0);

}

int main(){

	// ios_base::sync_with_stdio(false);
        // cin.tie(NULL);

        int t;
        cin>>t;
        for(int i=1; i<=t; i++)
        {
                ll ans = process();
                cout<<"Case "<<i<<": "<<ans<<endl;
        }
	
	

	return 0;
}