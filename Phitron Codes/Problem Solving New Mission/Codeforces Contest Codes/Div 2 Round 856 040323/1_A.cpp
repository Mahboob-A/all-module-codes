







/*  
===========
Codeforces Contest 
===========
040323, Friday
Time : 11.05 pm 
===========
Div 2 || Round 856
===========
QS =  A
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

bool is_palindrome(string s) 
{
        int n = s.length();
        for (int i = 0; i < n / 2; i++) 
        {
                if (s[i] != s[n - i - 1]) 
                {
                        return false;
                }
        }
        return true;
}


void solve()
{
        int n;
        cin >> n;
        string s = "";
        for (int i = 0; i < 2 * n - 2; i++) {
            string p;
            cin >> p;
            if (p.length() == n - 1) {
                s = p;
            }
        }
        string p1 = s.substr(0, n - 2) + s.substr(n - 1);
        string p2 = s.substr(1, n - 2) + s.substr(n - 1);
        if (is_palindrome(p1) || is_palindrome(p2)) 
        {
                yes;
        } 
        else 
        {
            no;
        }
}

int main(){

        // FIO 
        int t;
        cin>>t;
        while(t--)
        {
                solve();
        }

}







