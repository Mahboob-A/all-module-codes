








/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 06 : 200223, Monday
Time : 08.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 4 || A. Football || https://codeforces.com/problemset/problem/43/A
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

we will be given n and m and n and m elements. 
we have to check if we could devid arr2 element by whole by the arr1 elements, 
and if so, we have to take most common quotient vagfol 


*/

const int N = 110;
int arr[N], arr2[N];

int main(){


        int n, m;
        cin>>n;

        for(int i=0; i<n; i++)
        {
                cin>>arr[i];
        }
        
        cin>>m;

        for(int i=0; i<m; i++)
        {
                cin>>arr2[i];
        }
        
        int mx = -1;
        int  count = 0;
        for(int i=0; i<m; i++)
        {
                int k = arr2[i];
                for(int j=0; j<n; j++)
                {
                        // k % arr[j] can be devided by whole 
                        // check b % a basically if( arr = a and arr2 = b)
                        if(k % arr[j] == 0)
                        {
                                int quotient = k / arr[j];   // take the quotient 
                                if( quotient== mx)  // if quotient is same as mx, then we have found another ratio so increment count 
                                {
                                        count++;
                                }
                                else if( quotient  > mx)  
                                {
                                        // if quotient is > mx this means that we have found this quotient for the first time so make 
                                        // so make this quotient as the mx and make count = 1 
                                        mx = quotient;
                                        count = 1;
                                }
                        }
                }

        }

        cout<<count<<endl;
        // cout<<mx<<endl;

        return 0;
}

/*  

For(i, m)
        {
                cin>>arr2[i];
        }

        int mx_ratio = -1, count = 0;

        For(i, n)   // running loop from 1 ot n 
        {
                For(j, m)  // from 1 to m 
                {
                        count = 0;   // making the count reinitialize to 0 
                        if(arr2[j] % arr1[i] == 0)  // if they could be diveded by whole, then increment count 
                        {
                                count++;
                        }
                }
                // take the max of count after each arr[i] iteration 
                mx_ratio = max(mx_ratio, count);
        }

        cout<<mx_ratio<<endl;

*/