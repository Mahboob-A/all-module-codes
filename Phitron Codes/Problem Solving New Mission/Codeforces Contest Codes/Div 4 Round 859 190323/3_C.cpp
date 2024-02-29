










/*  
===========
Codeforces Contest 
===========
190323, Sunday
Time : 08.00 pm 
===========
Div 4 || Round 859
===========
QS =  C 
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
#define forn(y) for(int i=0; i<y; i++)
#define Forn(y) for(int i=1; i<=y; i++)
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



void solve()
{
        int n;
        cin>>n;
        string s;
        cin>>s;

         bool can_alternate = true;
        for (int i = 0; i < 2; i++) {
            string pattern = string(n, '0' + i);
            bool is_same = true;
            for (int j = 0; j < n; j++) {
                if (s[j] != pattern[j % 2]) {
                    is_same = false;
                    break;
                }
            }
            if (is_same) {
                cout << "YES\n";
                can_alternate = false;
                break;
            }
        }
        if (can_alternate) {
            cout << "NO\n";
        }

        // bool can_alternate = true;
        // for (int i = 1; i < n; i++) {
        //     if (s[i] == s[i - 1]) {
        //         bool can_replace = false;
        //         for (int j = i + 1; j < n; j++) {
        //             if (s[j] != s[i] && (j - i) % 2 == 1) {
        //                 swap(s[i], s[j]);
        //                 can_replace = true;
        //                 break;
        //             }
        //         }
        //         if (!can_replace) {
        //             can_alternate = false;
        //             break;
        //         }
        //     }
        // }
        // cout << (can_alternate ? "YES\n" : "NO\n");

        // if(count(s.begin(), s.end(), s[0]) == n)
        // {
        //         no;
        //         return;
        // }

        // bool ans = true;
        // for(int i=1; i<n; i++)
        // {
        //         if(s[i] == s[i - 1])
        //         {
        //                 ans = false;
        //                 // break;
        //         }
        // }

        // // cout<<(ans ? "YES\n"  : "NO\n");
        // ans ? yes : no;

}



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




