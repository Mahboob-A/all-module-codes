


/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 06 : 260223, Sunday
Time : 09.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 3 || B. T-primes || https://codeforces.com/problemset/problem/230/B
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
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 

need to calc primes of 1e5 elements first and process as per question
using sieve algo 

*/


const int MAX =  1e6 + 5;
bool primes[MAX];

void calc_sieve()
{
	primes[1] = true;
	for (ll i = 2; i * i <= MAX; i++) 
        {
		if (primes[i] == false) 
                {
			for (ll j = i * i; j <= MAX; j += i) 
                        {
				// if (primes[j] == false) 
                                // {
					primes[j] = true;
				// }
			}
			
		}
	}
}

// void reset()
// {
//         memset(primes, 0, sizeof(primes));
// }




int main(){

        FIO 

        ll t, n, sq;

        calc_sieve();

      	cin >> t;
	while (t--) 
        {
		cin >> n;
                if(n == 1)
                {
                        cout<<"NO\n";
                }
                else
                {
                        sq = sqrt(n);
                        if (sq * sq == n && primes[sq] == false) 
                        {
                                cout<<"YES\n";
                        } 
                        else 
                        {
                                cout<<"NO\n";
                        }
                }
                        
	}

        return 0;
}





