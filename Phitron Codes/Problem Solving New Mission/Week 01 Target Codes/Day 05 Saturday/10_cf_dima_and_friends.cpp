



/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 05 : 180223, Saturday 
Time : 04.30 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 10  || A. Dima and Friends || https://codeforces.com/problemset/problem/272/A
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

we will be given n and n values of input. 
we have to add one 1 as the dima, the main chraracter is not included in the total_friends, 
so total_friends = n + 1. 
now, n finger (max 5 of finger value) will be given, and we have to check 
in how many ways dima could show his finger so that the count of all total_friends's shown finger 
does not end on dima. 

i.e n + 1 is total no of friends. the count begins from dima, and he is at number 1 position.
now what should dima show (1, 2, 3, 4 5 in between) so that the finger count does not end on him 

*/

int main(){

        int n, total_friends, total_finger_shown, curr_pos_of_finger_on_friend, count = 0;
        cin>>n;

        // as dima is not included initiallay, the total_friends = n + 1 
        total_friends = n + 1;  
        
        // taking input of the finger shows by all n friends 
        for(int i=0; i<n; i++)
        {
                int val;
                cin>>val;
                total_finger_shown += val;
        }

        // getting on which friend the current finger or count is pointed 
        curr_pos_of_finger_on_friend = total_finger_shown % total_friends; 

        // now calculating ans for each finger as 1 to 5 
        for(int i=1; i<=5; i++) // as max 5 finger could be shown in hand 
        {
                // incrementing the fringer to the next friend 
                curr_pos_of_finger_on_friend += 1;

                // if after incrementing the fringer to next friend, current position of finger count 
                // goes beyond the total friends, then we must begin from beginning ie from dima or form 1 again 
                if(curr_pos_of_finger_on_friend > total_friends)
                {
                        curr_pos_of_finger_on_friend = 1;
                }
                // if after incrementing the finger positing, the finger is at somewhere else and it not 
                // gone beyond total number of briends and current finger position is not currently on 
                // dima i.e on 1, then dima could show this number of finger, as showing this 
                // finger the finger count from curr pos would not end on him. 
                else if(curr_pos_of_finger_on_friend != 1)
                {
                        count++;
                }
        }

        cout<<count<<endl;


        

        return 0;
}


