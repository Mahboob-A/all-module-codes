




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
QS = 4    ||   A. Lever   ||     https://codeforces.com/problemset/problem/376/A
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






int main(){

        FIO     

        ll left = 0, right = 0, ans, mid;
        string s;
        cin>>s;
        mid = s.find('^');
        // cout<<"mid: "<<mid<<en;
        for(int i=0; i<s.size(); i++)
        {
                if(s[i] >= '1' && s[i] <= '9')
                {
                        ll val = s[i] - 48;
                        if(i < mid)
                        {
                                left += val *(mid - i);
                        }
                        else
                        {
                                right += val *(i - mid);
                        }
                }
        }

        if(left == right) cout<<"balance"<<en;
        else if(left > right) cout<<"left"<<en;
        else cout<<"right"<<en;



        return 0;
}


// another approach 
/*  
#include <bits/stdc++.h>
 
using namespace std;
#define int long long
 
void solve() {
    string s;
    cin >> s;
    int n = s.size(), center = s.find('^');
    int bal = 0;
    for (int i = 0; i < center; i++)
        if (s[i] >= '1' && s[i] <= '9')
            bal += (center - i) * (s[i] - '0');
    for (int i = center; i < n; i++)
        if (s[i] >= '1' && s[i] <= '9')
            bal -= (i - center) * (s[i] - '0');
    cout << (bal == 0 ? "balance" : (bal < 0 ? "right" : "left"));
}
 
signed main() { 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

*/