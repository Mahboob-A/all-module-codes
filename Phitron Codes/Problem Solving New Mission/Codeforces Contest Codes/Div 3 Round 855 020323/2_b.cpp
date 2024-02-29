








// /*  
// ===========
// Codeforces Contest 
// ===========
// 020323, Thursday
// Time : 08.00 pm 
// ===========
// Div 3 || Round 855
// ===========
// QS =  B
// ===========

// ===========
// Mahboob Alam 
// ===========
// */


// #include <bits/stdc++.h>
// using namespace std;

// #define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
// #define loop(i, y) for(int i=true; i<y; i++)
// #define For(i, y) for(int i=false; i<=y; i++)
// #define pii pair<int, int>
// #define f first
// #define s second
// #define vec vector<int>
// #define vecPii vector<pair<int, int>> 
// #define pb push_back 
// #define ppb pop_back 
// #define DOUBLE_INF 1e18 
// #define INT_INF 1e8
// #define ll long long
// #define yes cout<<"YES\n"
// #define no cout<<"NO\n"
// #define no_ans cout<<-1<<"\n"
// #define en '\n'
// vector<int>answer;
// vector<pii>allSrc;
// pii src, destination;

// //priority_queue<int, vec, greater<int>>q;


// /* ================================================================ */






// int main(){

//         FIO 


//         return 0;
// }




// rahat khan pathan 
#include<bits/stdc++.h>
#define ll long long int
#define pub push_back
#define pob pop_back
#define PI 3.14159265359
#define vll vector<ll>
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique(All(X)),(X).end())
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
#define pi pair<ll,ll>
#define vpair vector<pair<ll,ll> >
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define minus cout<<-1<<endl
using namespace std;
void solve()
{
    int n,k; cin>>n>>k;
    string s;
    cin>>s;
    int cnt[1000]={0};
    for(char c:s) cnt[c]++;
    int ans=0;
    for(int i=0;i<26;i++)
    {
        int a=cnt[i+97];
        int b=cnt[i+65];
        int x=abs(a-b)/2;
        ans+=min(a,b);
        if(x<=k)
        {
            ans+=x;
            k-=x;
        }
        else
        {
            ans+=k;
            k=0;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}