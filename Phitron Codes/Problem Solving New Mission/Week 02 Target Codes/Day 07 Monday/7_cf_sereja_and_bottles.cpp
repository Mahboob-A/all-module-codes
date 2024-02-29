






/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 07 : 270223, Monday 
Time : 10.00 am 
===========
Ladder : https://earrthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS =   7  ||    A. Sereja and Bottles    ||     https://codeforces.com/problemset/problem/315/A
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
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define no_ans cout<<-1<<"\n";
#define en '\n';
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 


*/




const int MAXA = 1005;
const int MAX = 105;

int arr[MAX], brr[MAX];
int freq[MAXA];

void solve()
{
        int n, a, b;
        cin>>n;

        for(int i=0; i<n; i++)
        {
                cin>>a>>b;
                arr[i] = a;
                brr[i] = b;
                freq[b]++;
        }

        int ans = 0;
        for(int i=0; i<n; i++)
        {
                if(freq[arr[i]] == 0 || freq[arr[i]] == 1 && arr[i] == brr[i])
                {
                        ans++;
                }
        }

        cout<<ans<<en;
}

int main(){

        FIO 

        int t = 1;
        while(t--)
        {
                solve();
        }



        return 0;
}





	