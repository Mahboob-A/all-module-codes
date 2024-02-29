







/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 02 : 220223, Wednesday
Time : 10.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 7 || A. Kitahara Haruki's Gift || https://codeforces.com/problemset/problem/433/A
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
we will be given two string. 
and we have to check is after altering any two char from the string one, if we could make string two. 

i.e. if we swap any two character's position in the string one and make it exactly like the string two, 
then we can say yes. 

so, we will take the size count and if the size is not equal, then no. 

then run a loop, and take two char array of size 2, and when both the string differ, store the 
char in both char array. 

the arr[1] should be == arr2[0] and arr[0] should be == arr2[1]
else no 

rtfabanpc
atfabrnpc

we could swap r and 2nd a from string 1 to make it exactly like string 2 

*/

int main(){

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        string a, b;
        cin>>a>>b;

        if(a.size()  !=  b.size())
        {
                cout<<"NO"<<endl;
                return 0;
        }

        char aa[20],  bb[20];

        bool flag = true;
        int indx = 0;
        for(int i=0; i<a.size(); i++)
        {
                if(a[i] != b[i])
                {
                        aa[indx] = a[i];
                        bb[indx] = b[i];
                        indx++;
                }
                if(indx > 2)
                {
                        flag = false;
                        break;
                }
        }

        if(aa[0] != bb[1] || aa[1] != bb[0])
        {
                flag = false;
        }

        if(flag)
        {
                cout<<"YES"<<endl;
        }
        else 
        {
                cout<<"NO"<<endl;
        }

        return 0;
}

