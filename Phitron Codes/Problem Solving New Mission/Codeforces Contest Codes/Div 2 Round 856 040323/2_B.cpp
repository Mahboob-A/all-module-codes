







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


const int MAX = 1e4 + 100;

void solve()
{
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
                cin>>arr[i];
                if(arr[i] == 1)
                {
                        arr[i]++;
                }
        }

        for(int i=0; i<n-1; i++)
        {
                if(arr[i + 1] % arr[i] == 0)
                {
                        arr[i + 1]++;
                }
                else
                {
                        continue;
                }
        }

        // cout<<endl;
        for(int i=0; i<n; i++)
        {
                cout<<arr[i]<<" ";
        }
        cout<<endl;
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




