






/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 06 : 200223, Monday
Time : 08.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 4 || A. Football || https://codeforces.com/problemset/problem/43/A
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


we will be given n, the number of total tv and m, total_tv_can_be_carried by bob. 
bob can only earn if the tv prices are less than 0 i.e in negative form and 
bob can carry at most total_tv_can_be_carried or m time.

so we need to sort the array in ascending order, and all the negative max value will be sorted in ascesding order 
and just count their sum.


{}  // this below apprach would not work as maximum profit is needed, if we only need just profit of m capapcity, then 
// without sorting apprach would work. 
so running a loop till n and if we encounter any negative value, we add it to answer, and 
decrement m, and if m==0, that means we have reached the max capapcity of bob's carry then break and 
cout the sum. 
{}   

*/

int main(){


        int total_tv, total_tv_can_be_carried;    // total_tv = n, total_tv_can_be_carried = m 
        cin>>total_tv>>total_tv_can_be_carried;
        
        int tv_price[total_tv + 1];

        for(int i=0; i<total_tv; i++)
        {
                cin>>tv_price[i];
        }

        sort(tv_price, tv_price+total_tv);

        int ans = 0;
        for(int i=0; i<total_tv_can_be_carried; i++)
        {
                if(tv_price[i] < 0)
                {
                        // as we need the answer in positive format ans we are taking value of negave 
                        ans -= tv_price[i];
                }
        }

        cout<<ans<<endl;
        




        return 0;
}