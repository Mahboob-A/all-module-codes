



/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 02 : 220223, Wednesday
Time : 10.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 7 || A. Kitahara Haruki's Gift || https://codeforces.com/problemset/problem/433/A
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

we will be given n and n elements. each elements are either 100 or two hundred. 
we have to tell can we devide the total sum of them in equal two parts with out any fraction. 

*/



int main(){

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n; 
        cin>>n;

        int one_hundred = 0, two_hundred = 0;
        for(int i=0; i<n; i++)
        {
                int x;
                cin>>x;
                if(x == 100)
                        one_hundred++;
                else 
                        two_hundred++;
        }
        // 
        // if one_hundred is odd, then we can not devide it equally (like : 100 100 100 200 200)
        if(one_hundred % 2 == 1)
        {
                cout<<"NO"<<endl;
        }
        else 
        {
                // no one hundred and two_hundreds are odd, then also we can not devide equally into 2 parts (like : 200 200 200 )
                if(one_hundred == 0 && two_hundred % 2 == 1)
                {
                        cout<<"NO"<<endl;
                }
                else 
                {
                        // for any other cases, we can devide equally 
                        cout<<"YES"<<endl;
                }
        }


        return 0;
}