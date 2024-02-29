










/*  
===========
Codeforces Contest 
===========
190323, Sunday
Time : 08.00 pm 
===========
Div 4 || Round 859
===========
QS =  B
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
        int arr[n];
        int b = 0, m = 0;
        forn(n)
        {
                cin>>arr[i];
                if(arr[i] % 2 == 0)
                {
                        m += arr[i];
                }
                else
                {
                        b += arr[i];
                }
        }

        

        if(m > b)
        {
                yes;
        }
        else
        {
                no;
        }

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




