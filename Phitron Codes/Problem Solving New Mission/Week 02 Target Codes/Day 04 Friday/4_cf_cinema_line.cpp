




/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 04 : 240223, Friday
Time : 11.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 4 || A. Cinema Line|| https://codeforces.com/problemset/problem/349/A
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

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
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
n and n elements are given. 
elements are either 25, 50 and 100. 
initailly the seller does not have any value. a ticket price is 25. 
so, if first customer has 25 rupees, then only he can serve second customer. 
if customer has 50 rupees, then if seller has 25 rupees, then give change and add 50 
to self, else he can not serve the custome as he does not have adequate money. 
and if someone has 100 rupees, then the seller must have 75 ruppes either in 25 * 3 
form or 25 + 50 form. if no, he can not serve 100 rupees customer. 


*/

const int N = 1e5 + 10;
int arr[N];

int main(){

	FIO 
        
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
                cin>>arr[i];

        if(arr[0] == 50 || arr[0] == 100)
        {
                cout<<"NO"<<endl;
                return 0;
        }

        int profit_25 = 0, profit_50 = 0;
        for(int i=0; i<n; i++)
        {
                if(arr[i] == 25)
                {
                        profit_25 += 25;
                        continue;
                }
                else if(arr[i] == 50)
                {
                        if(profit_25 >= 25)
                        {
                                profit_25 -= 25;
                                profit_50 += 50;
                                continue;
                                // cout<<profit_25<<" "<<profit_50<<endl;
                        }

                        if(profit_25 < 25)
                        {
                                cout<<"NO"<<endl;
                                return 0;
                        }
                }
                else if(arr[i] == 100)
                {
                        if(profit_25 > 0 && profit_50 > 0)
                        {
                                profit_25 -= 25;
                                profit_50 -= 50;
                        }
                        else if(profit_25 >= 75)
                        {
                                profit_25 -= 75;
                        }
                        else 
                        {
                                cout<<"NO"<<endl;
                                return 0;
                        }
                }
        }

        cout<<"YES"<<endl;


        
        return 0;
}