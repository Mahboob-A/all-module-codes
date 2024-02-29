
/*
#include <cstdio>
#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <functional>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef map<int,int> mii;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<string> vs;
 
#define rep(i,n) for(int i=0;i<n;i++)
#define forup(i,a,b) for(int i=a;i<=b;i++)
#define fordn(i,a,b) for(int i=a;i>=b;i--)
#define drep(i,n) for(i=0;i<n;i++)
#define dforup(i,a,b) for(i=a;i<=b;i++)
#define dfordn(i,a,b) for(i=a;i>=b;i--)
#define all(x) x.begin(),x.end()
#define permute(x) next_permutation(all(x))
#define ri(x) scanf("%d",&x)
#define rl(x) scanf("%lld",&x)
#define rd(x) scanf("%.lf",&x);
#define rs(x) scanf(" %s",x);
#define pb push_back
#define mp make_pair
#define fi first
#define sc second
#define modref 1000000007
 
int main() {
	int n,m;
	ri(n); ri(m);
	vi f(m);
	rep(i,m) ri(f[i]);
	sort(all(f));
	int ans=int(1e9);
	forup(i,0,m-n)
		ans=min(ans,f[i+n-1]-f[i]);
	cout<<ans;
	return 0;
}

*/
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    int a[1009];
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++)scanf("%d",&a[i]);
    sort(a+1,a+1+m);
    int ans=1000000000;
    for(int i=1;i<=m;i++)
    {
        int st=i,en=st+n-1;
        if(en>m)break;
        int s=a[en]-a[st];
        if(s<ans)ans=s;
    }
    printf("%d\n",ans);
    return 0;
}