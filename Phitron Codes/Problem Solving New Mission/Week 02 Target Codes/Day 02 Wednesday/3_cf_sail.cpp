



/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 02 : 220223, Wednesday
Time : 12.30 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 3 || B. Sail || https://codeforces.com/problemset/problem/298/B
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

// #define loop(i, x, y) for(int i=x; i<y; i++)
// #define Loop(i, x, y) for(int i=x; i<=y; i++)
// #define loop(y) for(int i=0; i<y; i++)
// #define For(y) for(int i=1; i<=y; i++)

#define loop(i, y) for(int i=0; i<y; i++)
#define For(i, y) for(int i=1; i<=y; i++)
#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define INT_INF 1e8
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 



*/

int main(){

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int  t,sx,sy,ex,ey,i,c1,c2;
        string s;
    
        cin>>t>>sx>>sy>>ex>>ey;
        cin>>s;
        c1=ex-sx;
        c2=ey-sy;
        
        for(i=0;i<s.length();i++)
        {
                if(s[i]=='N' && c2>0)
                        c2--;
                else if(s[i]=='S' && c2<0)
                        c2++;
                else if(s[i]=='E' && c1>0)
                        c1--;
                else if(s[i]=='W' && c1<0)
                        c1++;
                
                if(c1==0 && c2==0)
                        break;
        }

        if(c1==0 && c2==0)
                cout<<i+1<<endl;
        else
                cout<<"-1"<<endl;

        return 0;
}
