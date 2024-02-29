


/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 01 : 210223, Tuesday
Time : 02.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 1 || A. Dubstep || https://codeforces.com/problemset/problem/208/A
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

we will be given a string like this : "  WUBWUBABCWUB  " which will have WUB in the string. 
we have to ectract the non WUB words given space between them, and print it. 


*/

int main(){


        string s;
        cin>>s;

        string ans = "";
        bool adSpace = false;
        int wub_count = 0;
        // running loop till size - 3 because it is guranted that the last three chars are WUB 
        for(int i=0; i<s.size(); i++)
        {
                // it the next three chars are w u and b, then move i to i+2 i.e to the B 'th pos, and count 
                // how many wub we have got so far. we only add space if the count is 1, and for consquitive 
                // wub, we will not add space 
                if(s[i] == 'W' && s[i+1] == 'U' && s[i+2]  == 'B')  
                {
                        i += 2;
                        wub_count++;
                        if(wub_count == 1 && adSpace)
                        {
                                ans += " ";
                        }
                }
                else 
                {
                        // if we have encountered that the next three chars are not wub, then 
                        // we can add space, to make adSpace as true and wub_count to 0. 
                        // ad space only needed not to add space for the first time as the first 
                        // word will be wub, so it will add space to ans, so to overcome it, we will add
                        // space for the first time when we see that the next char are not wub. 
                        adSpace = true;
                        wub_count = 0;
                        ans += s[i];
                }
        }

        cout<<ans<<endl;


        return 0;
}

