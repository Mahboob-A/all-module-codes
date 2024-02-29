





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

we will be given n and n number of string of 2 types, the types does not exceed 2. 
i.e str a or str b. 

but what kind of char will be in the string is not given, and we have to 
output which type of string has been given most time. 
so, we just took two empty sting and two count variable. 
and stores the respected string and incrising the count. 


*/

int main(){


        int n;
        cin>>n;
        
        string str1 = "", str2 = "";

        int count1 = 0, count2 = 0;

        loop(i, n)
        {
                string s;
                cin>>s;
                if(str1 == "")    // if s is the first string given input, then store it in str1 and increment count 
                {
                        count1++;
                        str1 = s;
                }
                else if(s == str1) // if we have encountered same string again, just increment the count 
                {
                        count1++;
                }
                else   // if the string is not encountered before, then store this string and increment its count. 
                {
                        count2++;
                        str2 = s;
                }
        }

        // whichever count is greater, has been the winner of the match 
        if(count1 > count2)
        {
                cout<<str1<<endl;
        }
        else
        {
                cout<<str2<<endl;
        }



        return 0;
}