

/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 02 : 220223, Wednesday
Time : 12.30 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 5 || A. Xenia and Divisors || https://codeforces.com/problemset/problem/342/A
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



*/

int arr[8];

int main(){

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int n, t;
        cin >> n;
        for (int i=1;i<=n;i++)
        {
                cin >> t;
                arr[t]++;
        }

        // for(int i=1; i<=n; i++)
        // {
        //         cout<<i<<" ->  "<<arr[i]<<endl;
        // }

        // cout<<endl;
        int X,Y,Z;
        X = arr[4];
        Z = arr[3];
        Y = n/3-X-Z;

        // cout<<X<<" "<<Z<<" "<<Y<<endl;
        // cout<<endl;
        if (Y<0 || X+Y!=arr[2] || Y+Z!=arr[6] || n/3!=arr[1])
        {
                cout << - 1 << endl;
                return 0;
        }

        while (X--) cout << "1 2 4" << endl;
        while (Y--) cout << "1 2 6" << endl;
        while (Z--) cout << "1 3 6" << endl;


        return 0;
}

