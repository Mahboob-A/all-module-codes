

/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 05 : 180223, Saturday 
Time : 09.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 02 || A. Boy or Girl || https://codeforces.com/problemset/problem/236/A
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define INT_INF 1e8
vector<int>ans;
vector<pii>allSrc;
pii src, destination;
//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 

we will be given a string of max length <= 100 and we have to find the number 
of distinct characters in the in the string. if the result is even print chat with her and if 
the result is odd, then print ignore him 
*/

int main(){

        /*  // we can also use set to find the distinct char || 
        // find number of distinct char in a string : logical implementation 
        finding the distinct chars in a string. firstly, 
        we have taken a bool array to check which char we have found so far.
        when ever we encounter a char and we never found 
        it before, we get its alphabetic order from 0 to 25 for the index 
        and make it as found = true and count++. this count variable holds the number of
        distinct char in the string. 

        */
        bool found[26];
        memset(found, false, sizeof found);

        string s;
        cin>>s;
        int sz = s.size();
        int count = 0;
        for(int i=0; i<sz; i++)
        {
                int index = s[i] - 97;    // getting the 0 - 25 value for the array (the char's pos from 0 to 25 in alphabetic order )
                if(s[i] >= 97 && s[i] <=122 && found[index] == false)   // we are taking only for the first time the distinct char 
                {
                        count++;
                        found[index] = true;  // making the char index as true so never count it again 
                }
        }

        if(count % 2 == 0)   // if even, then chat with her else he is a boy so ignore him 
        {
                cout<<"CHAT WITH HER!"<<endl;
        }
        else 
        {
                cout<<"IGNORE HIM!"<<endl;
        }

        return 0;
}