






/*  
===========
Problem Solving New Mission 
===========

===========
Week 03 - 280223, Tuesday to 060323, Monday
Day 01 : 280223, Tuesday
Time : 08.30 pm  
===========

===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========

===========
QS =  03  ||    A. Squats || https://codeforces.com/problemset/problem/424/A
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

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

        // FIO 
        int n, seated_hamster = 0;
        string s;
        cin>>n>>s;
        
        for(int i=0; i<n; i++)
        {
                if(s[i] == 'x')
                {
                        seated_hamster++;
                }
        }

        int tmp_count = seated_hamster;

        for(int i=0; i<n; i++)
        {
                if(seated_hamster > n / 2 && s[i] == 'x')
                {
                        s[i] = 'X';
                        seated_hamster--;
                }
                else if(seated_hamster < n / 2 && s[i] == 'X')
                {
                        s[i] = 'x';
                        seated_hamster++;
                }
        }

        // cout<<abs(2/2-0)<<endl;
        cout<<abs(n / 2 - tmp_count)<<en;
        cout<<s<<en;

        return 0;
}




