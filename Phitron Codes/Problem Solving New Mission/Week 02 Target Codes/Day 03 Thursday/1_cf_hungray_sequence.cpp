






/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 03 : 230223, Wednesday
Time : 05.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 1 || B. Hungry Sequence || https://codeforces.com/problemset/problem/327/B
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
the problem tells that we need to print a increasing sequence that any i is < j and any j is not divisible by 
its previous i. 

i.e any two adjacent value, the left or the first one should be smaller than the right one, and right one 
should not be divisible by its left one. 

so, if we see that any increasing number by 1  from n is increased by one any any right one is not 
divisible by its left one. i.e if n = 3 , the sequence would be like 3 4 5 and 5 is not divisible by 4. this is 
the sequence asked. 


*/

int main(){

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n;
        cin>>n;

        // beginning from n and goes thill  2 * n - 1 pos 
        for(int i=n; i<= 2 * n-1; i++)
        {
                cout<<i<<" ";
        }


        /*      other approach 
        
        
        for(int i=n; i<= 2 * n-1; i++)
        {
                cout<<i<<" ";
        }


        cout<<endl;

        cout<<endl;
        // for(int i=1000000; i<1000000 + n; i++)
        // {
        //         cout<<i<<" ";
        // }


        // long long int n,count=0;
        //  long long int i,j,k;

        //  cin>>n;

        //  for(i=1;count<n;i++)
        //  {
        //      cout<<n+i<<" ";
        //      count++;

        //  }

        //         int n;
        //     scanf("%d",&n);
        for(int i=n-1;i>=0;i--){
                printf("%d ",10000000-i);
        }
        */

        return 0;
}