







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
QS = 6 || B. Airport || https://codeforces.com/problemset/problem/218/B
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

we will be given n number of passengers and m, number of planes and m values 
as the fare. the m'i (m's ith each value) is its fare, and when ever we have used a fare, 
we need to decrease the i'th value by one, and it will be its new fare. 

so, the key take way of this problem is that we have to count the maximum
and minimum sum of m elements given that we will decrrease by 1 the m'i values when 
we calculate the value each time. 

method 1 : 
so I have used to min and max priority_queue and pushed m values in it. 
so running the loop till n times and taking the front of them and adding to result. 
as we need the maximum and minimum profit. 

*/

int seats[1010];
int seats2[1010];

// below code is ac, I was tring to imply with array, only made the min profit in this code 
int main(){

        int n, m;
        cin>>n>>m;

        for(int i=0; i<m; i++)
        {
                cin>>seats[i];
                seats2[i] = seats[i];
        }

        // min profit  
        // sorting the seats (also price of seats) in ascending order to count min profit 
        sort(seats, seats + m);
        int pos = 0, mn = 0;
        for(int i=0; i<n; i++)
        {
                int fare = seats[pos];
                cout<<"pos : "<<pos<<" |  "<<fare<<endl;
                mn += fare;
                seats[pos]--;
                sort(seats, seats + m);
                pos = (pos + 1) % m;
                if(seats[pos - 1] < seats[pos] && seats[pos - 1] > 0)
                {
                        pos = pos - 1;
                }
        }       



        sort(seats, seats + m);
        int pos = 0, mn = 0;
        for(int i=0; i<n; i++)
        {
                int fare = seats[pos];
                cout<<"pos : "<<pos<<" |  "<<fare<<endl;
                mn += fare;
                seats[pos]--;
                sort(seats, seats + m);
                pos = (pos + 1) % m;
                if(seats[pos - 1] < seats[pos] && seats[pos - 1] > 0)
                {
                        pos = pos - 1;
                }
        } 
        
        cout<<endl;
        cout<<endl<<mn<<endl;




        return 0;
}
        /*
        // ac code with priority_queue
        int n, m;

        priority_queue<int>q;
        priority_queue<int, vector<int>, greater<int>>pq;
        
        cin>>n>>m;
        int sum = 0;
        for(int i=0; i<m; i++)
        {
                int x;
                cin>>x;
                q.push(x);
                pq.push(x);
                // cin>>seats[i];
                // sum += seats[i];
        }

        int mn = 0, mx = 0;

        // mx pq, counts the max 
        for(int i=0; i<n; i++)
        {
                int fare = q.top();
                q.pop();
                mx += fare;
                fare--;
                if(fare > 0)
                {
                        q.push(fare);
                }
        }

        // mn pq, counts the min value 
        for(int i=0; i<n; i++)
        {
                int fare = pq.top();
                pq.pop();
                mn += fare;
                fare--;
                if(fare > 0)
                {
                        pq.push(fare);
                }
        }

        cout<<mx<<" "<<mn<<endl;

*/

