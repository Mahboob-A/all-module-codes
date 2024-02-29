







/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 01 : 210223, Tuesday
Time : 02.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 4 || A. String Task || https://codeforces.com/problemset/problem/118/A
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

we will be given a string like this "  aBAcAba   " and we have to perform these : 
        - deletes all the vowels,
        - inserts a character "." before each consonant,
        - replaces all uppercase consonants with corresponding lowercase ones.
        - Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants


*/

int main(){

        string s, ans = "";
        cin>>s;

        for(int i=0; i<s.size(); i++)
        {
                char c = s[i];
                // continue vowels 
                if(c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u' || c == 'Y' || c == 'y')
                {
                        continue;
                }
                else if(c >= 65 && c <= 92)   // if uppercase then make lowercase 
                {
                        ans += '.';
                        ans += c + 32;
                }
                else   // if lowercase just add char to ans with precedent dot 
                {
                        ans += '.';
                        ans += c;
                }
        }

        cout<<ans<<endl;


        return 0;
}

