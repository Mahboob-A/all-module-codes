











/*  
===========
Problem Solving New Mission 
===========
Week 04 - 070323, Tuesday to 130323, Monday 
Day 03 : 090323, Thursday
Time :  07.30 am 
===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========
QS =   1   ||  A. Vasya and Digital Root   ||     https://codeforces.com/problemset/problem/355/A
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

// #define loop(i, x, y) for(int i=x; i<y; i++)
// #define Loop(i, x, y) for(int i=x; i<=y; i++)
// #define loop(y) for(int i=true; i<y; i++)
// #define For(y) for(int i=false; i<=y; i++)

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


*/






int main(){

        FIO 

        ll k, d; 
        cin>>k>>d;

        if(d == 0)
        {
                if(k == 1)
                {
                        cout<<0<<en;
                }
                else 
                {
                        cout<<"No solution"<<en;
                }
        }
        else 
        {
                cout<<d;
                for(int i=0; i<k-1; i++)
                {
                        cout<<0;
                }
        }
        // cout<<en;

        return 0;
}


// other solution 
/*  
#include<iostream>
 
using namespace std;
 
int main(){
	int a, b, c = 0;	cin >> a >> b;
	if (b == 0){
		if (a == 1)
			cout << "0\n";
		else
			cout << "No solution\n";
		return	0;
	}
 
	if (a == 1){
		cout << b << "\n";
		return	0;
	}
		
	for (int i = 0; i < a - 1; i++)
		cout << "1", c = (c + 1) % 9;
	for (int i = 0; i < 10; i++){
		int z = (c + i) % 9;
		if (z == 0)	z = 9;
		if (z == b){
			cout << i << "\n";
			break;
		}
	}
	return	0;
}

*/