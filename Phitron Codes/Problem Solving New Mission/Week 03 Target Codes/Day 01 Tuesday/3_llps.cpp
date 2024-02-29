





/*  
===========
Problem Solving New Mission 
===========

===========
Week 03 - 280223, Tuesday to 060323, Monday
Day 01 : 280223, Tuesday
Time : 03.30 pm  
===========

===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========

===========
QS =  01   ||    A. LLPS   ||     https://codeforces.com/problemset/problem/716/A
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

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
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define no_ans cout<<-1<<"\n"
#define en '\n'
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 

Lexicographically Largest Palindromic Subsequence is we will only take the Lexicographically bigger
char form the Palindrome and print them number of 
times they appeared in the Palindrome, if Lexicographically smallest Palindromic
Subsequence is needed, we just take Lexicographicallysmallest character in the Palindrome.  


*/






int main(){

        FIO 

        // Lexicographically Largest Palindromic Subsequence
        // just a basic greedy approach 
        string s;
        cin>>s;

        int count = 0;
        char max_char = s[0];

        for(int i=0; i<s.length(); i++)
        {
                if(s[i] == max_char)
                {
                        count++;
                }
                else if(s[i] >= max_char)
                {
                        max_char = s[i];
                        count = 1;
                }
        }

        for(int i=0; i<count; i++)
        {
                cout<<max_char;
        }

        

        // Lexicographically smallest Palindrome Subsequence 
        /*
        string s;
        cin>>s;

        int count = 0;
        char min_char = s[0];
        for(int i=0; i<s.size(); i++)
        {
                if(min_char == s[i])
                {
                        count++;
                }
                else if(s[i] < min_char)
                {
                        min_char = s[i];
                        count = 1;
                }
        }

        for(int i=0; i<count; i++)
        {
                cout<<min_char;
        }

        */

        return 0;
}




