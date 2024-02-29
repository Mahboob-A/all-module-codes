







/*  
===========
Problem Solving New Mission 
===========

===========
Week 03 - 280223, Tuesday to 060323, Monday
Day 06 : 050323, Sunday
Time : 03.30 pm  
===========

===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========

===========
QS =  01   ||    A. Line to Cashier  ||  https://codeforces.com/problemset/problem/408/A
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
basic implementataion

*/




int arr[1000];

int main(){

        // FIO 

        int n, min_time = 1e7;
        
        cin>>n;
        for(int i=0; i<n; i++)
        {
                cin>>arr[i];
        }

        int total_product = 0, total_person = 0;
        for(int i=0; i<n; i++)
        {
                total_person = arr[i];
                int  total_time = 0;

                for(int j=0; j<total_person; j++)
                {
                        cin>>total_product;
                        total_time += total_product * 5 + 15;
                }

                if(min_time > total_time)
                {
                        min_time = total_time;
                }
        }


        cout<<min_time<<en;

        return 0;
}




