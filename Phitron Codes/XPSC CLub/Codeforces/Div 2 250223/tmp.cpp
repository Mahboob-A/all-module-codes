
/*
===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

// #define loop(i, x, y) for(int i=x; i<y; i++)
// #define Loop(i, x, y) for(int i=x; i<=y; i++)
// #define loop(y) for(int i=0; i<y; i++)
// #define For(y) for(int i=1; i<=y; i++)

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
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
#define INT_INF 1e8
#define ll long long 
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */


const int N = 110;

int gcd(int a, int b)
{
        if(b == 0)
        {
                return a;
        }

        return gcd(b, a % b);
}


void solve()
{
        int n;
        cin>>n;

        vec v(n);
        for(int i=0; i<n; i++)
        {
                cin>>v[i];
        }

        for(int i=0; i<n; i++)
        {
                for(int j=i+1; j<n; j++)
                {
                        
                        if(gcd(v[i], v[j]) <= 2 )
                        {
                                cout<<"YES\n";
                                return;
                        }
                }
        }
        
        cout<<"NO\n";
}

/*  
if(gcd(v[i], v[j] <= 2 ))
                        {
                                cout<<"YES\n";
                                return;
                        }

*/

int main(){

        FIO 
        int t;
        cin>>t;

        while(t--)
        {
               solve();
        }
        



        return 0;
}
