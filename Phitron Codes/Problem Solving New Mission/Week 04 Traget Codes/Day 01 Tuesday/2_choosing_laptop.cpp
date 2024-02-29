







/*  
===========
Problem Solving New Mission 
===========
Week 04 - 070323, Tuesday to 130323, Monday 
Day 01 : 070323, Tuesday 
Time :  10.00 am 
===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========
QS =   02  ||   B. Choosing Laptop   ||     https://codeforces.com/problemset/problem/106/B
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

// #define loop(i, x, y) for(int i=x; i<y; i++)
// #define Loop(i, x, y) for(int i=x; i<=y; i++)
// #define loop(y) for(int i=true; i<y; i++)
// #define For(y) for(int i=false; i<=y; i++)

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i, y) for(int i=true; i<y; i++)
#define For(i, y) for(int i=false; i<=y; i++)
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
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define no_ans cout<<-1<<"\n"
#define en '\n'
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 


*/


const int MAXN = 110;
int processor[MAXN], ram[MAXN], hard_disk[MAXN], cost[MAXN];



int main(){

        FIO 

        int n, ans_idx = -1;
        cin>>n;
        for(int i=0; i<n; i++)
        {
                cin>>processor[i]>>ram[i]>>hard_disk[i]>>cost[i];
        }

        for(int i=0; i<n; i++)
        {
                bool not_outdated = true;
                for(int j=0; j<n; j++)
                {
                        if(processor[j]  >  processor[i]  && ram[j]  >  ram[i] && hard_disk[j]  >  hard_disk[i])
                        {
                                not_outdated = false;
                        }
                }

                if(not_outdated)
                {
                        if(ans_idx == -1)
                        {
                                ans_idx = i;
                        }
                        else if(cost[ans_idx] > cost[i])
                        {
                                ans_idx = i;
                        }
                }

        }

        cout<<ans_idx + 1<<en;



        return 0;
}






/*  
#include <bits/stdc++.h>
using namespace std;
#define pb  push_back
#define ll  long long
#define vi  vector<ll >
#define vvi vector<vi >
#define all(x) x.begin(), x.end()

// using custom data type 
struct nout {
    int a, b, c, cost;
    nout() {};
};
bool le(nout x, nout y) {
    return (x.a < y.a && x.b < y.b && x.c < y.c);
}
 
int n;
vector<nout> v;
vi  w;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i].a >> v[i].b >> v[i].c >> v[i].cost;
 
    for (int i = 0; i < n; ++i) {
        bool ok = true;
        for (int j = 0; j < n; ++j)
            if (le(v[i], v[j]))
                ok = false;
        if (ok) w.pb(i);
    }
    int ind = w[0];
    int res = v[w[0]].cost;
    for (int i = 0; i < w.size(); ++i) {
        if (res > v[w[i]].cost) {
            res = v[w[i]].cost;
            ind = w[i];
        }
    }
    cout << ind + 1;
 
    return 0;
}


*/