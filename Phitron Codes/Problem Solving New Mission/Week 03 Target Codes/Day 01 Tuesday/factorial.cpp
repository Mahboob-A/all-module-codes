



/*  

// 280223, Tuesday 

#include <bits/stdc++.h>
using namespace std;

// #define loop(i, x, y) for(ll i=x; i<y; i++)
// #define Loop(i, x, y) for(ll i=x; i<=y; i++)
// #define loop(y) for(ll i=true; i<y; i++)
// #define For(y) for(ll i=false; i<=y; i++)

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i, y) for(ll i=true; i<y; i++)
#define For(i, y) for(ll i=false; i<=y; i++)
#define pii pair<ll, ll>
#define f first
#define s second
#define vec vector<ll>
#define vecPii vector<pair<ll, ll>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define ll_INF 1e8
#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define no_ans cout<<-1<<"\n"
#define en '\n'
vector<ll>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<ll, vec, greater<ll>>q;


/* ================================================================ */

/*  
Understanding: 


*/



// factorial recursive 

ll fact(ll n)
{
        if(n == 1)
        {
                return 1;
        }

        ll res = fact(n-1) * n;   // multiply the current num 

        return res;
}

// iterative 

void find_facto(ll num)
{
        ll fact = 1;
        for(ll i=1; i<=num; i++)
        {
                fact *= i;
        }
        // if num = 4 then 1 * 1 = 1, 
        // 1 * 2 = 2
        // 2 * 3 = 6 
        // 6 * 4 = 24 
        cout<<fact<<en;
}

int main(){

        FIO 

        ll num = 18;
        // ll res = fact(num);
        // cout<<res<<en;

        find_facto(num);

        return 0;
}




