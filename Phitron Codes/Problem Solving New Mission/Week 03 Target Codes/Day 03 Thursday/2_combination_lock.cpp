





/*  
===========
Problem Solving New Mission 
===========

===========
Week 03 - 280223, Tuesday to 060323, Monday
Day 03 : 020323, Thursday 
Time : 03.30 pm  
===========

===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========

===========
QS =  02   ||   A. Combination Lock    ||    https://codeforces.com/problemset/problem/540/A
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






int main(){

        // FIO 

        int n, res = 0, ans = 0;
        string s, t;
        cin>>n>>s>>t;

        for(int i=0; i<n; i++)
        {
                // int x = s[i] - 97;
                // int y = t[i] - 97;
                // res = abs(x - y);
                res = abs((s[i] - 48) - (t[i] - 48));
                ans += min(res, 10-res);
        }

        cout<<ans<<endl;

        return 0;
}







// other approach 


// #include <iostream>
// #include <cstdio>
// #include <cstdlib>
// #include <string>
// using namespace std;
 
// int n;
// string s, p;
// int ans;
 
// int main()
// {
// 	cin >> n >> s >> p;
// 	for (int i = 0; i < n; i++)
// 	{
// 		int x = abs( (int)(s[i] - p[i]) );
// 		ans += min(x, 10 - x);
// 	}
// 	printf("%d\n", ans);
 
// 	return 0;
// }

// int x = s[i] - 97;
// int y = t[i] - 97;
// res = abs((s[i] - 97) - (t[i] - 07));
// res = abs(x - y);
// ans += min(res, 10-res);

// int main() {
// 	int n;
// 	cin >> n;
// 	string s, t;
// 	cin >> s >> t;
// 	int ans = 0;
// 	rep(i, n) {
// 		int x = s[i] - '0', y = t[i] - '0';
// 		ans += min(min(abs(x - y), x + 10 - y), y + 10 - x);
// 	}
// 	cout << ans << endl;
// 	return 0;
// }