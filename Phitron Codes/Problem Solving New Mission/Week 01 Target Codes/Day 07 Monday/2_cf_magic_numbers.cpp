



/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 07 : 200223, Monday
Time : 10.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 2 || A. Magic Numbers || https://codeforces.com/problemset/problem/320/A
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

we will be given a n number of value. if it contains mixture of 1 or 14 or 144, then this is magic number. 
but if it is started from non 1 or it has other element that 1 or 4 and if it has more than 2 consequitive
4, then it is not magic number. 
thius 141414 is a magic numbre, it consists of 14 14 14 but 1444 is not magic number 
because we can not make it like 1 14 or 144, (if consider 1, then there are 444 and 444 is not magic number 
and if considered 14, then remains 44 and 44 is not a magic number) 

*/

int main(){
        
        string s;

        cin>>s;

        // the number should begin from 1 
        if(s[0] != '1')
        {
                cout<<"NO"<<endl;
                return 0;
        }

        int found = 0;
        bool ans = true;
        for(int i=0; i<s.size(); i++)
        {
                // if number is not 1 or 4 then false
                if(s[i] == '1' || s[i] == '4')  
                {
                        // if number is 4, then max consequtive 4 could be 2, else false
                        if(s[i] == '4')
                        {
                                found++;
                                if(found>2)
                                {
                                        ans = false;
                                        break;
                                }
                        }
                        else   // if we encountered again 1 after 4, make the found to 0 cause consequtiveness of 4 broken by 1
                        {
                                found = 0;
                        }
                        ans =  true;
                }
                else 
                {
                        ans = false;
                        break;
                }
        }

        if(ans)
        {
                cout<<"YES"<<endl;
        }
        else 
        {
                cout<<"NO"<<endl;
        }


        return 0;
}