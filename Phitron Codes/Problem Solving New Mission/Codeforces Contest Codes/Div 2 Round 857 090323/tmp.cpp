/*  
===========
Codeforces Contest 
===========
090323, Thursday
Time : 03.05 pm 
===========
Div 2 || Round 857
===========
QS =  A
===========

===========
Mahboob Alam 
===========
*/

#include <bits/stdc++.h>
using namespace std;

// #define loop(i, i, y) for(int i=i; i<y; i++)
// #define Loop(i, i, y) for(int i=i; i<=y; i++)
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


// int n, a, b, val, cnt;


void solve()
{
        int n, a = 0, b = 0, val, cnt = 0;
        cin >> n;
        for (int i=0; i<n; i++) 
        {
                cin >> val;
                if (val > 0)
                        a++;
                else 
                        b++;
        }

        for (int i=0; i<a; i++) 
        {
                ++cnt;
                cout << cnt << " ";
        }
        // cnt--;
        // cnt--;
        int rest = n - a;
        for (int i=0; i <rest; i++) 
        {
                --cnt;
                cout <<cnt<< " ";
        }

        cout << '\n';

        // cnt = 1;
        cnt = 0;
        for (int i=0; i <b; i++) 
        {
                cout <<1<<" "<<0<<" ";
        }

        int tmp = n - 2 * b;
        
        for (int i=0; i<tmp; i++) 
        {
                ++cnt;
                cout <<cnt<<" ";
        }
        cout << '\n';
}


int main() {

        FIO
        int t ;
        cin>>t;
        while(t--)
        {
                solve();
                // cout<<"\n";
        }
        
    return 0;
}