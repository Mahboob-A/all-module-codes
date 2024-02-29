






/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 07 : 270223, Monday 
Time : 09.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS =   5  ||  B. Appleman and Card Game      ||     https://codeforces.com/problemset/problem/462/B
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

// #define loop(i, x, y) for(int i=x; i<y; i++)
// #define Loop(i, x, y) for(int i=x; i<=y; i++)
// #define loop(y) for(int i=true; i<y; i++)
// #define For(y) for(int i=false; i<=y; i++)

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i, y) for(int i=true; i<y; i++)
#define For(i, y) for(int i=false; i<=y; i++)
#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define INT_INF 1e8
#define ll long long
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define no_ans cout<<-1<<"\n";
#define en '\n';
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 

this is a greedy problem. n size's string is given and k sized string should be taken out of n size string. 

we have to take maximum number of same character's feequency until k. 
the main funda of the problem is that the point is based on the number of same characters card
i.e if there are Z card 5 times and H characters 4 times and k is 3 (ZZHHZZHZ)
then we can take max 3 char. so, if we take Z only, we could get 3 * 3 = 9 as 
there are 3 z and for each z the point will be (total number of same characters * how many times the 
char is taken) = total point 

- take a count array 
- run a loop i = 25, i>=0 and k > 0 i--
        - if count[i] >= k 
                - then sum += count [i] * count[i] 
                - k = 0
        - else 
                - sum += count [i] * count[i] 
                - k -= count[i]

cout  sum 

*/





ll cnt[26];

int main(){

        FIO 

        ll n, k;
        string s;
        cin>>n>>k>>s;


        for(ll i=0; i<n; i++)
        {
                cnt[s[i] - 65]++;
        }

        // sort the count array 
        sort(cnt, cnt + 26);

        ll sum = 0;
        for(ll i=25; i>=0 && k > 0; i--)
        {
                if(cnt[i] >= k)
                {
                        sum += k * k;
                        k = 0;  // no more need to add char 
                }
                else 
                {
                        sum += cnt[i] * cnt[i];
                        k -= cnt[i];  // this many char still needed 
                }
        }

        cout<<sum<<endl;

        return 0;
}





