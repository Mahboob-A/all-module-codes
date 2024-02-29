




/*  
===========
Problem Solving New Mission 
===========
Week 04 - 070323, Tuesday to 130323, Monday 
Day 01 : 070323, Tuesday 
Time :  10.00 am 
===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========
QS =   01  ||   A. Uncowed Forces   ||     https://codeforces.com/problemset/problem/604/A
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

        int m[5], w[5], hs, hu;
        for (int i = 0; i < 5; i++) 
        {
                cin >> m[i];
        }
        for (int i = 0; i < 5; i++) 
        {
                cin >> w[i];
        }
        cin >> hs >> hu;
        int points[5] = {500, 1000, 1500, 2000, 2500};
        double totalScore = 0;
        for (int i = 0; i < 5; i++) 
        {
                double score = max(0.3 * points[i], (1 - m[i] / 250.0) * points[i] - 50 * w[i]);
                totalScore += score;
        }
        totalScore += hs * 100 - hu * 50;
        cout << (int) totalScore << en;

        return 0;
}


// other submisson 
/*  
#include<bits/stdc++.h>
using namespace std;
int m[6],w[6];
int sc[6]={0,500,1000,1500,2000,2500};
int h,hh;
int main() {
	for(int i=1;i<=5;i++) {
		scanf("%d",&m[i]);
	} 
	for(int i=1;i<=5;i++) {
		scanf("%d",&w[i]);
	}
	scanf("%d%d",&h,&hh);
	int res=h*100-hh*50;
	for(int i=1;i<=5;i++) {
		res=res+max(sc[i]/10*3,sc[i]/250*(250-m[i])-50*w[i]);
	}
	printf("%d\n",res);
	return 0;
}


*/