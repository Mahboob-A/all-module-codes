



/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 04 : 240223, Friday
Time : 10.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 1 || B. Unlucky Ticket || https://codeforces.com/problemset/problem/160/B
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

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
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

we will be given n and 2 * n size string . 
our task is to find: 
that either each digit of the first half turns out strictly less than the corresponding 
digit of the second half or each digit of the first half turns out strictly more than the corresponding 
digit from the second half.

and the aproach is : 
You can use greedy here: sort digits in first and second half seperately. 
then if the i-th digit in first half is always less than i-th in second half for 1<=i<=n, answer is YES.


*/

char s[250];

int main(){

	FIO 

        int n;
        cin>>n>>s;
        sort(s, s+n);
        sort(s+n, s+2*n);
        if(s[0]>s[n])
        {
                for(int i=0; i<n; i++)
                if(s[i] <= s[i+n])
                {
                        cout<<"NO";
                        return 0;
                }
                cout<<"YES";
        }
        else if(s[0]<s[n])
        {
                for(int i=0; i<n; i++)
                if(s[i] >= s[i+n])
                {
                        cout<<"NO";
                        return 0;
                }
                cout<<"YES";
        }
        else cout<<"NO";


        return 0;
}




















/*  



        string s;
        int n;
        cin>>n;
        cin>>s;
        bool is_less = false, is_greater = false, ans = false;

        for(int i=0; i<n; i++)
        {
                if(s[i] > s[n + i] || s[i] > s[2 * n - i - 1] && is_less == false)
                {
                        is_greater = true;
                        // cout<<endl;
                        // cout<<s[i]<<" "<<s[n + i]<<" "<<s[2 * n - i - 1] <<"  xx"<<endl;
                        if(is_less == false)
                        {
                                // cout<<"xx1"<<endl;
                                ans = true;
                        }
                        else if(is_less == true)
                        {
                                // cout<<"xx2"<<endl;
                                ans = false;
                        }
                }
        //        2
        //         3444

                if(s[i] < s[n + i] || s[i] < s[2 * n - i - 1] && is_greater == false)
                {
                        is_less = true;
                        // cout<<endl;
                        // cout<<s[i]<<" "<<s[n + i]<<" "<<s[2 * n - i - 1] <<"  yy"<<endl;
                        if(is_greater == false)
                        {
                                // cout<<"y2"<<endl;
                                ans = true;
                        }
                        else if(is_greater == true)
                        {
                                // cout<<"y3"<<endl;
                                ans = false;
                        }
                        else if(s[i] == s[n + i] || s[i] == s[2 * n - i - 1])
                        {
                                ans = false;
                        }
                }
        }

        if(ans)
                cout<<"YES"<<endl;
        else 
                cout<<"NO"<<endl;


int main()
{
	int n;
	cin>>n;
	char A[500];
	scanf(" %s",A);
	sort(A,A+n,greater<char>());
	sort(A+n,A+2*n,greater<char>());
	bool men=1,bol=1;
	rep(i,0,n)
		if (A[i]<A[i+n]) bol=0;
		else if (A[i]>A[i+n]) men=0;
		else men=bol=0;
	if (men || bol) puts("YES");
	else puts("NO");
	return 0;
} 
 

 #include<iostream>
#include<algorithm>
using namespace std;
char s[205];
int main()
{
    int n;
    cin>>n>>s;
    sort(s,s+n);
    sort(s+n,s+2*n);
    if(s[0]>s[n])
    {
        for(int i=0;i<n;i++)
            if(s[i]<=s[i+n])
            {
                cout<<"NO";return 0;
            }
        cout<<"YES";
    }
    else if(s[0]<s[n])
    {
        for(int i=0;i<n;i++)
            if(s[i]>=s[i+n])
            {
                cout<<"NO";return 0;
            }
        cout<<"YES";
    }
    else cout<<"NO";
}






*/