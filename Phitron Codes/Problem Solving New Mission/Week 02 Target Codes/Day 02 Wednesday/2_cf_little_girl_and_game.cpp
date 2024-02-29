




/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 02 : 220223, Wednesday
Time : 03.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 2 || B. Little Girl and Game || https://codeforces.com/problemset/problem/276/B
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

we will be given a string. 
Two players have got a string s, consisting of lowercase English letters. 
They play a game that is described by the following rules:

The players move in turns; In one move the player can remove an arbitrary letter from string s.
If the player before his turn can reorder the letters in string s so as to get a palindrome, this player wins. 
A palindrome is a string that reads the same both ways (from left to right, and vice versa). For example, 
string "abba" is a palindrome and string "abc" isn't.


well, to form a palindrome, we can have at most or minimum of 1 char with odd frequency. 
let us look at how to come up with a solution for this. now to form a palimdrome we can have atmost 1 letter with odd frequence.

once that part is clear one on try and observe how a single move changes the frequency of such letters

suppose it was A’s turn. he can do one of two things. either remove a character that has odd frequency and decrease the letters with odd frequency by 1 or he can remove a character that has even frequency and increase the letters that have odd frequency by 1.

now when B moves, he can also perform one of the two above moves. let us see what happens as the end result after both of them had their turn.

the letters with odd frequency have increased by 2 or remained same or decreased by 2. (perform all the combination of above moves to verify the result)

which means after 2 moves the parity doesnot change.

let us now form it into an actual solution. count the letters with odd frequency. if they are less than 2 or odd first players wins. other wise 2nd player wins. ( try and simulate it to get a better idea )

*/

int arr[50];

int main(){

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        string s;
        cin>>s;

        for(int i=0; i<s.size(); i++)
        {
                int index = s[i] - 'a';
                arr[index]++;
        }

        int odd_freq = 0;
        for(int i=0; i<26; i++) 
        {
                if(arr[i] % 2 == 1)
                {
                        odd_freq++;
                }
        }

        if(odd_freq == 0 || odd_freq == 1)
        {
                cout<<"First"<<endl;
        }
        else if(odd_freq % 2  == 0)
        {
                cout<<"Second"<<endl;
        }
        else
        {
                cout<<"First"<<endl;
        }

        return 0;
}