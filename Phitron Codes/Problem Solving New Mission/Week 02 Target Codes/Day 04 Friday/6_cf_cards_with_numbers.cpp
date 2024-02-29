



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
Day 04 : 240223, Friday
Time : 11.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 6 || A. Cards with Numbers || https://codeforces.com/problemset/problem/254/A
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;


// #define lup(i, x, y) for(int i=x; i<y; i++)
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
n value will be given and input shold be taken for 2 * n. 
we need to check if we have pair for each and every input, then we need to print 
thieir index for first one and then the second one. if there are no pair for any single 
input, then print -1. 


*/

const int MAX_VAL = 5000;
vec store[5005];
int main(){

	FIO 

        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        int n;
        cin>>n;
        
        for(int i=1; i<=2*n; i++)
        {
                int val;
                cin>>val;
                store[val].pb(i);
        }

        /*  
        if there are only one element, that means no pair for that element, so make ans = false 
        we need pair for each and every input 
        */
        bool flag = true;
        for(int i=1; i<=MAX_VAL; i++ )
        {
                if(store[i].size() % 2 == 1)
                {
                        flag = false;
                        break;
                }
        }      
        


        if(flag)
        {        
                for(int i=1; i <=MAX_VAL; i++)
                {
                        // as we need print in pair, so, taking j+=2 index and printing a pair and new line 
                        // (if there are several same value input)
                        for(int j=0; j<store[i].size(); j+=2)
                        {
                                cout<<store[i][j]<<" "<<store[i][j+1]<<endl;
                        }
                }
        }
        else
        {
                cout<<-1<<endl;
        }
        
        return 0;
}