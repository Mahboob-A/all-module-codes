








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
QS = 2 || A. Rank List || https://codeforces.com/problemset/problem/166/A
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
we will be given n and k.
then n lines : 
x and y. x is the Numbers of problems a team solved and y is the penalty. 
we need to find how many teams are in k positions. 

a team x is winner if they has solved more problems. 
so, just take a pair type vector and push as ( - x, y) so that when we sort 
the vector, we always get the max solved problems at the beginning. 
now decrease k as we are taking 0 based indexing and in problem it is 1 based. 
now vector[k] holds the position => we need to count how many teams has this same vector[k] 
value, and that is our answer. 


*/

int main(){

        FIO 
        vecPii v;
        int n, k, solved_problems, penalty;
        cin>>n>>k;

        for(int i=0; i<n; i++)
        {
                cin>>solved_problems>>penalty;
                v.pb({ -  solved_problems, penalty});
        }
        
        sort(v.begin(), v.end());
        k--;

        int ans = 0;
        for(int i=0; i<n; i++)  
        {
                if(v[i] == v[k])
                {
                        ans++;
                }
        }

        cout<<ans<<endl;

        return 0;
}




