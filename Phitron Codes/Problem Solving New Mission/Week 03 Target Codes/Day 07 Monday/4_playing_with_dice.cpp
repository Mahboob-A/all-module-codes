











/*  
===========
Problem Solving New Mission 
===========

===========
Week 03 - 280223, Tuesday to 060323, Monday
Day 07 : 060323, Monday 
Time : 10.30 am 
===========

===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========

===========
QS =  04   ||   A. Playing with Dice   ||  https://codeforces.com/problemset/problem/378/A
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

        int win =  0, lost = 0, draw = 0;
        int a, b, res1, res2;
        
        cin>>a>>b;
        for(int i=1; i<=6; i++)
        {
                res1 = abs(a - i);
                res2 = abs(b - i);
                if(res1 < res2) win++;
                else if(res1 > res2) lost++;
                else draw++;
        }

        cout<<win<<" "<<draw<<" "<<lost<<en; 



        return 0;
}




