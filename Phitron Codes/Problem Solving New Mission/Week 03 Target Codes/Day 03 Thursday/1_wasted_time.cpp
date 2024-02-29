






/*  
===========
Problem Solving New Mission 
===========

===========
Week 03 - 280223, Tuesday to 060323, Monday
Day 03 : 020323, Thursday
Time : 08.00 am 
===========

===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========

===========
QS =  01   ||    A. Wasted Time   ||   https://codeforces.com/problemset/problem/127/A
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


*/





const double writing_speed = 50;
int main(){

        // FIO 

        int n, k;
	cin >> n >> k;
 
	vector <int> x(n+1), y(n+1);
 
	for(int i = 1; i <= n; i++)
	{
		cin >> x[i] >> y[i];
	}
 
	double s = 0;
 
	for(int i = 1; i < n; i++)
	{
		s += sqrt(pow(x[i+1] - x[i], 2.) + pow(y[i+1] - y[i], 2.));
	}

        cout<<fixed<<setprecision(6)<<s*k/writing_speed<<endl;

        return 0;
}







