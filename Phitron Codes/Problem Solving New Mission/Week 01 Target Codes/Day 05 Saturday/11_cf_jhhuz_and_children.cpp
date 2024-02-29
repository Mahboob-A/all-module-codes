





/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 05 : 180223, Saturday 
Time : 09.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 11  || A. Jzzhu and Children || https://codeforces.com/problemset/problem/450/A
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
vector<int>answer;
vector<pii>allSrc;
pii src, destination;
//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 

we wil be given n and max candy. and n values. 
n values are the candy each student want but max_candy is the candy is distributed 
for each student. if after distributing max candy to a student and he does not get 
his desited candy, he is lined again at the end of the line. when we see 
any student got is desired candy, he is removed from the line. 
in this way, we have to check who got the candy in the last time. 

*/

int main(){

        // n is number of students and max_candy is the candy would be given to each 
        // student each time 
        int n, max_candy;
        int candy_wanted[110];

        cin>>n>>max_candy;

        
        for(int student = 1; student<=n; student++)
        {
                cin>>candy_wanted[student];
        }

        queue<int>q;
        // pushing all the students in a queue 
        for(int student=1; student<=n; student++)
        {
                q.push(student);
        }


        while(!q.empty())
        {
                int student = q.front();
                q.pop();

                if(q.size() == 0)
                {
                        cout<<student<<endl;  // this is the last student that got candy in the line 
                        return 0;
                }

                // if the teacher gives candy that is less than or equal to the candy the student wanted, 
                // then continue, as he does not need any more candy 
                if(candy_wanted[student] <= max_candy)
                {
                        continue;
                }      

                // in the case of students who wants more candy than the candy the teacher gives, 
                // we just store the remaining needed candy in its index (substracting the candy he wants and the 
                // candy is given is the remaining candy he is needed to give)
                candy_wanted[student] = abs(candy_wanted[student] - max_candy);
                // after substracting, if we see that he still has more candy to get, we just line the student 
                // to the last of the line pushing the student to the queue 
                if(candy_wanted[student] > 0)
                {
                        q.push(student);
                }
        }

        return 0;
}


