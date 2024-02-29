









/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 07 : 270223, Monday 
Time : 04.00 pm  
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS =   11  ||    A. Jeff and Digits   ||  https://codeforces.com/problemset/problem/352/A
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






int main(){

        FIO 

        int n, zero = 0, five = 0, val;
        cin>>n;

        for(int i=0; i<n; i++)
        {
                cin>>val;
                if(val == 0)
                {
                        zero++;
                }
                else 
                {
                        five++;
                }
        }


        if(zero == 0)
        {
                cout<<-1<<en;
        }
        else if(five < 9)
        {
                cout<<0<<en;
        }
        else 
        {
                five = five / 9 * 9;
                for(int i=0; i<five; i++)
                {
                        cout<<5;
                }
                for(int i=0; i<zero; i++)
                {
                        cout<<0;
                }
                cout<<en;
        }

        // cout<<zero<<" "<<five<<endl;

        return 0;
}





	
