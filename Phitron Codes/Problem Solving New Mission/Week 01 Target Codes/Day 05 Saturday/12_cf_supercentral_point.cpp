





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
QS = 12  || A. Supercentral Point || https://codeforces.com/problemset/problem/165/A
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

this is just logical implementation. 
the logic is described in the question, and I just have implemented the logic. 
the question has provided logic of when two coordinate x and y could be of another two coordinates 
left, right, up and down. 
any two coordinates x1y1 are Supercentral Point to any two coordinates of x y if x y is 
sorrounded by left right up and down side coordinates. //    

*/


// link : https://onlinegdb.com/NjxbXUoLG
/*
int x[1001],y[1001];
int main()
{
	int n,i,j,ans=0;
	scanf("%d",&n);
	for(i=0;i<n;++i)
		scanf("%d%d",&x[i],&y[i]);
	for(i=0;i<n;++i)
	{
		int cnt=0;
		for(j=0;j<n;++j)
			if(j!=i)
			{
				if(x[j]==x[i]&&y[j]<y[i])
					cnt|=1;
				if(x[j]==x[i]&&y[j]>y[i])
					cnt|=2;
				if(y[j]==y[i]&&x[j]<x[i])
					cnt|=4;
				if(y[j]==y[i]&&x[j]>x[i])
					cnt|=8;
			}
		if(cnt==15)
			ans++;
	}
	printf("%d\n",ans);
	return 0;
}

*/


const int N = 210;
int main(){
 
        int n, x[N], y[n];
        cin>>n;
        for(int i=0; i<n; i++)
        {
                cin>>x[i]>>y[i];
        }
 
        int count = 0;
        for(int i=0; i<n; i++)
        {
                int left = 0, right = 0, up = 0, down = 0;
                for(int j=0; j<n; j++)
                {
                        if(i != j)
                        {
                                if(x[j] < x[i] && y[i] == y[j])
                                {
                                        left = 1;
                                }
                                if(x[j] > x[i] && y[i] == y[j])
                                {
                                        right = 1;
                                }
                                if(x[i] == x[j] && y[j] < y[i])
                                {
                                        down = 1;
                                }
                                if(x[i] == x[j] && y[j] > y[i])
                                {
                                        up = 1;
                                }

                        }
                }
                if(left == 1 && right == 1 && up == 1 && down == 1)
                {
                        count++;
                }
        }
 
        cout<<count<<endl;
 
        return 0;
}

//*/ 

/*
const int N = 210;
int main(){

        int n, x[N], y[n];
        cin>>n;
        for(int i=0; i<n; i++)
        {
                cin>>x[i]>>y[i];
        }

        int count = 0;
        for(int i=0; i<n; i++)
        {
                int left = 0, right = 0, up = 0, down = 0;
                for(int j=0; j<n; j++)
                {
                        if(x[i] > x[j] && y[i] == y[j])
                        {
                                left = 1;
                        }
                        if(x[i] < x[j] && y[i] == y[j])
                        {
                                right = 1;
                        }
                        if(x[i] == x[j] && y[i] > y[j])
                        {
                                down = 1;
                        }
                        if(x[i] == x[j] && y[i] < y[j])
                        {
                                up = 1;
                        }
                }
                if(left == 1 && right == 1 && up == 1 && down == 1)
                {
                        count++;
                }
        }

        cout<<count<<endl;

        return 0;
}

*/

