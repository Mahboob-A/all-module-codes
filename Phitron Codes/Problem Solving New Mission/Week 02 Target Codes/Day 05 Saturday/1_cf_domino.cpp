






/*


                              ___,--------,____
                      __--~~~~                 ~~---,_
                   ,-'                  __,--,_       `\,___,-,__
                ,-'                 __/'/-~~~\  `  ` . '    , |  `~~\
             _/`      _/~~      '~~   \,_\_ O /        '  '~_/'      `\
           /'        '                   =-'~~  _  /  ~   /'          `\
        _/'  /~                            ,--,____,-----|,_,-,_       `\
    _,/'    '              ,-'      _      `~'------'~~~~~--    `~~~~\  |
 ,-'             /~       '    ,-~~~         _,       ,-=~~~~~~~~~~~~'| |
~              .'             '         ,   '      /~`                |/
                                  /' ,/'       _/~'
                   ,       /    /`          _/~
        /~        /      /`               /'
      .'                                /'
                       /'      .      /
                      `       /'     |
                                    '




*/



/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 05 : 250223, Saturday
Time : 08.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 1 || AA. Domino || https://codeforces.com/problemset/problem/353/A
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
n and 2n values are given in pair, x and y. 
if sum of x and sum of y are even then we need 0 move. 
if any sum is odd any other one is even, then we can not make both x and y pair even. 

if both sum are odd, and any value is odd and other one 
is even,  only then we can make both even 


*/

int main(){

        FIO 
        
        int n, sum_x = 0, sum_y = 0, x, y;

        cin>>n;

        bool flag = false;
        for(int i=0; i<n; i++)
        {
                cin>>x>>y;
                sum_x += x;
                sum_y += y;

                // if any value is even and other is odd 
                if(x % 2 == 1 && y % 2 == 0)
                        flag = true;
                if(x % 2 == 0 && y % 2 == 1)
                        flag = true;
        }

        /*  
        5
        6 4 
        2 2 
        3 5
        4 3
        2 5

        3
        2 3
        2 5
        4 1

        */
        // cout<<sum_x<<" "<<sum_y<<endl;
        
        if(sum_x % 2 == 0 && sum_y % 2 == 0)
        {
                cout<<0<<endl;
        }
        else if(sum_x % 2 == 1 && sum_y % 2 == 1 && flag)
        {
                cout<<1<<endl;
        }
        else 
        {
                cout<<-1<<endl;
        }


        return 0;
}



