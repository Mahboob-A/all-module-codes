







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
QS = 3 || B. Easy Number Challenge || https://codeforces.com/problemset/problem/236/B
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
typedef long long ll;
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 



*/

// need to understand clearly this question 
vector<int> divs(1e6 + 1, 1);
vector<int> primes;
 
void calc_divs()
{
        for (int i = 2; i < divs.size(); ++i) 
        {
                for (int j = i; j < divs.size(); j += i) 
                {
                        ++divs[j];
                }
        }
}
 
int main() {

        calc_divs();
        
        int a, b, c;
        cin >> a >> b >> c;
        
        long long mod = 1073741824;
        long long sum = 0;
        for (int i = 1; i <= a; ++i) 
        {
                for (int j = 1; j <= b; ++j) 
                {
                        for (int k = 1; k <= c; ++k) 
                        {
                                sum += divs[i * j * k];
                                sum %= mod;
                        }
                }
        }
 
        cout << sum << '\n';
 
        return 0;
}

