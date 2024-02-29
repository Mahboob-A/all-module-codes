





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
QS = 2 || A. k-String || https://codeforces.com/problemset/problem/219/A
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

k string means we will be given a k value and a string we have to make copy of the string of same 
k times. so, to make each copy, we need to make sure that there are sufficient chars in the main 
string. in order to do so, we need to count the freq of all the chars and the count is divisilve by k, 
then we can say that we can make k copies of the strng. 

in order to do so, I have taken a map and storing all of tis count values an again giving output of the res. 

*/

int main(){

        string s, ans = "";
        int k;
        cin>>k>>s;

        map<char, int>mp;

        // if size is not even by k tiems, then we can not make any copy  
        if(s.size() % k == 1)
        {
                cout<<-1<<endl;
                return 0;
        }


        for(auto ch : s)
        {
                mp[ch]++;
        }

        for(auto chi : mp)
        {
                // cout<<chi.first<<" "<<chi.second<<endl;
                if(chi.second % k == 0)// if the count of any ch is divisble by k, 
                {
                        for(int i=0; i<chi.second / k; i++)   // then take half of the char to ans 
                        {
                                ans += chi.first;
                        }
                }
                else // if the char count is not divisble by k, then we can not make any copy of it 
                {
                        cout<<-1<<endl;
                        return 0;
                }
        }


        // now print the ans k times to show the k times copy 
        for(int i=0; i<k; i++)
        {
                cout<<ans;
        }
        cout<<endl;

        return 0;
}

